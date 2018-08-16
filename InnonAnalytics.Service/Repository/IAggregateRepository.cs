using InnonAnalytics.Common.Enums;
using InnonAnalytics.DataWareHouseService.Model;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Repository
{
    public interface IAggregateRepository
    {
        IList<ChartRawDataDTO> Get_Raw_Data(ChartType chart_type, int chart_id, DateTime from_date, DateTime to_date);
        Aggregate_DTO_Metric Get_Aggregate_Data_Signle_Metric(ChartType chart_type, int chart_id, DateTime from_date, DateTime to_date);
        Tree_Map_Aggregate_DTO Get_Aggregate_Data(TagType groupby, DateTime from_date, DateTime to_date);

        Aggregate_DTO_Group_By_Aggregation_Type Get_Aggregate_Data(ChartType chart_type, int chart_id, DateTime from_date, DateTime to_date);

       // List<Chart_Diagram_Aggregate_DTO> Get_Aggregate_Data_Diagram(List<int> metric_ids, DateTime from_date, DateTime to_date);

        Aggregate_DTO_Group_By_Aggregation_Type Get_Aggregate_Data_Raw(int chart_id, DateTime from_date, DateTime to_date);

        List<Aggregate_Metric_Elements_Value> Get_Aggregate_Data_By_Metrics(ICollection<tblMetric> metrics, DateTime from_date, DateTime to_date);
        List<Aggregate_Metric_Elements_Value> Get_Aggregate_Data_By_Metrics(ChartType chart_type, int chart_id, DateTime from_date, DateTime to_date);

        IList<Aggregate_DTO_Group_By_Aggregation_Type> Get_Aggregate_Data_By_Metric_GroupBy(ChartType chart_type, int chart_id, DateTime from_date, DateTime to_date);
        IList<Warehouse_DTO> Get_WareHouse_Raw_Data(AggerationType aggregation_type, int point_id, DateTime from_date, DateTime to_date);
    }
}
