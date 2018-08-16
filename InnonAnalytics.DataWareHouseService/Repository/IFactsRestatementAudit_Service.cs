using InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.DataWareHouseService.Reposiotry
{
    public interface IFactsRestatementAudit_Service
    {
      void Save(FactsRestatementAudit tbl_fact_restatement_audit);   
    }
}
