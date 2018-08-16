using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.EntityModel;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace InnonAnalytics.Model.DTO
{
    /// <summary>
    /// Element DTO is for the element which already discovered and save in our database. it can not be a base class
    /// </summary>
    public sealed class ElementDTO : DiscoveryElementDTO
    {

        #region properties
        public long ID { get; set; }
        public ElementDTO()
        {
            this.TagElements = new HashSet<TagElementBaseDTO>();
            this.Tags = new HashSet<TagDTO>();
        }
        public bool Is_Disabled { get; set; }
        /// <summary>
        /// ElementName can be in different langugae thats the reason it LanguageValueDTO
        /// </summary>
        public string Element_Name { get; set; }


        /// <summary>
        /// we have three types of main tag (site, equip and point TagMain Property is use for fine element main tag type), If want to check element is site, equip or point use TagMain Property
        /// </summary>       
        public TagType Element_Tag_Type { get; set; }

        [JsonProperty(PropertyName = "Element_Tag_Type")]
        public string Element_Tag_Type_String
        {
            get
            {
                return Element_Tag_Type.ToString();
            }
        }


        //We have to remove this property
        public ICollection<TagElementBaseDTO> TagElements { get; set; }

        public ICollection<TagDTO> Tags { get; set; }

        public string Source_Element_Name_Live { get; set; }
        public string Source_Element_Name_History { get; set; }
        public ConnectorDTO Connector_Live { get; set; }
        public ConnectorDTO Connector_History { get; set; }

        public long? Parent_Element_ID { get; set; }

        public ICollection<ElementDTO> Parent_Element { get; set; }

        public bool HasChildren { get; set; } = false;

        // [UIHint("UnitDropDownEditorTemplate")]
        public Unit_Of_Measurement_DTO Unit { get; set; }

        public long? Freq { get; set; }

        public Time_Unit Freq_Unit { get; set; }

        [JsonProperty(PropertyName = "Freq_Unit")]
        public string Freq_Unit_String
        {
            get
            {
                return Freq_Unit.ToString();
            }
        }

        public long? Recorded_Freq { get; set; }

        public Time_Unit Recorded_Freq_Unit { get; set; }
        [JsonProperty(PropertyName = "Recorded_Freq_Unit")]
        public string Recorded_Freq_Unit_String
        {
            get
            {
                return Recorded_Freq_Unit.ToString();
            }
        }

        public double? Min_Value { get; set; }
        public double? Max_Value { get; set; }

        /// <summary>
        /// This proptery is for write value from the portal live point if the value true than would be able change the value from the service
        /// </summary>
        public bool IsRead_Only { get; set; }

        public Data_Formate? Data_Type { get; set; }

        [JsonProperty(PropertyName = "Data_Type")]
        public string Data_Type_String
        {
            get
            {
                return Data_Type.ToString();
            }
        }


        public DataValueType Value_Type { get; set; }

        [JsonProperty(PropertyName = "Value_Type")]
        public string Value_Type_String
        {
            get
            {
                return Value_Type.ToString();
            }
        }



        #endregion


        #region Convert object and properties into the tblElement

        public static tblElement ConvertObjectToElementDto(long? parentId, string node, long tagId)
        {
            tblElement _elementDto = new tblElement();
            _elementDto.Parent_Element_ID = parentId;
            _elementDto.Element_Name = node;

            //tblTagElement _tagelement = new tblTagElement();
            //_tagelement.Tag_ID = tagId;
            //_elementDto.tblTagElements.Add(_tagelement);

            _elementDto.Element_Tag_Type = Enum.ToObject(typeof(TagType), tagId).ToString(); //TagType.Site

            return _elementDto;

        }

        #endregion


        #region Convert Database Table to DTO object

        /// <summary>
        /// 
        /// </summary>
        /// <param name="objTblElements"></param>
        /// <returns type="IList<ElementDTO>" ></returns>
        public static IList<ElementDTO> ConvertTableListToDTOList(ICollection<tblElement> objTblElements)
        {
            IList<ElementDTO> objListElementDTO = new List<ElementDTO>();
            foreach (tblElement objTblElement in objTblElements)
            {
                objListElementDTO.Add(ConvertTableToDTO(objTblElement));
            }
            return objListElementDTO;
        }


        /// <summary>
        /// 
        /// </summary>
        /// <param name="objElementTable"></param>
        /// <returns></returns>
        public static ElementDTO ConvertTableToDTO(tblElement objElementTable)
        {
            ElementDTO objElementDTO = new ElementDTO();

            objElementDTO.ID = objElementTable.ID;

            if (objElementTable.tblConnector != null)
            {
                //objElementDTO.Connector_Live = ConnectorDTO.ConvertTableToDTO(objElementTable.tblConnector);
                objElementDTO.ConnectionInfo = ExistingConnectionNameDTO.ConvertTableToDTO(objElementTable.tblConnector);
            }
            else if (objElementTable.tblConnector1 != null)
            {
                //objElementDTO.Connector_History = ConnectorDTO.ConvertTableToDTO(objElementTable.tblConnector1);
                objElementDTO.ConnectionInfo = ExistingConnectionNameDTO.ConvertTableToDTO(objElementTable.tblConnector1);
            }

            objElementDTO.Element_Name = objElementTable.Element_Name;

            objElementDTO.Source_Element_Name_History = objElementTable.Source_Element_Name_History;
            objElementDTO.Source_Element_Name_Live = objElementTable.Source_Element_Name_Live;

            objElementDTO.Is_Disabled = objElementTable.Is_Disabled;

            //IT does not required for the presentation layer
            //objElementDTO.TagElements = TagElementBaseDTO.ConvertTableToDTO(objElementTable.tblTagElements);
            objElementDTO.Tags = TagDTO.ConvertTableToDTO(objElementTable.tblTagElements);

            objElementDTO.Parent_Element_ID = objElementTable.Parent_Element_ID;

            if (objElementTable.tblElement1 != null)
                objElementDTO.HasChildren = true;
            //    objElementDTO.Parent_Element = ConvertTableListToDTOList(objElementTable.tblElement1);



            objElementDTO.Element_Tag_Type = (TagType)Enums.TryParse(typeof(TagType), objElementTable.Element_Tag_Type.ToString()); // (TagType)Enum.Parse(typeof(TagType), objElementTable.Element_Tag_Type); //TagType.Site

            objElementDTO.Unit = Unit_Of_Measurement_DTO.Convert_Table_To_DTO(objElementTable.tblUnit);

            objElementDTO.Freq = objElementTable.Freq;

            objElementDTO.Recorded_Freq = objElementTable.Recorded_Freq;

            if (objElementTable.Freq_Unit != null)
            {
                if (Enum.IsDefined(typeof(Time_Unit), objElementTable.Freq_Unit))
                    objElementDTO.Freq_Unit = (Time_Unit)Enum.Parse(typeof(Time_Unit), objElementTable.Freq_Unit);
            }
            if (objElementTable.Recorded_Freq_Unit != null)
            {
                if (Enum.IsDefined(typeof(Time_Unit), objElementTable.Recorded_Freq_Unit))
                    objElementDTO.Recorded_Freq_Unit = (Time_Unit)Enum.Parse(typeof(Time_Unit), objElementTable.Recorded_Freq_Unit);
            }

            if (objElementTable.Data_Type != null)
            {
                if (Enum.IsDefined(typeof(Data_Formate), objElementTable.Data_Type))
                    objElementDTO.Data_Type = (Data_Formate)Enum.Parse(typeof(Data_Formate), objElementTable.Data_Type);
            }

            if (objElementTable.Value_Type != null)
            {
                if (Enum.IsDefined(typeof(DataValueType), objElementTable.Value_Type))
                    objElementDTO.Value_Type = (DataValueType)Enum.Parse(typeof(DataValueType), objElementTable.Value_Type);
            }



            objElementDTO.Min_Value = objElementTable.Min_Value;
            objElementDTO.Max_Value = objElementTable.Max_Value;
            objElementDTO.IsRead_Only = objElementTable.IsRead_Only;

            return objElementDTO;
        }

        #endregion

        #region Convert DTO to Database Table object

        public static IList<tblElement> ConvertDTOToTable(IList<ElementDTO> objElementsDTO)
        {
            IList<tblElement> objTblElements = new List<tblElement>();
            foreach (var objElementDTO in objElementsDTO)
            {
                objTblElements.Add(ConvertDTOToTable(objElementDTO));
            }
            return objTblElements;

        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="objElementDTO"></param>
        /// <returns></returns>
        public static tblElement ConvertDTOToTable(ElementDTO objElementDTO)
        {

            tblElement objElementTable = new tblElement();

            if (objElementDTO.Connector_History != null)
                objElementTable.Connector_History_ID = objElementDTO.Connector_History.ConnectionID;
            if (objElementDTO.Connector_Live != null)
                objElementTable.Connector_Live_ID = objElementDTO.Connector_Live.ConnectionID;

            objElementTable.Element_Name = objElementDTO.Element_Name;
            objElementTable.Element_Tag_Type = objElementDTO.Element_Tag_Type.ToString();
            //   objElementTable.tblTagElements = TagElementDTO.ConvertDTOToTbl(objElementDTO.TagElements);

            objElementTable.Source_Element_Name_History = objElementDTO.Source_Element_Name_History;
            objElementTable.Source_Element_Name_Live = objElementDTO.Source_Element_Name_Live;

            objElementTable.Is_Disabled = objElementDTO.Is_Disabled;

            objElementTable.Parent_Element_ID = objElementDTO.Parent_Element_ID;

            return objElementTable;

        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="objElementDTO"></param>
        /// <returns></returns>
        public static tblElement ConvertDTOToTable(ElementDTO objElementDTO, ref tblElement objElementTable)
        {
            if (objElementTable == null)
                objElementTable = new tblElement();

            if (objElementDTO.Connector_History != null)
                objElementTable.Connector_History_ID = objElementDTO.Connector_History.ConnectionID;
            if (objElementDTO.Connector_Live != null)
                objElementTable.Connector_Live_ID = objElementDTO.Connector_Live.ConnectionID;


            objElementTable.Element_Name = objElementDTO.Element_Name;
            objElementTable.Data_Type = objElementDTO.Data_Type.ToString();
            objElementTable.Element_Tag_Type = objElementDTO.Element_Tag_Type.ToString();


            ICollection<tblTagElement> temp_tbl_tag_collection = objElementTable.tblTagElements;


            TagElementDTO.ConvertDTOToTbl(objElementDTO.Tags, ref temp_tbl_tag_collection, objElementDTO.ID);

            objElementTable.Source_Element_Name_History = objElementDTO.Source_Element_Name_History;
            objElementTable.Source_Element_Name_Live = objElementDTO.Source_Element_Name_Live;

            objElementTable.Is_Disabled = objElementDTO.Is_Disabled;

            objElementTable.Parent_Element_ID = objElementDTO.Parent_Element_ID;

            if (objElementDTO.Unit.ID > 0)
                objElementTable.Unit_ID = objElementDTO.Unit.ID;

            objElementTable.Freq = objElementDTO.Freq;
            objElementTable.Freq_Unit = objElementDTO.Freq_Unit.ToString();

            objElementTable.Recorded_Freq_Unit = objElementDTO.Recorded_Freq_Unit.ToString();
            objElementTable.Recorded_Freq = objElementDTO.Recorded_Freq;

            objElementTable.Max_Value = objElementDTO.Max_Value;
            objElementTable.Min_Value = objElementDTO.Min_Value;
            objElementTable.IsRead_Only = objElementDTO.IsRead_Only;

            return objElementTable;

        }

        #endregion
    }

    /// <summary>
    /// This is used for the data warehousing where we need only some properties
    /// </summary>
    public class ElementDTO_WareHouse
    {

        public ElementDTO_WareHouse()
        {
            this.Element_Unit = new Unit_Of_Measurement_DTO();
        }

        public long Element_ID { get; set; }

        public string Element_Name { get; set; }

        public Unit_Of_Measurement_DTO Element_Unit { get; set; }
    }

    public class ElementDTO_WareHouse_Convert
    {
        public static List<ElementDTO_WareHouse> ConvertTableListToDTOList(ICollection<tblElement> objTblElements)
        {
            List<ElementDTO_WareHouse> objListElementDTO = new List<ElementDTO_WareHouse>();
            foreach (var objTblElement in objTblElements)
            {
                objListElementDTO.Add(ConvertTableToDTO(objTblElement));
            }
            return objListElementDTO;
        }

        public static ElementDTO_WareHouse ConvertTableToDTO(tblElement objTblElement)
        {
            ElementDTO_WareHouse objElementDTO = new ElementDTO_WareHouse();

            objElementDTO.Element_ID = objTblElement.ID;
            objElementDTO.Element_Name = objTblElement.Element_Name;
            objElementDTO.Element_Unit = Unit_Of_Measurement_DTO.Convert_Table_To_DTO(objTblElement.tblUnit);
            return objElementDTO;
        }
    }




    #region
    public class ElementDTO_Limited_Properties
    {
        public long Element_ID { get; set; }

        public string Element_Name { get; set; }

        /// <summary>
        /// Actual data table name
        /// </summary>
        public string Source_Element_History_Name { get; set; }

    }


    public class ElementDTO_Limited_Properties_Convert
    {
        public static List<ElementDTO_Limited_Properties> ConvertTableListToDTOList(ICollection<tblElement> objTblElements)
        {
            List<ElementDTO_Limited_Properties> objListElementDTO = new List<ElementDTO_Limited_Properties>();
            foreach (var objTblElement in objTblElements)
            {
                objListElementDTO.Add(ConvertTableToDTO(objTblElement));
            }
            return objListElementDTO;
        }

        public static ElementDTO_Limited_Properties ConvertTableToDTO(tblElement objTblElement)
        {
            ElementDTO_Limited_Properties objElementDTO = new ElementDTO_Limited_Properties();

            objElementDTO.Element_ID = objTblElement.ID;
            objElementDTO.Element_Name = objTblElement.Element_Name;
            objElementDTO.Source_Element_History_Name = objTblElement.Source_Element_Name_History;
            return objElementDTO;
        }
    }

    #endregion


    #region element_notes

    public class Tbl_Element_Note_DTO
    {
        public tblElement tbl_Element { get; set; } = new tblElement();
        public tblNote tbl_Single_Last_Note { get; set; } = new tblNote();
    }

    #endregion


    #region element hierarchy

    public class Element_Hierarchy_DTO
    {
        public string Site_Name { get; set; }
        public string Equip_Name { get; set; }

        public string Element_Name { get; set; }
    }

    public class Element_Hierarchy_Convert
    {
        public static Element_Hierarchy_DTO Get_Element_Hierarchy(tblElement tbl_element)
        {
            Element_Hierarchy_DTO element_hierarchy_dto = new Element_Hierarchy_DTO();

            string site_name = "", equip_name = "", point_name = "";

            Get_Parent(tbl_element, tbl_element.Element_Tag_Type, ref site_name, ref equip_name, ref point_name);

            element_hierarchy_dto.Site_Name =  site_name.Length > 0 ?  site_name.Remove(site_name.Length -1) : site_name ;
            element_hierarchy_dto.Equip_Name =  equip_name.Length > 0 ? equip_name.Remove(equip_name.Length  - 1): equip_name;
            element_hierarchy_dto.Element_Name = point_name.Length > 0 ? point_name.Remove(point_name.Length - 1): point_name;

            return element_hierarchy_dto;
        }

        private static void Get_Parent(tblElement tbl_element, string tag_type ,ref string site_name, ref string equip, ref string element_name)
        {

            if (Enum.IsDefined(typeof(TagType), tag_type))
            {
                if((TagType)Enums.TryParse(typeof(TagType), tbl_element.Element_Tag_Type) == TagType.site)
                {
                    site_name = tbl_element.Element_Name + "/" + site_name;
                }
                else if((TagType)Enums.TryParse(typeof(TagType), tbl_element.Element_Tag_Type) == TagType.equip)
                {
                    equip = tbl_element.Element_Name + "/" + equip;
                }
                else if ((TagType)Enums.TryParse(typeof(TagType), tbl_element.Element_Tag_Type) == TagType.point)
                {
                    element_name = tbl_element.Element_Name + "/" + element_name;
                }
            }

            if (tbl_element.tblElement2 != null)
              Get_Parent(tbl_element.tblElement2, tbl_element.tblElement2.Element_Tag_Type, ref site_name, ref equip, ref element_name);

        }
    }

    #endregion
}
