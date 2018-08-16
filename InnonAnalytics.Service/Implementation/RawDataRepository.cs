using InnonAnalytics.Common;
using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Exceptions;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Dynamic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{

   


    public class RawTableRepository : IRawTableRepository
    {
        private IInnonAnalyticsEngineEntities _dbcontext;
        string _strServerName;
        string _strUserName;
        string _strPassword;
        string _strDatabaseName;
        private IEnumerable<tblPoint> _rowtablenames;

        public RawTableRepository(IInnonAnalyticsEngineEntities db)
        {
            _dbcontext = db;
        }

      
        public IEnumerable<tblPoint> RowTableNames
        {
            get
            {
                return this._rowtablenames;
            }
        }


       
        public void GetRowTableNames( string strServerName,        string strUserName,        string strPassword,        string strDatabaseName)
        {
            this._strServerName = strServerName;
            this._strUserName = strUserName;
            this._strPassword = strPassword;
            this._strDatabaseName = strDatabaseName;
            getRowTableNames();
        }

        private void getRowTableNames()
        {
            try
            {
                //GetTableName is a stored porcedure which get all the table names and ids from database
                this._rowtablenames = _dbcontext.GetTableName(this._strServerName, this._strUserName, this._strPassword, this._strDatabaseName);               
            }
            catch (Exception ex)
            {
                throw new ConnectorException(Resources.ConnectionConnectException, ex.InnerException);
            }
           
        }   
    }




    public class RawDataRepository : IRawDataRepository
    {


        /// <summary>
        /// This method is not in use
        /// GetRawdata call the stored procedure called (GetRawData) for getting the rawdata for the dataware house 
        /// </summary>
        /// <param name="data_source_name">data_source_name is the table name where we need to get the raw for the Datawarehouse</param>
        /// <param name="connectorId"></param>
        public IList<RawDataDTO> GetRawData(string data_source_name, ConnectorDTO _dto_connector, InnonAnalyticsEngineEntities _dbcontext)
        {

            try
            {
                IEnumerable<RawDataDTO> rawdata = _dbcontext.Database.SqlQuery<RawDataDTO>("EXEC GetRawData '" + _dto_connector.ServerOrIP + "', '" +
                _dto_connector.ServerUserName + "' , '" + _dto_connector.ServerPassword + "', '" + _dto_connector.DatabaseName + "' , '" + data_source_name + "'");

                return rawdata.ToList();
            }
            catch (Exception ex)
            {
                throw ex;
            }           
        }


        public IList<RawDataDTO> GetRowData(string data_source_name,DateTime from_date,DateTime to_date, ConnectorDTO _dto_connector, InnonAnalyticsEngineEntities _dbcontext)
        {

            try
            {                
                IEnumerable<RawDataDTO> rawdata = _dbcontext.Database.SqlQuery<RawDataDTO>("EXEC GetRawData '" + _dto_connector.ServerOrIP + "', '" +
                    _dto_connector.ServerUserName + "' , '" + _dto_connector.ServerPassword + "', '" + _dto_connector.DatabaseName + "' , '" +
                    data_source_name + "' , '" + from_date.ToString("yyyy-MM-dd HH:mm:ss.fff") + "', '" + to_date.ToString("yyyy-MM-dd HH:mm:ss.fff") + "'");


                return rawdata.ToList();
            }
            catch (Exception ex)
            {
                throw ex;
            }
        }
    }

    

}
