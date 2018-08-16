using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
    public class DatawareHouseMigrationLogRepository : IDatawareHouseMigrationLogRepository
    {
        private IInnonAnalyticsEngineEntities _dbcontext;
        public DatawareHouseMigrationLogRepository(IInnonAnalyticsEngineEntities db)
        {
            _dbcontext = db;
        }


        public IList<DatawareHouseMigrationLogDTO> get_Data_Migration_Log_By_ElementID(long element_ID)
        {
           IEnumerable<tblDatawareHouseMigrationLog> list_tbl_DatawareHouseMigrationLog =  _dbcontext.tblDatawareHouseMigrationLogs.Where(e => e.Element_ID == element_ID);
           return DatawareHouseMigrationLogDTO.Convert_List_Table_To_List_DTO(list_tbl_DatawareHouseMigrationLog);
        }

        public IList<DatawareHouseMigrationLogDTO> get_Data_Migration_Logs()
        {
            return DatawareHouseMigrationLogDTO.Convert_List_Table_To_List_DTO(_dbcontext.tblDatawareHouseMigrationLogs);
        }
    }
}
