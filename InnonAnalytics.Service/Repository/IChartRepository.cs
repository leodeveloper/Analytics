using InnonAnalytics.Common.Enums;
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
    public interface IChartRepository
    {
        IList<ChartRawDataDTO> Get_Raw_Data_By_Chart(ChartType _chart_type, int _id);
        Aggregate_Element_Ids Get_Data_Points_By_Chart(ChartType _chart_type, int _id);
      //  IEnumerable<long> Get_Data_Points_By_Chart(ChartType _chart_type, int _id);
        IList<ElementDTO_WareHouse> Get_Target_Data_Points_By_Chart(ChartType _chart_type, int _id);

        IList<tblMetric> Get_Metric_By_Chart(ChartType _chart_type, int _id);

        IList<tblMetric> Get_Diagram_Metric();

        ChartBarDTO Get_Bar_Chart(int chart_id);
        ChartGaugeDTO Get_Gauge_Chart(int chart_id);
        ChartTreeMapDTO Get_TreeMap_Chart(int chart_id);

        ChartPieDTO Get_Pie_Chart(int chart_id);

        ChartStackedDTO Get_Stacked_Chart(int chart_id);

        ChartLineDTO Get_Line_Chart(int chart_id);

        ChartDonutDTO Get_Donut_Chart(int chart_id);
        ChartCounterDTO Get_Counter_Chart(int chart_id);

        Combine_Enum_Tag_Aggregation Get_Group_By(ChartType _chart_type, int _id);
        IList<string> Get_GroupBy_Chart_Type(ChartType _chart_type);
        Aggregate_Metric_Elements Get_Data_Points_By_Metric(tblMetric metric);

        Chart_Common_Properties_DTO Get_Time_Line_By_Chart(ChartType _chart_type, int widget_id);

        void Update_Chart_Common_Properties(int widget_id, Chart_Common_Properties_DTO chart_common_propreties, ChartType _chart_type);

        Dashboard_Widget_VM_DTO Get_Chart_By_Chart_ID(ChartType _chart_type, int _id);

        void Remove_Chart(ChartType _chart_type, int _id);
    }
}
