using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.DTOValidators;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Model.Filters;
using FluentValidation.Attributes;
using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    [Validator(typeof(ConnectectorDTOValidator))]
    public class ConnectorDTO
    {

        #region properties

        public int ConnectionID { get; set; }
        public string ConnectionName { get; set; }

      //  [UIHint("DataSouceConnectionTypeEditor")]
        public DataSouceConnectionType DataConnectorType { get; set; }

        public DataGatewayType GatewayType { get; set; }

        public string ServerOrIP { get; set; }
        public string ServerUserName { get; set; }
        public string ServerPassword { get; set; }
        public int? PortNumber { get; set; }

        public bool IsActive { get; set; }

        /// <summary>
        /// Status is not a database property
        /// </summary>
        public ConnectionStatus Status { get; set; }
        public string SessionId { get; set; }

        //Initially we have three kind of DataConnectorType FTP. Database, API, Each kind of connector has some unique properties

        /// <summary>
        /// This property only valid when the DataConnectorTypee is Database
        /// </summary>
        public string DatabaseName { get; set; }

        /// <summary>
        /// These properties only valid when the DataConnectorType is API, DefaultPath property will use for boht DataConnectorTypes (API, FTP (DefaultPath = DefaultFolder))
        /// </summary>
        public string DefaultPath { get; set; }
        public string PrivateKey { get; set; }
        public string SecretKey { get; set; }

        /// <summary>
        /// This property only valid when the DataConnectorType is FTP
        /// </summary>        
        public FTPMode? Mode { get; set; }
        
        #endregion

        #region Convert DTO to Table , Table to DTO, DTO to View Model
        public static tblConnector ConvertDTOToTable(ConnectorDTO _dtoConnector)
        {
            tblConnector _tblConnector = new tblConnector();
            _tblConnector.ID = _dtoConnector.ConnectionID;
            _tblConnector.Connection_Name = _dtoConnector.ConnectionName;
            _tblConnector.User_Name = StringEncryDecry.Encrypt(_dtoConnector.ServerUserName, _dtoConnector.SessionId);
            _tblConnector.Password = StringEncryDecry.Encrypt(_dtoConnector.ServerPassword, _dtoConnector.SessionId);
            _tblConnector.Server_Name = StringEncryDecry.Encrypt(_dtoConnector.ServerOrIP, _dtoConnector.SessionId);
            _tblConnector.Port_Number = _dtoConnector.PortNumber;
            _tblConnector.Data_Connector_Connection_Type = _dtoConnector.DataConnectorType.ToString();
            _tblConnector.Gateway_Type = _dtoConnector.DataConnectorType.ToString();
            _tblConnector.Is_Active = _dtoConnector.IsActive;

            _tblConnector.SessionID = _dtoConnector.SessionId;

            _tblConnector.Database_Name = _dtoConnector.DatabaseName;

            _tblConnector.Default_Path = _dtoConnector.DefaultPath;
            if (_dtoConnector.Mode != null)
                _tblConnector.FTP_Mode = _dtoConnector.Mode.ToString();
                   

            return _tblConnector;
        }

        public static tblConnector ConvertDTOToTable(ConnectorDTO _dtoConnector, ref tblConnector _tblConnector)
        {
            if(_tblConnector == null)
                _tblConnector = new tblConnector();
            
            _tblConnector.ID = _dtoConnector.ConnectionID;
            _tblConnector.Connection_Name = _dtoConnector.ConnectionName;
            _tblConnector.User_Name = StringEncryDecry.Encrypt(_dtoConnector.ServerUserName, _dtoConnector.SessionId);
            _tblConnector.Password = StringEncryDecry.Encrypt(_dtoConnector.ServerPassword, _dtoConnector.SessionId);
            _tblConnector.Server_Name = StringEncryDecry.Encrypt(_dtoConnector.ServerOrIP, _dtoConnector.SessionId);
            _tblConnector.Port_Number = _dtoConnector.PortNumber;
            _tblConnector.Data_Connector_Connection_Type = _dtoConnector.DataConnectorType.ToString();
            _tblConnector.Gateway_Type = _dtoConnector.GatewayType.ToString();
            _tblConnector.Is_Active = _dtoConnector.IsActive;

            _tblConnector.SessionID = _dtoConnector.SessionId;

            _tblConnector.Database_Name = _dtoConnector.DatabaseName;

            _tblConnector.Default_Path = _dtoConnector.DefaultPath;
            if (_dtoConnector.Mode != null)
                _tblConnector.FTP_Mode = _dtoConnector.Mode.ToString();

            return _tblConnector;
        }



        public static IList<tblConnector> ConvertDTOToTable(ICollection<ConnectorDTO> _dtoConnectors)
        {
            IList<tblConnector> _tblConnectors = new List<tblConnector>();

            foreach(ConnectorDTO _dtoConnector in _dtoConnectors)
            {
                _tblConnectors.Add(ConvertDTOToTable(_dtoConnector));
            }

            return _tblConnectors;
        }


        public static ConnectorDTO ConvertTableToDTO(tblConnector _tblConnector)
        {
            
            ConnectorDTO _dtoConnector = new ConnectorDTO();
            _dtoConnector.ConnectionID = _tblConnector.ID;
            _dtoConnector.ConnectionName = _tblConnector.Connection_Name;
            _dtoConnector.ServerUserName = StringEncryDecry.Decrypt(_tblConnector.User_Name, _tblConnector.SessionID);
            _dtoConnector.ServerPassword = StringEncryDecry.Decrypt(_tblConnector.Password, _tblConnector.SessionID);
            _dtoConnector.ServerOrIP = StringEncryDecry.Decrypt(_tblConnector.Server_Name, _tblConnector.SessionID);
            _dtoConnector.PortNumber = _tblConnector.Port_Number;
            _dtoConnector.DataConnectorType = (DataSouceConnectionType)Enums.TryParse(typeof(DataSouceConnectionType), _tblConnector.Data_Connector_Connection_Type.ToString());
            _dtoConnector.GatewayType = (DataGatewayType)Enums.TryParse(typeof(DataGatewayType), _tblConnector.Gateway_Type.ToString());
            _dtoConnector.IsActive = _tblConnector.Is_Active;

            _dtoConnector.SessionId = _tblConnector.SessionID;

            _dtoConnector.DatabaseName = _tblConnector.Database_Name;

            _dtoConnector.DefaultPath = _tblConnector.Default_Path;
            if (_tblConnector.FTP_Mode != null)
                _dtoConnector.Mode = (FTPMode)Enums.TryParse(typeof(FTPMode), _tblConnector.FTP_Mode);

            return _dtoConnector;
        }

        public static IList<ConnectorDTO> ConvertTableToDTO(ICollection<tblConnector> _tblConnectors)
        {
            IList<ConnectorDTO> _dtoConnectors = new List<ConnectorDTO>();
            foreach (var _tblConnector in _tblConnectors)
            {
                _dtoConnectors.Add(ConvertTableToDTO(_tblConnector));
            }
            return _dtoConnectors;
        }
        #endregion

    }


    public class ExistingConnectionNameDTO
    {

        public int ConnectionID { get; set; }
        /// <summary>
        /// here Connection name can not be multi langugae, for further help please check ConnectorRepository class in service layer Method GetExistingConnectionsByLanguageID(int iLanguageID)
        /// </summary>
        public string ConnectionName { get; set; }
        public DataSouceConnectionType DataConnectorType { get; set; }

        public bool IsActive { get; set; }

        public static ExistingConnectionNameDTO ConvertTableToDTO(tblConnector _tblConnector)
        {
            ExistingConnectionNameDTO _dtoExistingConnection = new ExistingConnectionNameDTO();
            _dtoExistingConnection.ConnectionID = _tblConnector.ID;
            _dtoExistingConnection.ConnectionName = _tblConnector.Connection_Name;
            _dtoExistingConnection.DataConnectorType = (DataSouceConnectionType)Enums.TryParse(typeof(DataSouceConnectionType), _tblConnector.Data_Connector_Connection_Type.ToString());
            _dtoExistingConnection.IsActive = _tblConnector.Is_Active;
            return _dtoExistingConnection;
        }

        public static ExistingConnectionNameDTO ConvertTableToDTO(ConnectorDTO _dtoConnector)
        {
            ExistingConnectionNameDTO _dtoExistingConnection = new ExistingConnectionNameDTO();
            _dtoExistingConnection.ConnectionID = _dtoConnector.ConnectionID;
            _dtoExistingConnection.ConnectionName = _dtoConnector.ConnectionName;
            _dtoExistingConnection.DataConnectorType = (DataSouceConnectionType)Enums.TryParse(typeof(DataSouceConnectionType), _dtoConnector.DataConnectorType.ToString());
            _dtoExistingConnection.IsActive = _dtoConnector.IsActive;
            return _dtoExistingConnection;
        }

        public static IList<ExistingConnectionNameDTO> ConvertTableToDTO(ICollection<tblConnector> _tblConnectors)
        {
            IList<ExistingConnectionNameDTO> _dtoConnectors = new List<ExistingConnectionNameDTO>();
            foreach (var _tblConnector in _tblConnectors)
            {
                _dtoConnectors.Add(ConvertTableToDTO(_tblConnector));
            }
            return _dtoConnectors;
        }
    }


    public class DataConnectorViewModel
    {

        public DataConnectorViewModel()
        {
            this.DataConnectors = new ConnectorDTO();
            this.ExistingConnectionName = new List<ExistingConnectionNameDTO>();
        }

        public IList<ExistingConnectionNameDTO> ExistingConnectionName { get; set; }
        public ConnectorDTO DataConnectors { get; set; }


        public static DataConnectorViewModel ConvertDTOtoViewModel(IList<ExistingConnectionNameDTO> ExistingConnectionName)
        {
            DataConnectorViewModel dataViewModel = new DataConnectorViewModel();
            dataViewModel.ExistingConnectionName = ExistingConnectionName;
            //dataViewModel.DataConnectors.objConnectionDatabaseDTO = objConnectionDatabaseDTO;
            return dataViewModel;
        }

    }
}
