using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.LiveVariables;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Model.Filters;
using InnonAnalytics.Service.Exceptions;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Data.Entity;
using System.Data.Entity.Infrastructure;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
    public class ElementRepository : AuditRepository, IElementRepository
    {

        private IInnonAnalyticsEngineEntities _dbcontext;
        private IMetricRepository _metricRepository;
        private IConnectorRepository _connector_rep;

        private ILiveVariable _liveVariable;
        private int _connection_id;

        public ElementRepository(IInnonAnalyticsEngineEntities db)
        {
            _dbcontext = db;

        }

        public ElementRepository(IInnonAnalyticsEngineEntities db, IMetricRepository metricRepository, IConnectorRepository connector_rep)
        {
            _dbcontext = db;
            _metricRepository = metricRepository;
            _connector_rep = connector_rep;
        }


        public IList<Audit_DTO> GetElementAudit(string row_id)
        {
            return GetAudit(row_id, nameof(tblElement));
        }


        /// <summary>
        /// This function dropdownliast and other controls
        /// </summary>
        /// <returns></returns>
        public IList<ElementDTO_Limited_Properties> GetElementLimitedProperties()
        {
            IList<tblElement> elements = (from e in _dbcontext.tblElements select e).OrderBy(order => order.Element_Name).ToList();
            return ElementDTO_Limited_Properties_Convert.ConvertTableListToDTOList(elements);
        }

        public IList<ElementDTO> GetElement()
        {
            ICollection<tblElement> elements = (from e in _dbcontext.tblElements.Include("tblTagElements")
                                                select e).ToList();
            //Filter TagElement Table get not deleted tagselement
            foreach (var element in elements)
            {
                element.tblTagElements = element.tblTagElements.Where(d => d.Is_Deleted == false).ToList();
            }

            return ElementDTO.ConvertTableListToDTOList(elements);
        }


        public IList<RawDataDTO> Get_Raw_Data_By_Element_Id(long element_id)
        {
            try
            {
                tblElement tbl_element = _dbcontext.tblElements.Find(element_id);
                if (tbl_element?.Connector_History_ID != null)
                {
                    //Get connection information
                    int connection_id = (int)tbl_element.Connector_History_ID;
                    ConnectorDTO _dto_connector = _connector_rep.GetExistingConnectionById(connection_id);
                    InnonAnalyticsEngineEntities __dbcontext = new InnonAnalyticsEngineEntities();
                    IRawDataRepository _rawDataRepository = new RawDataRepository();

                    DateTime fromDate = DateTime.Now.AddMonths(-6);
                    DateTime ToDate = DateTime.Now;

                    return _rawDataRepository.GetRowData(tbl_element.Source_Element_Name_History, fromDate, ToDate, _dto_connector, __dbcontext);
                }
                return null;
            }
            catch (Exception ex)
            {
                throw ex;
            }


        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="element_tag_type">This is enum,   site =1, equip = 2, point=3,       extendedpoint=4, // Extended Point is not belongs to haystake, this our extended Tag type department = 5, floor = 6,  utilities = 7,  zone = 8</param>
        /// <param name="Is_Disabled">If is Is_Disabled is true it mean return all the disabled elements </param>
        /// <returns></returns>
        public IList<ElementDTO> Get_Element_By_Element_Tag_Type(TagType element_tag_type, bool Is_Disabled)
        {
            ICollection<tblElement> elements = _dbcontext.tblElements.Include("tblTagElements").Where(element => element.Element_Tag_Type == element_tag_type.ToString() && element.Is_Disabled == Is_Disabled).ToList();
            //Filter TagElement Table only not deleted
            foreach (var element in elements)
            {
                element.tblTagElements = element.tblTagElements.Where(d => d.Is_Deleted == false).ToList();
            }
            return ElementDTO.ConvertTableListToDTOList(elements);
        }

        public IList<LivePoint_DTO> GetLivePoints()
        {
            IList<Tbl_Element_Note_DTO> element_note = getElementBy_DataConnector_Type(DataSouceConnectionType.Live, true);
            IList<LivePoint_DTO> list_livepoint_dto = LivePoint_Conversion.Convert_List_Tbl_Element_To_LivePoint_DTO(element_note);

            foreach (LivePoint_DTO livepoint in list_livepoint_dto)
            {
                ReadLivePoint(element_note.FirstOrDefault(element => element.tbl_Element.ID == livepoint.Point_Id).tbl_Element, livepoint);
                GetLastAudit(livepoint.Point_Id.ToString(), nameof(tblElement), livepoint);
            }
            return list_livepoint_dto;
        }

        public IList<LivePoint_DTO> GetLivePoints(string user_id)
        {
            IList<Tbl_Element_Note_DTO> element_note = getElementBy_DataConnector_Type(DataSouceConnectionType.Live, true, user_id);
            IList<LivePoint_DTO> list_livepoint_dto = LivePoint_Conversion.Convert_List_Tbl_Element_To_LivePoint_DTO(element_note);

            foreach (LivePoint_DTO livepoint in list_livepoint_dto)
            {
                ReadLivePoint(element_note.FirstOrDefault(element => element.tbl_Element.ID == livepoint.Point_Id).tbl_Element, livepoint);
                GetLastAudit(livepoint.Point_Id.ToString(), nameof(tblElement), livepoint);
            }
            return list_livepoint_dto;
        }

        public LivePoint_DTO GetLivePoint(long Id)
        {
            tblElement tblelement = get_tblElement_by_Id(Id);
            LivePoint_DTO livepoint_dto = LivePoint_Conversion.Convert_Tbl_Element_To_LivePoint_DTO(tblelement);
            ReadLivePoint(tblelement, livepoint_dto);
            GetLastAudit(livepoint_dto.Point_Id.ToString(), nameof(tblElement), livepoint_dto);
            return livepoint_dto;
        }




        private void ReadLivePoint(tblElement element, LivePoint_DTO livepoint)
        {
            if (element.tblConnector.Gateway_Type == DataGatewayType.Obix.ToString())
            {
                try
                {
                    if (_connection_id != element.tblConnector.ID)
                    {
                        _connection_id = element.tblConnector.ID;
                        _liveVariable = new Obix(
                            StringEncryDecry.Decrypt(element.tblConnector.Server_Name, element.tblConnector.SessionID),
                            StringEncryDecry.Decrypt(element.tblConnector.User_Name, element.tblConnector.SessionID),
                            StringEncryDecry.Decrypt(element.tblConnector.Password, element.tblConnector.SessionID));
                    }
                    LivePoint_ResponseDTO response_dto = new LivePoint_ResponseDTO();
                    if (_liveVariable.Is_Connected)
                    {
                        response_dto = _liveVariable.ReadLiveVariable(element.Source_Element_Name_Live);
                        livepoint.Current_Value = response_dto;
                    }
                    else
                        livepoint.Error_Info = Error_Internal.SetError("Connection Error");


                }
                catch (Exception ex) { }
            }
            else
                throw new Exception("Invalid GatewayType");
        }

        public bool UpdateLivePoint(LivePoint_DTO livepoint, string user_id)
        {
            try
            {
                if (!livepoint.IsRead_Only)
                {
                    WriteLivePoint(livepoint);
                    //We do not need to wait for save aduit that's why use Task
                    Task.Factory.StartNew(() => SaveAduit(user_id,
                        livepoint.Point_Id.ToString(),
                        nameof(tblElement),
                        livepoint.Current_Value.Old_Value,
                        livepoint.Live_Value,
                        ""));
                    //End audit

                    return true;
                }
                else
                    throw new Exception("Point is read only, If you want to change this point from the portal, please change IsRead_Only false");
                
            }
            catch (Exception ex)
            {
                throw ex;
            }

        }

        private void WriteLivePoint(LivePoint_DTO livepoint)
        {
            try
            {
                tblElement element = get_tblElement_by_Id(livepoint.Point_Id);

                if (element == null)
                    throw new ArgumentNullException($"Invalid Element Id, No element found against this element ID {livepoint.Point_Id} ");

                ILiveVariable liveVariable = new Obix(StringEncryDecry.Decrypt(element.tblConnector.Server_Name, element.tblConnector.SessionID),
                       StringEncryDecry.Decrypt(element.tblConnector.User_Name, element.tblConnector.SessionID),
                       StringEncryDecry.Decrypt(element.tblConnector.Password, element.tblConnector.SessionID));

                if (livepoint.Current_Value.dValue.HasValue)
                {
                    liveVariable.SetValueLiveVariable<decimal>(element.Source_Element_Name_Live, livepoint.Current_Value.dValue.Value);
                }
                else if (livepoint.Current_Value.bValue.HasValue)
                {
                    liveVariable.SetValueLiveVariable<bool>(element.Source_Element_Name_Live, livepoint.Current_Value.bValue.Value);
                }

            }
            catch (Exception ex)
            {
                throw ex;
            }

        }

        private IList<Tbl_Element_Note_DTO> getElementBy_DataConnector_Type(DataSouceConnectionType connection_type, bool is_active)
        {
            DataSouceConnectionType _connection_type;
            if (Enum.TryParse(connection_type.ToString(), out _connection_type))
            {


                IQueryable<Tbl_Element_Note_DTO> element_notes = from element in _dbcontext.tblElements
                                                                 where element.tblConnector.Data_Connector_Connection_Type == connection_type.ToString() && element.tblConnector.Is_Active == is_active && element.Is_Disabled == false
                                                                 select new Tbl_Element_Note_DTO
                                                                 {
                                                                     tbl_Element = element,
                                                                     tbl_Single_Last_Note = _dbcontext.tblNotes.Where(x => x.Table_Row_Id == element.ID.ToString() && x.Table_Name == nameof(tblElement)).OrderByDescending(order => order.Last_Updated).FirstOrDefault()
                                                                 };


                //IQueryable<Tbl_Element_Note_DTO> element_notes = (from element in _dbcontext.tblElements
                //                     where element.tblConnector.Data_Connector_Connection_Type == connection_type.ToString() && element.Is_Disabled == false
                //                     from note in _dbcontext.tblNotes.Where(x => x.Table_Row_Id == element.ID.ToString() && x.Table_Name == nameof(tblElement)).DefaultIfEmpty()
                //                     select new Tbl_Element_Note_DTO { tbl_Element = element, tbl_Note = note });
                //IQueryable<tblElement> elements = from element in _dbcontext.tblElements
                //                                  where element.tblConnector.Data_Connector_Connection_Type == connection_type.ToString() && element.Is_Disabled == false
                //                                  select element;
                return element_notes.ToList();
            }
            else
                throw new Exception("Invalid data connection type " + nameof(getElementBy_DataConnector_Type));

        }

        private IList<Tbl_Element_Note_DTO> getElementBy_DataConnector_Type(DataSouceConnectionType connection_type, bool is_active, string user_id)
        {
            DataSouceConnectionType _connection_type;
            if (Enum.TryParse(connection_type.ToString(), out _connection_type))
            {


                IQueryable<Tbl_Element_Note_DTO> element_notes = from element in _dbcontext.AspNetUserElements
                                                                 where element.tblElement.tblConnector.Data_Connector_Connection_Type == connection_type.ToString()
                                                                 && element.tblElement.tblConnector.Is_Active == is_active && element.tblElement.Is_Disabled == false
                                                                 && element.User_Id == user_id
                                                                 select new Tbl_Element_Note_DTO
                                                                 {
                                                                     tbl_Element = element.tblElement,
                                                                     tbl_Single_Last_Note = _dbcontext.tblNotes.Where(x => x.Table_Row_Id == element.tblElement.ID.ToString() && x.Table_Name == nameof(tblElement)).OrderByDescending(order => order.Last_Updated).FirstOrDefault()
                                                                 };
                return element_notes.ToList();
            }
            else
                throw new Exception("Invalid data connection type " + nameof(getElementBy_DataConnector_Type));

        }

        public ElementDTO GetElementByID(long elementID)
        {
            tblElement tblelement = get_tblElement_by_Id(elementID);
            return ElementDTO.ConvertTableToDTO(tblelement);
        }

        private tblElement get_tblElement_by_Id(long elementID)
        {
            tblElement tblelement = _dbcontext.tblElements.SingleOrDefault(element => element.ID == elementID);
            return tblelement;
        }

        public IList<ElementDTO> GetElementsByID(long? elementID)
        {
            ICollection<tblElement> elements = (from e in _dbcontext.tblElements
                                                where (elementID.HasValue ? e.Parent_Element_ID == elementID : e.Parent_Element_ID == null)
                                                select e).ToList();
            return ElementDTO.ConvertTableListToDTOList(elements);
        }


        public IList<ElementDTO> GetElements(List<long> elementIDs)
        {
            ICollection<tblElement> elements = GetElementByIDs(elementIDs);
            return ElementDTO.ConvertTableListToDTOList(elements);
        }


        public IList<ElementDTO_WareHouse> GetElementsDTOWareHouse(List<long> elementIDs)
        {
            ICollection<tblElement> elements = GetElementByIDs(elementIDs);
            return ElementDTO_WareHouse_Convert.ConvertTableListToDTOList(elements);
        }


        private ICollection<tblElement> GetElementByIDs(List<long> elementIDs)
        {
            ICollection<tblElement> elements = _dbcontext.tblElements.Where(element => elementIDs.Contains(element.ID)).ToList();
            return elements;
        }



        public IList<ElementDTO> GetElementByConnectionID(int connectionID)
        {
            ICollection<tblElement> elements = (from e in _dbcontext.tblElements
                                                where e.Connector_History_ID == connectionID || e.Connector_Live_ID == connectionID
                                                select e).ToList();
            return ElementDTO.ConvertTableListToDTOList(elements);
        }




        //Not in use
        public List<ElementDataDTO> GetElementData()
        {

            IEnumerable<string> tableName = new string[] { "SAINSBURYS_HEATONPARK_PUMP3BPOWER", "SAINSBURYS_ASHFORD_FM08DACFLOW" };

            // IRawDataRepository objRawData = new RawDataRepository("87.106.176.87", "sa", "Andyefrumos1", "Geoscart", tableName, DateTime.Now.AddYears(-3), DateTime.Now, "hour", 1, "SUM");
            // return ElementDataDTOConvert.ElementDataConvertTableToDto(objRawData.RowData);    
            return null;
        }

        /// <summary>
        /// This save element method will use when only one node add into the tree, Parentid can be null, Becuase node can be add root level (logical {Site, Equipment})
        /// </summary>
        /// <param name="parentId"></param>
        /// <param name="node"></param>
        public void SaveElement(long? parentId, string node, long tagId)
        {
            _dbcontext.tblElements.Add(ElementDTO.ConvertObjectToElementDto(parentId, node, tagId));
            _dbcontext.SaveChanges();

        }
        /// <summary>
        /// This save element method will use when one or more than one node add into the tree, parent element can not be null because this element can not be add into the root level (Physical point)
        /// </summary>
        /// <param name="parentId"></param>
        /// <param name="elementDto"></param>
        public void SaveElement(long parentId, IEnumerable<DiscoveryPoint_DTO> elementDto, long tagId)
        {
            //save only rows where Row_Type == point
            elementDto = elementDto.Where(element => element.Row_Type == DiscoverPoint_Type.Point);
            if (elementDto.Count() > 0)
            {
                IEnumerable<tblElement> list_elements = _dbcontext.tblElements.AddRange(DiscoveryPoint_DTO_Conversion.ConvertDTOToTable(elementDto, parentId, tagId));
                _dbcontext.SaveChanges();

                //This line for to create a metric when the element add into the structure list
                _metricRepository.Save_Metric(list_elements);
            }


        }


        public ElementDTO UpdateElement(ElementDTO elementDto)
        {
            if (elementDto == null)
            {
                throw new ElementException(Resources.ElementPointNotFound);
            }

            tblElement element = _dbcontext.tblElements.SingleOrDefault(e => e.ID == elementDto.ID);
            if (element != null)
            {

                try
                {
                    ElementDTO.ConvertDTOToTable(elementDto, ref element);
                    _dbcontext.SaveChanges();

                    //Refresh dbcontext 
                    _dbcontext = new InnonAnalyticsEngineEntities();
                    element = _dbcontext.tblElements.SingleOrDefault(e => e.ID == elementDto.ID);
                    element.tblTagElements = element.tblTagElements.Where(d => d.Is_Deleted == false).ToList();
                    return ElementDTO.ConvertTableToDTO(element);
                }
                catch (Exception ex)
                {
                    throw ex;
                }
            }
            else
            {
                throw new ElementException(Resources.ElementPointNotFound);
            }


        }


        /// <summary>
        /// This method is for to update the parent_element_id for changing the tree structure
        /// </summary>
        /// <param name="sourceId"></param>
        /// <param name="destinationId"></param>
        public void Updat_Parent_Element(long sourceId, long destinationId)
        {
            if (sourceId != destinationId)
            {
                tblElement obj_Element = _dbcontext.tblElements.SingleOrDefault(e => e.ID == sourceId);
                if (obj_Element != null)
                {
                    obj_Element.Parent_Element_ID = destinationId;
                    _dbcontext.SaveChanges();
                }

            }
        }

        public void Update_Element_Properties(PropertiesDTO element_properties)
        {
            IEnumerable<long> element_ids = element_properties.elementDto.Select(e => e.ID);
            IEnumerable<tblElement> list_element = _dbcontext.tblElements.Where(t => element_ids.Contains(t.ID));



            foreach (tblElement tbl_element in list_element)
            {
                TagType element_tag_type;

                if (Enum.TryParse(tbl_element.Element_Tag_Type, out element_tag_type))
                {

                    if (element_properties.Point_Name != null && element_properties.Point_Name.Length > 0 && tbl_element.Element_Name.ToLower().Contains(element_properties.Point_Name.ToLower()))
                    {
                        tbl_element.Element_Name = tbl_element.Element_Name.ToLower().Replace(element_properties.Point_Name.ToLower(), element_properties.Point_Name_New);
                    }

                    switch (element_tag_type)
                    {
                        case TagType.site:
                            break;
                        case TagType.equip:
                            break;
                        case TagType.point:

                            if (element_properties.Unit > 0)
                                tbl_element.Unit_ID = element_properties.Unit;

                            if (element_properties.Min_Value != null)
                                tbl_element.Min_Value = element_properties.Min_Value;
                            if (element_properties.Max_Value != null)
                                tbl_element.Max_Value = element_properties.Max_Value;
                            if (element_properties.Freq != null)
                            {
                                tbl_element.Freq = (long)element_properties.Freq;
                                tbl_element.Freq_Unit = element_properties.Freq_Unit.ToString();
                            }


                            if (element_properties.Recorded_Freq != null)
                            {
                                tbl_element.Recorded_Freq = (long)element_properties.Recorded_Freq;
                                tbl_element.Recorded_Freq_Unit = element_properties.Recorded_Freq_Unit.ToString();
                            }

                            if (Enum.IsDefined(typeof(Data_Formate), element_properties.Data_Type))
                                tbl_element.Data_Type = element_properties.Data_Type.ToString();

                            break;
                        default: throw new TagException(Resources.TagNullException);
                    }
                }
            }
            _dbcontext.SaveChanges();

        }

        /// <summary>
        /// Bulk update/replace the element/point tags, replace new_tag with assign_tag
        /// </summary>
        /// <param name="element_tagging"></param>
        public void Update_Element_Tagging(Bulk_Tagging_Update_DTO element_tagging)
        {
            try
            {
                IEnumerable<long> element_ids = element_tagging.elementDto.Select(e => e.ID);
                if (element_tagging.assign_tag != 0 && element_tagging.new_tag != 0)
                {
                    tblElement tbl_element;
                    bool anyUpdate = false; //this variable use for to check that any thing changes in the dbContext if true than run the savechanges()

                    foreach (var element_dto in element_tagging.elementDto)
                    {
                        tbl_element = _dbcontext.tblElements.SingleOrDefault(element => element.ID == element_dto.ID);

                        IEnumerable<tblTagElement> tbl_element_assign_tag = tbl_element.tblTagElements.Where(z => z.Tag_ID == element_tagging.assign_tag);
                        IEnumerable<tblTagElement> tbl_element_new_tag = tbl_element.tblTagElements.Where(z => z.Tag_ID == element_tagging.new_tag);


                        //if aasign tag is found and new_tag not found, replace the assign_tag with the new_tag
                        if (tbl_element_assign_tag.Any() && !tbl_element_new_tag.Any())
                        {
                            //Is_Deleted=flase
                            if (!tbl_element_assign_tag.First().Is_Deleted)
                            {
                                tbl_element_assign_tag.First().Tag_ID = element_tagging.new_tag;
                                anyUpdate = true;
                            }
                        }
                        // if assign_tag and new_tag both found than just change is_deleted  
                        else if (tbl_element_assign_tag.Any() && tbl_element_new_tag.Any())
                        {
                            if (tbl_element_new_tag.First().Is_Deleted && !tbl_element_assign_tag.First().Is_Deleted)
                            {
                                tbl_element_new_tag.First().Is_Deleted = false;
                                tbl_element_assign_tag.First().Is_Deleted = true;
                                anyUpdate = true;
                            }
                        }
                    }
                    if (anyUpdate)
                        _dbcontext.SaveChanges();
                }
            }
            catch (Exception ex)
            {
                throw ex;
            }


        }

        /// <summary>
        /// Bulk Add the element/point tags
        /// </summary>
        /// <param name="element_tagging"></param>
        public void Add_Element_Tagging(Bulk_Tagging_Add_DTO element_tagging)
        {

            TagType element_tag_type;
            foreach (var element_Dto in element_tagging.elementDto)
            {
                if (Enum.TryParse(element_Dto.Element_Tag_Type_String, out element_tag_type))
                {
                    switch (element_tag_type)
                    {
                        case TagType.site:
                            if (element_tagging.site_tag != null)
                            {
                                foreach (long site_element_tag_id in element_tagging.site_tag)
                                {
                                    if (_dbcontext.tblTagElements.Any(t => t.Element_ID == element_Dto.ID && t.Tag_ID == site_element_tag_id))
                                    {
                                        _dbcontext.tblTagElements.SingleOrDefault(t => t.Element_ID == element_Dto.ID && t.Tag_ID == site_element_tag_id).Is_Deleted = false;
                                    }
                                    else
                                    {
                                        _dbcontext.tblTagElements.Add(TagElementBaseDTO.ConvertDTOToTbl(element_Dto.ID, site_element_tag_id));
                                    }
                                }
                            }
                            break;
                        case TagType.equip:
                            if (element_tagging.equip_tag != null)
                            {
                                foreach (long equip_element_tag_id in element_tagging.equip_tag)
                                {
                                    if (_dbcontext.tblTagElements.Any(t => t.Element_ID == element_Dto.ID && t.Tag_ID == equip_element_tag_id))
                                    {
                                        _dbcontext.tblTagElements.SingleOrDefault(t => t.Element_ID == element_Dto.ID && t.Tag_ID == equip_element_tag_id).Is_Deleted = false;
                                    }
                                    else
                                    {
                                        _dbcontext.tblTagElements.Add(TagElementBaseDTO.ConvertDTOToTbl(element_Dto.ID, equip_element_tag_id));
                                    }
                                }
                            }
                            break;
                        case TagType.point:
                            if (element_tagging.point_tag != null)
                            {
                                foreach (long point_element_tag_id in element_tagging.point_tag)
                                {
                                    if (_dbcontext.tblTagElements.Any(t => t.Element_ID == element_Dto.ID && t.Tag_ID == point_element_tag_id))
                                    {
                                        _dbcontext.tblTagElements.SingleOrDefault(t => t.Element_ID == element_Dto.ID && t.Tag_ID == point_element_tag_id).Is_Deleted = false;
                                    }
                                    else
                                    {
                                        _dbcontext.tblTagElements.Add(TagElementBaseDTO.ConvertDTOToTbl(element_Dto.ID, point_element_tag_id));
                                    }
                                }
                            }
                            break;
                        default:
                            break;
                    }
                }
                else
                {
                    throw new TagException(Resources.TagNullException);
                }
            }
            _dbcontext.SaveChanges();
        }

        //private bool _disposed = false;

        //protected virtual void Dispose(bool disposing)
        //{
        //    if (!_disposed)
        //    {
        //        if (disposing)
        //        {
        //            // Dispose any managed objects
        //            // ...
        //        }

        //        // Now disposed of any unmanaged objects
        //        // ...

        //        _disposed = true;
        //    }
        //}

        //public void Dispose()
        //{
        //    Dispose(true);
        //    GC.SuppressFinalize(this);
        //}

        //// Destructor
        //~ElementRepository()
        //{
        //    Dispose(false);
        //}


        /// <summary>
        /// This function for assign the Element to the users
        /// </summary>
        /// <param name="Elementdtos"></param>
        /// <param name="user_ids"></param>
        /// <returns></returns>
        public bool User_Element_Update(IList<ElementDTO> Elementdtos, IEnumerable<string> user_ids)
        {
            IEnumerable<long> Element_ids = Elementdtos != null ? Elementdtos.Select(Element => Element.ID) : null;
            //Get All the element list for the users
            IList<AspNetUserElement> _dbuserElements = _dbcontext.AspNetUserElements.Where(userElement => user_ids.Contains(userElement.User_Id)).ToList();
            IList<AspNetUserElement> _userElements = Convert_ElementUsers.Convert_List_Table(Element_ids, user_ids);
            var comparer = new UserElementEqualityComparer();
            var itemsToDelete = _dbuserElements.Except(_userElements, comparer).ToList();
            foreach (AspNetUserElement item in itemsToDelete)
            {
                // Delete the dashboard
                _dbcontext.AspNetUserElements.Remove(item);
            }
            var itemsToAdd = _userElements.Except(_dbuserElements, comparer).ToList();
            foreach (AspNetUserElement item in itemsToAdd)
            {
                // Add the dashboard
                _dbcontext.AspNetUserElements.Add(item);
            }
            _dbcontext.SaveChanges();
            return true;
        }


        public IList<ElementDTO> Get_All_Parent_Child_Element_By_User_Id(IEnumerable<string> user_ids)
        {
            ICollection<tblElement> tbl_Elements = _dbcontext.AspNetUserElements.Where(userelement_id => user_ids.Contains(userelement_id.User_Id)).Select(element => element.tblElement).ToList();
            return ElementDTO.ConvertTableListToDTOList(tbl_Elements);
        }

        public IList<ElementDTO> GetElements_By_User_Id(string user_id)
        {
            ICollection<tblElement> tbl_Elements = _dbcontext.AspNetUserElements.Where(userelement_id => userelement_id.User_Id == user_id).Select(element => element.tblElement).ToList();
            return ElementDTO.ConvertTableListToDTOList(tbl_Elements);
        }


    }

    public class UserElementEqualityComparer : IEqualityComparer<AspNetUserElement>
    {
        public int GetHashCode(AspNetUserElement obj)
        {
            return (obj == null) ? 0 : obj.GetHashCode();
        }

        public bool Equals(AspNetUserElement x, AspNetUserElement y)
        {
            if (ReferenceEquals(x, y)) return true;
            if (x == null || y == null) return false;
            return x.Element_Id == y.Element_Id && x.User_Id == y.User_Id;
        }
    }
}
