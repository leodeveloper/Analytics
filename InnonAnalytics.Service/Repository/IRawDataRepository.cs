using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Implementation;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Repository
{

   


    public interface IRawTableRepository
    {
        IEnumerable<tblPoint> RowTableNames { get; }
        void GetRowTableNames(string strServerName, string strUserName, string strPassword, string strDatabaseName);
    }


   
    public interface IRawDataRepository
    {
        IList<RawDataDTO> GetRawData(string data_source_name, ConnectorDTO _dto_connector, InnonAnalyticsEngineEntities _dbcontext);
        IList<RawDataDTO> GetRowData(string data_source_name, DateTime from_date, DateTime to_date, ConnectorDTO _dto_connector, InnonAnalyticsEngineEntities _dbcontext);
    }
}
