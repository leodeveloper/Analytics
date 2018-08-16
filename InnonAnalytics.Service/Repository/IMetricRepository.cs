using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
namespace InnonAnalytics.Service.Repository
{
    public interface IMetricRepository
    {
        IList<MetricDTO> GetMetrics();
        MetricDTO GetMetrics(int metric_Id);

        IList<MetricDTO> GetMetricForDropdownList();

        IList<MetricDTO> GetMetricForDropdownListByUserId(string user_id);

        void Save_Metric(MetricDTO metric_dto);

        void Save_Metric(IEnumerable<tblElement> tbl_Elements);
        void Update_Metric(MetricDTO metric_dto);

        List<MetricDTO> Get_All_Metric_By_User_Id(IEnumerable<string> user_ids);

        bool User_Metric_Update(IList<MetricDTO> metricdtos, IEnumerable<string> user_ids);
    }
}
