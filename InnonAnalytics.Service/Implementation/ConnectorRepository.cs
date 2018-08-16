using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.LiveVariables;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Exceptions;
using InnonAnalytics.Service.Repository;
//using Microsoft.SqlServer.Management.Common;
//using Microsoft.SqlServer.Management.Smo;
using System;
using System.Collections.Generic;
using System.Data.Entity;
using System.IO;
using System.Linq;
using System.Net;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
    public class ConnectorRepository : IConnectorRepository
    {

        private static IInnonAnalyticsEngineEntities _dbcontext;
      //  private DataConnectorsDTO _dataconnector;
        private ConnectorDTO _connectorDTO;
        public static IList<ExistingConnectionNameDTO> objAllExistingConnections; 

        private bool isconnectionpassed = false;

        //private DataConnectorViewModel _dataConnectorVM { get; set; }

        //public DataConnectorViewModel GetDataConnectorVM()
        //{
        //    return this._dataConnectorVM;
        //}

        //Is connection passed property is for test the connection. If IsConnectionPassed is false is mean the connection is failed
        public bool IsConnectionPassed
        {
            get
            {
                return this.isconnectionpassed;
            }
        }

       

        public ConnectorRepository(IInnonAnalyticsEngineEntities db)
        {
            _dbcontext = db;
        }


        /// <summary>
        /// Constructor to create the objects for child object on the basis of DataConnectionType
        /// </summary>
        /// <param name="strDataConnectionType"></param>

        //public ConnectorRepository(string strDataConnectionType)
        //{

        //    _dataConnectorVM = new DataConnectorViewModel();
            
            
        //    if (Enum.IsDefined(typeof(DataSouceConnectionType), strDataConnectionType))
        //    {
                
        //        //every connection can be in different language thats why we need to get all the languagea
        //        _dataConnectorVM.DataConnectors.NameofConnection = LanguageRepository.GetAllActiveLanguageValue();

        //        switch ((DataSouceConnectionType)Enum.Parse(typeof(DataSouceConnectionType), strDataConnectionType))
        //        {
        //            case DataSouceConnectionType.Database:
        //                _dataConnectorVM.DataConnectors.objConnectionDatabaseDTO = new ConnectionDataBaseDTO();
        //                _dataConnectorVM.DataConnectors.DataConnectorConnectionType = DataSouceConnectionType.Database;
        //                break;
        //            case DataSouceConnectionType.API:
        //                _dataConnectorVM.DataConnectors.objConnectionAPIDTO = new ConnectionAPIDTO();
        //                _dataConnectorVM.DataConnectors.DataConnectorConnectionType = DataSouceConnectionType.API;
        //                break;
        //            case DataSouceConnectionType.FTP:
        //                _dataConnectorVM.DataConnectors.objConnectionFTPDTO = new ConnectionFTPDTO();
        //                _dataConnectorVM.DataConnectors.DataConnectorConnectionType = DataSouceConnectionType.FTP;
        //                break;
        //            default:
        //                throw new ConnectorException(Resources.DataSouceConnectionTypeInvalid);
        //        }
        //    }
        //    else
        //    {
        //        throw new ConnectorException(Resources.DataSouceConnectionTypeInvalid);
        //        // Handle values not in enum here if needed
        //    }

        //}

        /// <summary>
        /// This constructor is only for to test
        /// </summary>
        /// <param name="objDBDTO"></param>
        //public ConnectorRepository(DataConnectorsDTO objDataConnectorDTO)
        //{
        //    try
        //    {
        //        this._dataconnector = objDataConnectorDTO;
        //        //this._dbdto = objDataConnectorDTO.objConnectionDatabaseDTO;      
        //    }
        //    catch(Exception ex)
        //    {

        //        throw ex;
        //    }         
        //}


        public ConnectorRepository(ConnectorDTO objConnectorDTO)
        {
            try
            {
                this._connectorDTO = objConnectorDTO;
                //this._dbdto = objDataConnectorDTO.objConnectionDatabaseDTO;      
            }
            catch (Exception ex)
            {

                throw ex;
            }
        }



        //public ConnectorRepository(ConnectionFTPDTO objFTPDTO)
        //{
        //    this._dbftpdto = objFTPDTO;
        //    testFTPConnection();
        //}

        //public ConnectorRepository(ConnectionAPIDTO objAPIDTO)
        //{
        //    this._dbapidto = objAPIDTO;
        //    testAPIConnection();
        //}

/// <summary>
/// 
/// </summary>

        #region SaveConnections        
        
        public void SaveConnection()
        {
            switch (this._connectorDTO.DataConnectorType)
            {
                case DataSouceConnectionType.Database:
                case DataSouceConnectionType.Live:
                    saveDBConnection();
                    break;
                case DataSouceConnectionType.FTP:
                    saveFTPConnection();
                    break;
                case DataSouceConnectionType.API:
                    saveAPIConnection();
                    break;
                default:
                    throw new ConnectorException(Resources.DataSouceConnectionTypeInvalid);

            }
        }

        /// <summary>
        /// Update and save the Connection in to the database
        /// </summary>
        private void saveDBConnection()
        {
            try
            {                
              //  _dbcontext = new InnonAnalyticsEngineEntities();
                tblConnector objtblConnector = _dbcontext.tblConnectors.SingleOrDefault(t => t.ID == this._connectorDTO.ConnectionID);
                if (objtblConnector == null)
                {

                    ConnectorDTO.ConvertDTOToTable(this._connectorDTO, ref objtblConnector);
                    _dbcontext.tblConnectors.Add(objtblConnector);
                    //ConnectorConvert.ConvertDTOtoTable(this._dataconnector, ref objtblConnector);
                    //_dbcontext.tblConnectors.Add(objtblConnector);
                }                    
                else
                {
                    ConnectorDTO.ConvertDTOToTable(this._connectorDTO, ref objtblConnector);                    
                }
                _dbcontext.SaveChanges();
            }
            catch(Exception ex)
            {
                throw ex;
            }
            
        }
        private void saveFTPConnection()
        {
            try
            {
                //_dbcontext = new InnonAnalyticsEngineEntities();
                tblConnector objtblConnector = _dbcontext.tblConnectors.SingleOrDefault(t => t.ID == this._connectorDTO.ConnectionID);
                if (objtblConnector == null)
                {
                    ConnectorDTO.ConvertDTOToTable(this._connectorDTO, ref objtblConnector);
                    _dbcontext.tblConnectors.Add(objtblConnector);

                    //ConnectorConvert.ConvertDTOtoTable(this._dataconnector, ref objtblConnector);
                    //_dbcontext.tblConnectors.Add(objtblConnector);
                }
                else
                {
                    ConnectorDTO.ConvertDTOToTable(this._connectorDTO, ref objtblConnector);   
                }
                _dbcontext.SaveChanges();
            }
            catch (Exception ex)
            {
                throw ex;
            }
        }
        private void saveAPIConnection()
        {
            throw new Exception("",new  NotImplementedException());
        }
        #endregion

/// <summary>
/// //////////////////////////////////////////
/// </summary>

        #region TestConnections


        public void TestConnection()
        {

            try
            {
                if (this._connectorDTO == null)
                    throw new ConnectorException(Resources.DataSouceConnectionTypeInvalid + this._connectorDTO);

                switch (this._connectorDTO.DataConnectorType)
                {
                    case DataSouceConnectionType.Database:
                        testDBConnection();
                        break;
                    case DataSouceConnectionType.FTP:
                        testFTPConnection();
                        break;
                    case DataSouceConnectionType.API:
                        testAPIConnection();
                        break;
                    case DataSouceConnectionType.Live:
                        testLiveConnection();
                        break;
                    default:
                        throw new ConnectorException(Resources.DataSouceConnectionTypeInvalid);
                }
            }
            catch (ConnectorException ex)
            {
                throw ex;
            }

               
        }


        /// <summary>
        /// This test live connection for obix testing
        /// </summary>
        private void testLiveConnection()
        {
            try
            {
                ILiveVariable obix = new Obix(this._connectorDTO.ServerOrIP, this._connectorDTO.ServerUserName, this._connectorDTO.ServerPassword);
                this.isconnectionpassed = obix.Is_Connected;
            }
            catch(Exception ex)
            {
                throw new ConnectorException(Resources.ConnectionFailedException, ex);
            }
            
            
        }

        private void testDBConnection()
        {
            try
            {


                string connetionString = null;
                System.Data.SqlClient.SqlConnection connection;
                //System.Data.SqlClient.SqlCommand command;
                //string sql = null;

                connetionString = "Data Source=" + this._connectorDTO.ServerOrIP + ";Initial Catalog=" + this._connectorDTO.DatabaseName + ";User ID=" + this._connectorDTO.ServerUserName + ";Password=" + this._connectorDTO.ServerPassword + ";Connection Timeout=30";
                //sql = "Your SQL Statemnt Here";

                connection = new System.Data.SqlClient.SqlConnection(connetionString);
                
                connection.Open();
                connection.Close();
                //MessageBox.Show(" ExecuteNonQuery in SqlCommand executed !!");


                //System.Data.SqlClient.SqlConnection obj = new System.Data.SqlClient.SqlConnection();
                //obj.

                ////help source http://www.c-sharpcorner.com/UploadFile/d3e4b1/dynamically-getting-database-collection-from-sql-server-usin/
                //// For remote connection, remote server name / ServerInstance needs to be specified
                //ServerConnection srvConn2 = new ServerConnection(this._connectorDTO.ServerOrIP);
                //srvConn2.LoginSecure = false;
                //srvConn2.Login = this._connectorDTO.ServerUserName;
                //srvConn2.ConnectTimeout = 20;
                //srvConn2.Password = this._connectorDTO.ServerPassword;

                //Server srv3 = new Server(srvConn2);
                //srv3.ConnectionContext.DatabaseName = this._connectorDTO.DatabaseName;

                //srv3.ConnectionContext.Connect();
                //srv3.ConnectionContext.Disconnect();

                this.isconnectionpassed = true;
            }            
            catch (Exception ex)
            {
                throw new ConnectorException(Resources.ConnectionFailedException, ex);
            }    
        }

        private void testFTPConnection()
        {
            try
            {
                FtpWebRequest ftp = (FtpWebRequest)FtpWebRequest.Create(string.Format("{0}" + this._connectorDTO.ServerOrIP + "{1}", "ftp://", this._connectorDTO.DefaultPath));
                //FtpWebResponse res;

                ftp.Credentials = new NetworkCredential(this._connectorDTO.ServerUserName, this._connectorDTO.ServerPassword);
                ftp.KeepAlive = false;
                ftp.Method = WebRequestMethods.Ftp.ListDirectory;

                switch (this._connectorDTO.Mode)
                {
                    case FTPMode.Passive:
                        ftp.UsePassive = true;
                        break;
                    default:
                        ftp.UsePassive = false;
                        break;
                }
                ftp.GetResponse();
                this.isconnectionpassed = true;
            }
            catch (WebException webex)
            {
                throw new ConnectorException(Resources.ConnectionFailedException, webex);
            }
            catch (Exception ex)
            {
                throw new ConnectorException(Resources.ConnectionFailedException, ex);
            }
        }

        ////just for test
        //// Get the object used to communicate with the server.
        //FtpWebRequest request = (FtpWebRequest)WebRequest.Create("ftp://ftp.innon.co.uk");
        //request.Method = WebRequestMethods.Ftp.ListDirectory;
        //request.KeepAlive = false;
        //request.UsePassive = true;


        //// This example assumes the FTP site uses anonymous logon.
        //request.Credentials = new NetworkCredential("innon.co.uk", "dell6000#1");

        //FtpWebResponse response = (FtpWebResponse)request.GetResponse();
        ////end test

        private void testAPIConnection()
        {
            this.isconnectionpassed = false;
        }

        #endregion


        #region Get Exisiting Connection
        public IList<ConnectorDTO> GetExistingConnections()
        {
            try
            {
                //_dbcontext = new InnonAnalyticsEngineEntities();
                ICollection<tblConnector> objtblConnector = _dbcontext.tblConnectors.ToList();
                return ConnectorDTO.ConvertTableToDTO(objtblConnector);
            }
            catch
            { throw; }
        }

        /// <summary>
        /// Get connection by ConnectorID this method only use for the Connector Page or for datawarehouse, do not use any other page
        /// </summary>
        /// <param name="ConnectorID"></param>
        /// <returns>ConnectorDTO</returns>
        public ConnectorDTO GetExistingConnectionById(int ConnectorID)
        {
            try
            {
                //_dbcontext = new InnonAnalyticsEngineEntities();
                tblConnector objtblConnector = _dbcontext.tblConnectors.SingleOrDefault(s => s.ID == ConnectorID);

                if (objtblConnector == null)
                    throw new ConnectorException(Resources.ConnectorNotFound);

                return ConnectorDTO.ConvertTableToDTO(objtblConnector);
            }
            catch
            { throw; }
        }

        /// <summary>
        /// Get connection by ConnectorID this is for general use
        /// </summary>
        /// <param name="ConnectorID"></param>
        /// <returns>ExistingConnectionNameDTO</returns>
        public ExistingConnectionNameDTO GetExistingConnectionGeneralInfoById(int ConnectorID)
        {
            try
            {
                //_dbcontext = new InnonAnalyticsEngineEntities();
                tblConnector objtblConnector = _dbcontext.tblConnectors.SingleOrDefault(s => s.ID == ConnectorID);

                if (objtblConnector == null)
                    throw new ConnectorException(Resources.ConnectorNotFound);

                return ExistingConnectionNameDTO.ConvertTableToDTO(objtblConnector);
            }
            catch
            { throw; }
        }

       


        /// <summary>
        /// Get all connection by Is_Active
        /// </summary>
        /// <param name="Active"></param>
        /// <returns>IList<ConnectorDTO></returns>
        public IList<ExistingConnectionNameDTO> GetExistingConnectionsBy_Is_Active(bool Active)
        {
            try
            {
                //_dbcontext = new InnonAnalyticsEngineEntities();
                ICollection<tblConnector> objtblConnector = _dbcontext.tblConnectors.Where(c => c.Is_Active == Active).ToList();
                return ExistingConnectionNameDTO.ConvertTableToDTO(objtblConnector);
            }
            catch
            { throw; }
        }

        

        #endregion
    }



    
}
