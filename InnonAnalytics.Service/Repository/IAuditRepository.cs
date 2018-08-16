using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Repository
{
    public interface IAuditRepository
    {
        void SaveAduit(string user_id, string row_id, string table_name, string old_values, string new_values, string comments);
    }
}
