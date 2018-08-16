using InnonAnalytics.Common.Enums;
using InnonAnalytics.LiveVariables;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    /// <summary>   
    /// UnStructure list of Elements/Points,  Discover Element DTO is for the element or electrical point, The source for the element can table name, API address or FTP file
    /// </summary>
    public class DiscoveryPoint_DTO
    {

        public DiscoveryPoint_DTO()
        {
           this.Discovery_Child_Point_DTO = new HashSet<DiscoveryPoint_DTO>();
        }

        public int ID { get; set; }
        /// <summary>
        /// ElementSourceID is table unqiue ref key from the database(sys.tables) or file name or URL or API
        /// </summary>
        public string ElementSourceID { get; set; }
        /// <summary>
        /// ElementSourceName property is the same name exist in the datasource(Database(Table Name), API, FTP etc)
        /// </summary>
        public string ElementSourceName { get; set; }

        public bool Structured { get; set; }

        public int? Parent_ID { get; set; }

        public DiscoverPoint_Type Row_Type { get; set; }

        public string Row_Type_String {  get { return this.Row_Type.ToString(); } }

       
        public bool hasChildren { get; set; }

        /// <summary>
        /// This is the maing connector for the point
        /// </summary>
        public int Connector_Id { get; set; }

        public DataSouceConnectionType Connector_Type { get; set; }

        public ICollection<DiscoveryPoint_DTO> Discovery_Child_Point_DTO { get; set; }
    }

    

    public class DiscoveryPoint_DTO_Conversion_Base
    {

        public static IList<DiscoveryPoint_DTO> Convert_Lits_Connection_To_Discovery_Point(IList<ExistingConnectionNameDTO> list_connections)
        {
            IList<DiscoveryPoint_DTO> list_discovery_point = new List<DiscoveryPoint_DTO>();

            for (int i = 0; i < list_connections.Count(); i++)
            {
                try
                {
                    list_discovery_point.Add(Convert_Connection_To_Discovery_Point(list_connections[i]));
                }
                catch { }
            }
            return list_discovery_point;
        }

        public static DiscoveryPoint_DTO Get_Connection_Row(ExistingConnectionNameDTO ExistingConnectionNameDTO)
        {
           return Convert_Connection_To_Discovery_Point(ExistingConnectionNameDTO);
        }


       

        private static DiscoveryPoint_DTO Convert_Connection_To_Discovery_Point(ExistingConnectionNameDTO ExistingConnectionNameDTO) => new DiscoveryPoint_DTO
        {
            ElementSourceID = ExistingConnectionNameDTO.ConnectionName,
            ElementSourceName = ExistingConnectionNameDTO.ConnectionName,
            ID = ExistingConnectionNameDTO.ConnectionID,
            Row_Type = DiscoverPoint_Type.Connection,
            Structured = false,
            hasChildren = true,
            Parent_ID = null // this will be the row that why parent ID is null
        };

    }


    public class DiscoveryPoint_DTO_Conversion
    {        
        /// <summary>
        /// Convert List Database Table to list Data Transform Object
        /// </summary>
        /// <param name="objTblPoint"></param> objtblPoint is the list of table name, files name , API links, this is the actually data located
        /// <param name="objExistingConnectionNameDTO"></param>Connection inform where the tblPoints belongs
        /// <param name="structuredElementList"></param> list of structured element which is already structured into our database
        /// <returns></returns>
        public static IList<DiscoveryPoint_DTO> ConvertTableToDTO(IEnumerable<tblPoint> objTblPoints, ExistingConnectionNameDTO ExistingConnectionNameDTO, IList<ElementDTO> structuredElementList)
        {
            
            IList<DiscoveryPoint_DTO> list_discovery_point_dto = new List<DiscoveryPoint_DTO>();
            //First row would always be the connection info
            //list_discovery_point_dto.Add(DiscoveryPoint_DTO_Conversion_Base.Get_Connection_Row(ExistingConnectionNameDTO));
            foreach (var objTblPoint in objTblPoints)
            {
                list_discovery_point_dto.Add(Convert_Point_To_Discovery_Point(objTblPoint, ExistingConnectionNameDTO.ConnectionID, structuredElementList));
            }
            return list_discovery_point_dto;
        }
        /// <summary>
        /// Convert Database Table to Data Transform Object
        /// </summary>
        /// <param name="objTblPoint"></param> objtblPoint is the list of table name, files name , API links, this is the actually data located
        /// <param name="objExistingConnectionNameDTO"></param>Connection inform where the tblPoints belongs
        /// <param name="structuredElementList"></param> list of structured element which is already structured into our database
        /// <returns></returns>
        private static DiscoveryPoint_DTO Convert_Point_To_Discovery_Point(tblPoint objTblPoint, int parent_id, IList<ElementDTO> structuredElementList) => new DiscoveryPoint_DTO
        {
            
            ElementSourceID = objTblPoint.TableRefKey,
            ElementSourceName = objTblPoint.PointName,
            Parent_ID = parent_id,
            Connector_Id = parent_id,
            Row_Type = DiscoverPoint_Type.Point,
            Connector_Type = DataSouceConnectionType.Database,
            Structured = structuredElementList.Any(element_list => element_list.Source_Element_Name_History == objTblPoint.PointName || element_list.Source_Element_Name_Live == objTblPoint.PointName)

        };


        /// <summary>
        /// Convert live point to Data Transform Object
        /// </summary>
        /// <param name="objLivePoint"></param> objtblPoint is the list of table name, files name , API links, this is the actually data located
        /// <param name="objExistingConnectionNameDTO"></param>Connection inform where the tblPoints belongs
        /// <param name="structuredElementList"></param> list of structured element which is already structured into our database
        /// <returns></returns>
        private static DiscoveryPoint_DTO Convert_Point_To_Discovery_Point(LivePointModel objLivePoint, int id, int parent_id, int connector_id, IList<ElementDTO> structuredElementList) => new DiscoveryPoint_DTO
        {
            ID = id,
            ElementSourceID = objLivePoint.Href.AbsoluteUri,
            ElementSourceName = objLivePoint.Element_Name,
            Connector_Id = connector_id,
            Parent_ID = parent_id,
            Row_Type = DiscoverPoint_Type.Point,
            Connector_Type = DataSouceConnectionType.Live,
            hasChildren = true,
            Structured = structuredElementList.Any(element_list => element_list.Source_Element_Name_History == objLivePoint.Href.AbsoluteUri || element_list.Source_Element_Name_Live == objLivePoint.Href.AbsoluteUri)

        };

        /// <summary>
        /// This conversion is for live points
        /// </summary>
        /// <param name="objLivePoints"></param>
        /// <param name="objExistingConnectionNameDTO"></param>
        /// <param name="structuredElementList"></param>
        /// <returns></returns>
        public static IList<DiscoveryPoint_DTO> ConvertTableToDTO(IEnumerable<LivePointModel> objLivePoints, int parent_id, int connector_id ,IList<ElementDTO> structuredElementList)
        {
            IList<DiscoveryPoint_DTO> list_discovery_point_dto = new List<DiscoveryPoint_DTO>();
            //First row would always be the connection info
            //list_discovery_point_dto.Add(DiscoveryPoint_DTO_Conversion_Base.Get_Connection_Row(ExistingConnectionNameDTO));
            int id = 5 + parent_id + connector_id;
            foreach (var objLivePoint in objLivePoints)
            {
                list_discovery_point_dto.Add(Convert_Point_To_Discovery_Point(objLivePoint, id, parent_id, connector_id, structuredElementList));
                id++;
            }
            return list_discovery_point_dto;
        }


        public static IList<tblElement> ConvertDTOToTable(IEnumerable<DiscoveryPoint_DTO> elementDto, long parentId, long tagId)
        {
            IList<tblElement> objTblElements = new List<tblElement>();
            foreach (var objElementDTO in elementDto)
            {
                objTblElements.Add(ConvertDTOToTable(objElementDTO, parentId, tagId));
            }
            return objTblElements;
        }

        public static tblElement ConvertDTOToTable(DiscoveryPoint_DTO objElementDTO, long parentId, long tagId)
        {
            tblElement objElementTable = new tblElement();

            if (objElementDTO.Connector_Type == DataSouceConnectionType.Live)
            {
                objElementTable.Connector_Live_ID = objElementDTO.Connector_Id;
                objElementTable.Source_Element_Name_Live = objElementDTO.ElementSourceID;
            }
            else
            {
                objElementTable.Connector_History_ID = objElementDTO.Connector_Id;
                objElementTable.Source_Element_Name_History = objElementDTO.ElementSourceName;
            }
            objElementTable.Element_Name = objElementDTO.ElementSourceName;
            objElementTable.Is_Disabled = false;
            objElementTable.Parent_Element_ID = parentId;
            //tblTagElement _tagelement = new tblTagElement();
            //_tagelement.Tag_ID = tagId;
            //objElementTable.tblTagElements.Add(_tagelement);
            objElementTable.Element_Tag_Type = Enum.ToObject(typeof(TagType), tagId).ToString();

            return objElementTable;

        }

    }


    /// <summary>
    /// UnStructure list of Elements/Points,  Discover Element DTO is for the element or electrical point, The source for the element can table name, API address or FTP file
    /// </summary>
    public class DiscoveryElementDTO
    {

        /// <summary>
        /// ElementSourceID is table unqiue ref key from the database(sys.tables) or file name
        /// </summary>
        public string ElementSourceID { get; set; }
        /// <summary>
        /// ElementSourceName property is the same name exist in the datasource(Database(Table Name), API, FTP etc)
        /// </summary>
        public string ElementSourceName { get; set; }

        public bool Structured { get; set; }

        public ExistingConnectionNameDTO ConnectionInfo { get; set; }

       
       /// <summary>
       /// Convert List Database Table to list Data Transform Object
       /// </summary>
        /// <param name="objTblPoint"></param> objtblPoint is the list of table name, files name , API links, this is the actually data located
        /// <param name="objExistingConnectionNameDTO"></param>Connection inform where the tblPoints belongs
        /// <param name="structuredElementList"></param> list of structured element which is already structured into our database
       /// <returns></returns>
        public static ICollection<DiscoveryElementDTO> ConvertTableToDTO(IEnumerable<tblPoint> objTblPoints, ExistingConnectionNameDTO objExistingConnectionNameDTO, IList<ElementDTO> structuredElementList)
        {
            ICollection<DiscoveryElementDTO> listDiscoveryElementDTO = new HashSet<DiscoveryElementDTO>();
            foreach(var objTblPoint in objTblPoints)
            {
                listDiscoveryElementDTO.Add(ConvertTableToDTO(objTblPoint, objExistingConnectionNameDTO, structuredElementList));
            }
            return listDiscoveryElementDTO;
        }


       /// <summary>
        /// Convert Database Table to Data Transform Object
       /// </summary>
       /// <param name="objTblPoint"></param> objtblPoint is the list of table name, files name , API links, this is the actually data located
       /// <param name="objExistingConnectionNameDTO"></param>Connection inform where the tblPoints belongs
       /// <param name="structuredElementList"></param> list of structured element which is already structured into our database
       /// <returns></returns>
        public static DiscoveryElementDTO ConvertTableToDTO(tblPoint objTblPoint, ExistingConnectionNameDTO objExistingConnectionNameDTO, IList<ElementDTO> structuredElementList)
        {
           return new DiscoveryElementDTO {
                ElementSourceID = objTblPoint.TableRefKey,
                ElementSourceName = objTblPoint.PointName,
                ConnectionInfo = objExistingConnectionNameDTO,
                Structured = structuredElementList.Any(element_list => element_list.Source_Element_Name_History == objTblPoint.PointName || element_list.Source_Element_Name_Live == objTblPoint.PointName)
            
            };
        }


        /// <summary>
        /// This conversion is for live points
        /// </summary>
        /// <param name="objLivePoints"></param>
        /// <param name="objExistingConnectionNameDTO"></param>
        /// <param name="structuredElementList"></param>
        /// <returns></returns>
        public static ICollection<DiscoveryElementDTO> ConvertTableToDTO(IEnumerable<LivePointModel> objLivePoints, ExistingConnectionNameDTO objExistingConnectionNameDTO, IList<ElementDTO> structuredElementList)
        {
            ICollection<DiscoveryElementDTO> listDiscoveryElementDTO = new HashSet<DiscoveryElementDTO>();
            foreach (LivePointModel objLivePoint in objLivePoints)
            {
                listDiscoveryElementDTO.Add(ConvertTableToDTO(objLivePoint, objExistingConnectionNameDTO, structuredElementList));
            }
            return listDiscoveryElementDTO;
        }

        /// <summary>
        /// Convert LivePointObject to Data Transform Object for saving into the tblElement
        /// </summary>
        /// <param name="objLivePoint"></param>
        /// <param name="objExistingConnectionNameDTO"></param>
        /// <param name="structuredElementList"></param>
        /// <returns></returns>
        public static DiscoveryElementDTO ConvertTableToDTO(LivePointModel objLivePoint, ExistingConnectionNameDTO objExistingConnectionNameDTO, IList<ElementDTO> structuredElementList)
        {
            return new DiscoveryElementDTO
            {
                ElementSourceID = objLivePoint.Element_Source_Name_Live,
                ElementSourceName = objLivePoint.Element_Name,
                ConnectionInfo = objExistingConnectionNameDTO,
                Structured = structuredElementList.Any(element_list => element_list.Source_Element_Name_History == objLivePoint.Element_Source_Name_Live || element_list.Source_Element_Name_Live == objLivePoint.Element_Source_Name_Live)

            };
        }


        public static IList<tblElement> ConvertDTOToTable(IEnumerable<DiscoveryElementDTO> elementDto, long parentId, long tagId)
        {
            IList<tblElement> objTblElements = new List<tblElement>();
            foreach (var objElementDTO in elementDto)
            {
                objTblElements.Add(ConvertDTOToTable(objElementDTO, parentId, tagId));
            }
            return objTblElements;
        }

        public static tblElement ConvertDTOToTable(DiscoveryElementDTO objElementDTO, long parentId, long tagId)
        {
            tblElement objElementTable = new tblElement();

            if(objElementDTO.ConnectionInfo.DataConnectorType == DataSouceConnectionType.Live)
            {
                objElementTable.Connector_Live_ID = objElementDTO.ConnectionInfo.ConnectionID;
                objElementTable.Source_Element_Name_Live = objElementDTO.ElementSourceName;
            }
            else
            {
                objElementTable.Connector_History_ID = objElementDTO.ConnectionInfo.ConnectionID;
                objElementTable.Source_Element_Name_History = objElementDTO.ElementSourceName;
            }           
          
            objElementTable.Element_Name = objElementDTO.ElementSourceName;
            objElementTable.Is_Disabled = false;
            objElementTable.Parent_Element_ID = parentId;
            //tblTagElement _tagelement = new tblTagElement();
            //_tagelement.Tag_ID = tagId;
            //objElementTable.tblTagElements.Add(_tagelement);
            objElementTable.Element_Tag_Type = Enum.ToObject(typeof(TagType),tagId).ToString();

            return objElementTable;

        }

    }

   

   
   


    
}
