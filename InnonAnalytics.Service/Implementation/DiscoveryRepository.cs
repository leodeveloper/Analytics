using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.LiveVariables;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Exceptions;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Data.Entity.Core;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
    public class DiscoveryRepository : IDiscoveryRepository
    {

        private IInnonAnalyticsEngineEntities _dbcontext;
        private IConnectorRepository _objConectorRepository;
        private IRawTableRepository _objRawTableName;
        private IElementRepository _objElementRepository;

        public DiscoveryRepository(IInnonAnalyticsEngineEntities db, IConnectorRepository conectorrepository, IRawTableRepository rawtablename, IElementRepository elementrepository)
        {
            _dbcontext = db;
            _objConectorRepository = conectorrepository;
            _objRawTableName = rawtablename;
            _objElementRepository = elementrepository;
        }

        /// <summary>
        /// GetDiscoveryViewModel Returns the exisiting connections
        /// </summary>
        /// <returns>DiscoveryElementDTOVM</returns>
        //public DiscoveryElementDTOVM GetDiscoveryViewModel()
        //{
        //    DiscoveryElementDTOVM objViewModel = new DiscoveryElementDTOVM();
        //    objViewModel.ExistingConnectionName = ConnectorRepository.objAllExistingConnections;
        //    return objViewModel;
        //}

        /// <summary>
        /// 
        /// </summary>
        /// <returns DiscoveryVMDTO ></returns>
        public DiscoveryVMDTO GetDiscoveryViewModel()
        {
            DiscoveryVMDTO viewmodel = new DiscoveryVMDTO();
            viewmodel.ExistingConnectionAndElements = UnStructureExisitingConnectionElements.ConvertTableToDTO(ConnectorRepository.objAllExistingConnections);
            return viewmodel;
        }

        /// <summary>
        /// This method is for geeting all connection and return into the discovery_point_dto
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public IList<DiscoveryPoint_DTO> Get_Connection_Points(int? id)
        {
            IList<ExistingConnectionNameDTO> list_connections = _objConectorRepository.GetExistingConnectionsBy_Is_Active(true);
            return DiscoveryPoint_DTO_Conversion_Base.Convert_Lits_Connection_To_Discovery_Point(list_connections);
        }


        /// <summary>
        /// Get UnStructuce Elements
        /// </summary>
        /// <param name="strDataConnectorType, iDataConnectorID"></param>
        /// <returns></returns>
        //public IList<DiscoveryElementDTO> GetDiscoveryViewModel(string strDataConnectorType,int iDataConnectorID)
        //{
        //    try
        //    {                
        //        return GetNonDiscoverElementByConnectorID(strDataConnectorType, iDataConnectorID);
        //    }
        //    catch (ConnectorException conex) 
        //    {
        //        throw conex;
        //    }

        //}

        /// <summary>
        /// Getiing the table onformation from the Database nad obix points
        /// </summary>
        /// <param name="strDataConnectorType"></param>
        /// <param name="iDataConnectorID"></param>
        /// <returns>IList<DiscoveryElementDTO></returns>
        public IList<DiscoveryPoint_DTO> GetNonDiscoverElementByConnectorID(int iDataConnectorID)
        {
            ConnectorDTO objDataConnectorDTO = _objConectorRepository.GetExistingConnectionById(iDataConnectorID);
            IList<ElementDTO> strucutredlist = _objElementRepository.GetElementByConnectionID(iDataConnectorID);
            ExistingConnectionNameDTO objExistingConnectionNameDTO = ExistingConnectionNameDTO.ConvertTableToDTO(objDataConnectorDTO);
            try
            {
                if (objExistingConnectionNameDTO.DataConnectorType == Common.Enums.DataSouceConnectionType.Live)
                {

                    ILiveVariable obix = new Obix(objDataConnectorDTO.ServerOrIP, objDataConnectorDTO.ServerUserName, objDataConnectorDTO.ServerPassword);
                    IList<LivePointModel>  list_of_Live_Point = obix.GetPoints(objDataConnectorDTO.ServerOrIP);
                    return DiscoveryPoint_DTO_Conversion.ConvertTableToDTO(list_of_Live_Point, objExistingConnectionNameDTO.ConnectionID, objExistingConnectionNameDTO.ConnectionID, strucutredlist).ToList();
                    //return DiscoveryElementDTO.ConvertTableToDTO(list_of_Live_Point, objExistingConnectionNameDTO, strucutredlist).ToList();
                }
                else
                {
                    _objRawTableName.GetRowTableNames(objDataConnectorDTO.ServerOrIP, objDataConnectorDTO.ServerUserName, objDataConnectorDTO.ServerPassword, objDataConnectorDTO.DatabaseName);
                    return DiscoveryPoint_DTO_Conversion.ConvertTableToDTO(_objRawTableName.RowTableNames, objExistingConnectionNameDTO, strucutredlist).ToList();
                }

            }
            catch (ConnectorException conex)
            {
                throw conex;
            }

        }

        public IList<DiscoveryPoint_DTO> GetNonDiscoverElementByConnectorID(int iDataConnectorID, string Element_Source_ID , int parent_id)
        {
            ConnectorDTO objDataConnectorDTO = _objConectorRepository.GetExistingConnectionById(iDataConnectorID);
            IList<ElementDTO> strucutredlist = _objElementRepository.GetElementByConnectionID(iDataConnectorID);
            ExistingConnectionNameDTO objExistingConnectionNameDTO = ExistingConnectionNameDTO.ConvertTableToDTO(objDataConnectorDTO);
            ILiveVariable obix = new Obix(objDataConnectorDTO.ServerOrIP, objDataConnectorDTO.ServerUserName, objDataConnectorDTO.ServerPassword);
            IList<LivePointModel> list_of_Live_Point = obix.GetPoints(Element_Source_ID);
            return DiscoveryPoint_DTO_Conversion.ConvertTableToDTO(list_of_Live_Point,parent_id, objExistingConnectionNameDTO.ConnectionID, strucutredlist).ToList();
        }

        private void GetAllElement()
        {
           // _dbcontext = new InnonAnalyticsEngineEntities();
            IList<ElementDTO> objElemets = new List<ElementDTO>();
          //  objElemets = _dbcontext.tblElements.ToList();
        }
    }
}
