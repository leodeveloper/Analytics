using InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.DataWareHouseService.Model
{
    public class FactsRestatementAudit_DTO
    {
        public long ID { get; set; }
        public long Element_ID { get; set; }
        public DateTime Timestamp_From { get; set; }
        public DateTime Timestamp_To { get; set; }
        public double Old_Value { get; set; }
        public double New_Value { get; set; }
        public bool Send_To_DW { get; set; }
        public DateTime Updated_Datetime { get; set; }
        public long Updated_User_ID { get; set; }

    }

    public static class FactsRestatementAudit_Convert
    {
        public static FactsRestatementAudit Convert_Point_Measure_Fact_To_FactsRestatmentAudit(Point_Measure_Fact point_measure_fact, double newvalue)
        {
            FactsRestatementAudit facts_restatment_audit = new FactsRestatementAudit();
            facts_restatment_audit.Point_ID = point_measure_fact.Point_ID;
            facts_restatment_audit.New_Value = newvalue;
            facts_restatment_audit.Old_Value = point_measure_fact.Raw_Value;
            facts_restatment_audit.Send_To_DW = true;
            facts_restatment_audit.Timestamp_From = point_measure_fact.Timestamp_From;
            facts_restatment_audit.Timestamp_To = point_measure_fact.Timestamp_To;
            facts_restatment_audit.Updated_Datetime = System.DateTime.Now;
            facts_restatment_audit.Updated_User_ID = 1;
            return facts_restatment_audit;
        }
        
    }
}
