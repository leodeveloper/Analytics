using FluentValidation.Attributes;
using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.DTOValidators;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Model.Exceptions;
using InnonAnalytics.Model.Filters;
using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public abstract class DataConnectorDTO
    {


        /// <summary>
        /// Base Data ConnectorDTO
        /// </summary>
        public DataConnectorDTO()
        {
            this.NameofConnection = new List<LanguageValueDTO>();
            this.ConnectorCredential = new ConnectorCredentialDTO();
        }

        public int ID { get; set; }
        public virtual IList<LanguageValueDTO> NameofConnection { get; set; }

        public virtual ConnectorCredentialDTO ConnectorCredential { get; set; }

        public DataSouceConnectionType DataConnectorConnectionType { get; set; }

        public string SessionId { get; set; }

       
    }

    public class ConnectorCredentialDTO
    {
        public string ServerOrIP { get; set; }
        public string ServerUserName { get; set; }
        public string ServerPassword { get; set; }
        public int? PortNumber { get; set; }
    }


    /// <summary>
    /// DataConnectorsDTO drive from the base DataConnectorDTO
    /// </summary>
    /// 
    [Validator(typeof(DataConnectorsDTOValidator))]
    public class DataConnectorsDTO : DataConnectorDTO
    {
        public ConnectionDataBaseDTO objConnectionDatabaseDTO { get; set; }
        public ConnectionFTPDTO objConnectionFTPDTO { get; set; }
        public ConnectionAPIDTO objConnectionAPIDTO { get; set; }
    }

    [Validator(typeof(ConnectionDataBaseDTOValidator))]
    public class ConnectionDataBaseDTO //: DataConnectorDTO
    {
        public string strDatabaseName { get; set; }
       // public DataBaseType Database { get; set; }
    }

    public class ConnectionFTPDTO //: DataConnectorDTO
    {
        public string DefaultFolder { get; set; }
        public FTPMode Mode { get; set; }
    }

    public class ConnectionAPIDTO //: DataConnectorDTO
    {
        public string DefaultPath { get; set; }
        public string PrivateKey { get; set; }
        public string SecretKey { get; set; }
    }

   

    

    //public class DataConnectorViewModel
    //{

    //    public DataConnectorViewModel()
    //    {
    //        this.DataConnectors = new DataConnectorsDTO();
    //        this.ExistingConnectionName = new List<ExistingConnectionNameDTO>();
    //    }

    //    public IList<ExistingConnectionNameDTO> ExistingConnectionName { get; set; }
    //    public DataConnectorsDTO DataConnectors { get; set; }
    //}

    


    #region Convert DTO to Table , Table to DTO, DTO to View Model
    public static class ConnectorConvert
    {
        public static DataConnectorViewModel ConvertDTOtoViewModel(IList<ExistingConnectionNameDTO> ExistingConnectionName)
        {
            DataConnectorViewModel dataViewModel = new DataConnectorViewModel();
            dataViewModel.ExistingConnectionName = ExistingConnectionName;
            //dataViewModel.DataConnectors.objConnectionDatabaseDTO = objConnectionDatabaseDTO;
            return dataViewModel;
        }


        public static void ConvertDTOtoTable(DataConnectorsDTO objConnectorDTO, ref tblConnector objConnector)
        {
            if (objConnector == null)
                objConnector = new tblConnector();

            objConnector.Data_Connector_Connection_Type = objConnectorDTO.DataConnectorConnectionType.ToString();


            if (objConnectorDTO.DataConnectorConnectionType == DataSouceConnectionType.Database)
                objConnector.Database_Name = objConnectorDTO.objConnectionDatabaseDTO.strDatabaseName;
            else if (objConnectorDTO.DataConnectorConnectionType == DataSouceConnectionType.API)
                throw new NotImplementedException();
            else if (objConnectorDTO.DataConnectorConnectionType == DataSouceConnectionType.FTP)
            {
                objConnector.Default_Path = objConnectorDTO.objConnectionFTPDTO.DefaultFolder;
                objConnector.FTP_Mode = objConnectorDTO.objConnectionFTPDTO.Mode.ToString();
            }                
            else
                throw new DataConnectorExcetion(Resources.DataSouceConnectionTypeInvalid);



            objConnector.ID = objConnectorDTO.ID;
            objConnector.User_Name = StringEncryDecry.Encrypt(objConnectorDTO.ConnectorCredential.ServerUserName, objConnectorDTO.SessionId);
            objConnector.Password = StringEncryDecry.Encrypt(objConnectorDTO.ConnectorCredential.ServerPassword, objConnectorDTO.SessionId);
            objConnector.Server_Name = StringEncryDecry.Encrypt(objConnectorDTO.ConnectorCredential.ServerOrIP, objConnectorDTO.SessionId);
            objConnector.Port_Number = objConnectorDTO.ConnectorCredential.PortNumber;
            objConnector.SessionID = objConnectorDTO.SessionId;

            //if (objConnector.tblDescription == null)
            //    objConnector.tblDescription = new tblDescription();

            tblDescription objtblDescription = objConnector.tblDescription;
            DescriptionConvert.DescriptionConvertDTOToTbl(objConnectorDTO.NameofConnection, ref objtblDescription);
            objConnector.tblDescription = objtblDescription;
          
        }

        public static ConnectorCredentialDTO ConvertTableToConnectorCredentialDTO(tblConnector objtblConnector)
        {
           return new ConnectorCredentialDTO {

               PortNumber = objtblConnector.Port_Number,
               ServerOrIP = objtblConnector.Server_Name,
               ServerPassword = objtblConnector.Password,
               ServerUserName = objtblConnector.User_Name
            
            };
        }

        public static IList<DataConnectorsDTO> ConvertTableToDTO(IEnumerable<tblConnector> listTblConnector)
        {
            IList<DataConnectorsDTO> listConnectorDataBaseDTO = new List<DataConnectorsDTO>();
            foreach(var objtblConnector in listTblConnector)
            {
                listConnectorDataBaseDTO.Add(ConvertTableToDTO(objtblConnector));
            }
            return listConnectorDataBaseDTO;
        }

        public static DataConnectorsDTO ConvertTableToDTO(tblConnector objDbtbl)
        {
            DataConnectorsDTO objDataConnectorDTO = new DataConnectorsDTO();
            objDataConnectorDTO.ConnectorCredential.ServerUserName = StringEncryDecry.Decrypt(objDbtbl.User_Name, objDbtbl.SessionID);
            objDataConnectorDTO.ConnectorCredential.ServerPassword = StringEncryDecry.Decrypt(objDbtbl.Password, objDbtbl.SessionID);
            objDataConnectorDTO.ConnectorCredential.ServerOrIP = StringEncryDecry.Decrypt(objDbtbl.Server_Name, objDbtbl.SessionID);
            objDataConnectorDTO.ConnectorCredential.PortNumber = objDbtbl.Port_Number;
            objDataConnectorDTO.NameofConnection = DescriptionConvert.DescriptionConvertDTOToTbl(objDbtbl.tblDescription);
            objDataConnectorDTO.ID = objDbtbl.ID;
            
            if (Enum.IsDefined(typeof(DataSouceConnectionType), objDbtbl.Data_Connector_Connection_Type))
            {
                objDataConnectorDTO.DataConnectorConnectionType = (DataSouceConnectionType)Enum.Parse(typeof(DataSouceConnectionType), objDbtbl.Data_Connector_Connection_Type);
                switch ((DataSouceConnectionType)Enum.Parse(typeof(DataSouceConnectionType), objDbtbl.Data_Connector_Connection_Type))
                {
                    case DataSouceConnectionType.Database:
                        objDataConnectorDTO.objConnectionDatabaseDTO = new ConnectionDataBaseDTO();
                        objDataConnectorDTO.objConnectionDatabaseDTO.strDatabaseName = objDbtbl.Database_Name;                        
                        break;
                    case DataSouceConnectionType.API:
                        objDataConnectorDTO.objConnectionAPIDTO = new ConnectionAPIDTO();
                        throw new NotImplementedException();
                    case DataSouceConnectionType.FTP:
                        objDataConnectorDTO.objConnectionFTPDTO = new ConnectionFTPDTO();
                        objDataConnectorDTO.objConnectionFTPDTO.DefaultFolder = objDbtbl.Default_Path;

                        FTPMode enumFTPMode;
                        if (Enum.TryParse(objDbtbl.FTP_Mode, out enumFTPMode))
                            objDataConnectorDTO.objConnectionFTPDTO.Mode = enumFTPMode;
                        else
                            throw new Exception(string.Format(Resources.FTPModeTypeInvalid + "- {0}" + objDbtbl.tblDescription.tblLanguageDescriptions.FirstOrDefault().Short_Desription));                        
                        break;
                    default:
                        throw new Exception(string.Format(Resources.DataSouceConnectionTypeInvalid + "- {0}" + objDbtbl.tblDescription.tblLanguageDescriptions.FirstOrDefault().Short_Desription));
                }
            }
            else
            {
                throw new DataConnectorExcetion(Resources.DataSouceConnectionTypeInvalid);
                // Handle values not in enum here if needed
            }
            return objDataConnectorDTO;
        }



        //public static ConnectionFTPDTO ConvertTableToDTO(tblConnector objDbtbl)
        //{
        //    ConnectionDataBaseDTO objDbDTO = new ConnectionDataBaseDTO();
        //    objDbDTO.strDatabaseName = objDbtbl.DatabaseName;
        //    objDbDTO.ServerUserName = objDbtbl.UserName;
        //    objDbDTO.ServerPassword = objDbtbl.Password;
        //    objDbDTO.ServerOrIP = objDbtbl.ServerName;
        //    objDbDTO.DataConnectorConnectionType = (DataSouceConnectionType)Enum.Parse(typeof(DataSouceConnectionType), objDbtbl.DataConnectorConnectionType);
        //    objDbDTO.NameofConnection = DescriptionConvert.DescriptionConvertDTOToTbl(objDbtbl.tblDescription);
        //    objDbDTO.ID = objDbtbl.ID;
        //    return null;//objDbDTO;
        //}

    }
    #endregion



}
