using InnonAnalytics.Model.DTO;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Repository
{
    public interface IDatawareHouseMigrationLogRepository
    {
        IList<DatawareHouseMigrationLogDTO> get_Data_Migration_Log_By_ElementID(long element_ID);
        IList<DatawareHouseMigrationLogDTO> get_Data_Migration_Logs();
    }
}
