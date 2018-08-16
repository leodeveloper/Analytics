using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class UsersMetricDTO
    {
        public string User_Id { get; set; }
        public int Metric_Id { get; set; }
    }

    public static class Convert_MetricUsers
    {
        public static List<AspNetUserMetric> Convert_List_Table(IEnumerable<int> metric_ids, IEnumerable<string> user_ids)
        {
            List<AspNetUserMetric> tbl_AspnetUserMetric = new List<AspNetUserMetric>();
            foreach (var user_id in user_ids)
            {
                try
                {
                    foreach (var metric_id in metric_ids)
                    {
                        tbl_AspnetUserMetric.Add(new AspNetUserMetric { Metric_Id = metric_id, User_Id = user_id });
                    }
                }
                catch (Exception ex)
                {

                }
            }
            return tbl_AspnetUserMetric;
        }
    }
}
