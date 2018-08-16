using InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel;
using InnonAnalytics.DataWareHouseService.Reposiotry;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.DataWareHouseService.Service
{
    public class FactsRestatementAudit_Service : IFactsRestatementAudit_Service
    {
        private IInnonAnalyticsWarehouseEntities _dbcontext;
        public void Save(FactsRestatementAudit tbl_fact_restatement_audit)
        {
            _dbcontext = new InnonAnalyticsWarehouseEntities();
            _dbcontext.FactsRestatementAudits.Add(tbl_fact_restatement_audit);
            _dbcontext.SaveChanges();
        }
    }
}
