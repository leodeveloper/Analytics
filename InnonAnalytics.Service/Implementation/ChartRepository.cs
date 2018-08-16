using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
    public class ChartRepository : IChartRepository
    {
        private IInnonAnalyticsEngineEntities _dbcontext;
        private IDashboardRepository _dashboardRep;
        private static ITagRepository _tagRep;
        private IElementRepository _elementRep;
        private IMetricRepository _metricRep;
        private ITagElementRepository _tagelementRep;

        public ChartRepository(IInnonAnalyticsEngineEntities db, IDashboardRepository dashboardRep, ITagRepository tagRep, IElementRepository elementRep, IMetricRepository metricRep, ITagElementRepository tagelementRep)
        {
            _dbcontext = db;
            _dashboardRep = dashboardRep;
            _tagRep = tagRep;
            _elementRep = elementRep;
            _metricRep = metricRep;
            _tagelementRep = tagelementRep;
        }


        public IList<ChartRawDataDTO> Get_Raw_Data_By_Chart(ChartType _chart_type, int _id)
        {
            IList<tblMetric> metrics = Get_Metric_By_Chart(_chart_type, _id);           
           
            IEnumerable<long> tag_ids;
            IEnumerable<long> element_ids;
            List<ChartRawDataDTO> chart_raw_data = new List<ChartRawDataDTO>();
            MetricDTO metric_dto;
            IList<ElementDTO> tbl_tag_element;
            foreach(tblMetric metric in metrics)
            {
                tbl_tag_element = new List<ElementDTO>();
                metric_dto = _metricRep.GetMetrics(metric.Id);

                tag_ids = metric_dto.Tags.Select(tag => tag.ID);             
                element_ids = _tagelementRep.Get_Element_ID_By_Tag_ID(tag_ids);
                if(element_ids != null)
                    tbl_tag_element = _elementRep.GetElements(element_ids.ToList());


                chart_raw_data.AddRange(ChartRawDataDTOConvert.ConvertList(metric_dto, tbl_tag_element, metric_dto.Elements.ToList()));
            }
            return chart_raw_data;
        }


        /// <summary>
        /// Get Group enums
        /// </summary>
        /// <param name="_chart_type"></param>
        /// <returns></returns>
        public IList<string> Get_GroupBy_Chart_Type(ChartType _chart_type)
        {
           
            IList<Tag_Type_DTO> tagtype = _tagRep.Get_Tag_Type();
            List<string> _group_by = new List<string>();



            switch (_chart_type)
            {
                case ChartType.Bar:
                case ChartType.BarFixedPlacement:
                case ChartType.Line:
                case ChartType.Stacked:
                    _group_by.AddRange(Enum.GetNames(typeof(AggerationType)).Where(z => z != "Minute" && z != "Week"));
                    _group_by.AddRange(tagtype.Select(z => z.Tag_Type));
                    break;
                case ChartType.TreeMap:
                case ChartType.Pie:
                    _group_by.AddRange(tagtype.Select(z => z.Tag_Type));
                    break;               
                case ChartType.Donut:
                case ChartType.Gauge:
                case ChartType.HeatMap:
                case ChartType.Counter:
                    break;
                case ChartType.Diagram:
                    break;
                default:
                    throw new Exception(string.Format(Resources.Invalid_Chart_Type + " {0}", _chart_type));
            }
            return _group_by;
        }

        /// <summary>
        /// this function is use for getting the metric information
        /// </summary>
        /// <param name="_chart_type"></param>
        /// <param name="_id"></param>
        /// <returns></returns>
        public IList<tblMetric> Get_Metric_By_Chart(ChartType _chart_type, int _id)
        {
            IList<tblMetric> chart_metrics;
            switch (_chart_type)
            {
                case ChartType.Pie:
                    tblChart_Pie tbl_pie_chart = _dbcontext.tblChart_Pie.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_pie_chart == null)
                    {
                        throw new ArgumentNullException("Pie Chart not found please check the Pie chart id");
                    }
                    else
                    {
                        chart_metrics = tbl_pie_chart.tblChart_Metric.Select(metric => metric.tblMetric).ToList();
                        return chart_metrics;
                    }
                case ChartType.Bar:
                case ChartType.BarFixedPlacement:
                    tblChart_Bar tbl_bar = _dbcontext.tblChart_Bar.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_bar == null)
                    {
                        throw new ArgumentNullException("Bar Chart not found please check the Bar chart id");
                    }
                    else
                    {
                        chart_metrics = _dbcontext.tblMetrics.Where(metric => metric.Id == tbl_bar.Metric_Id || metric.Id == tbl_bar.Target_Metric_Id).ToList();
                        return chart_metrics;
                    }
                case ChartType.Stacked:
                    tblChart_Stacked tbl_Stacked_chart = _dbcontext.tblChart_Stacked.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_Stacked_chart == null)
                    {
                        throw new ArgumentNullException("Stacked Chart not found please check the Stacked chart id");
                    }
                    else
                    {
                        chart_metrics = tbl_Stacked_chart.tblChart_Metric.Select(metric => metric.tblMetric).ToList();
                        return chart_metrics;
                    }
                case ChartType.Line:
                    tblChart_Line tbl_Line_chart = _dbcontext.tblChart_Line.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_Line_chart == null)
                    {
                        throw new ArgumentNullException("Line Chart not found please check the Line chart id");
                    }
                    else
                    {
                        chart_metrics = tbl_Line_chart.tblChart_Metric.Select(metric => metric.tblMetric).ToList();
                        return chart_metrics;
                    }
                case ChartType.Donut:
                    tblChart_Donut tbl_Donut_chart = _dbcontext.tblChart_Donut.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_Donut_chart == null)
                    {
                        throw new ArgumentNullException("Donut Chart not found please check the Donut chart id");
                    }
                    else
                    {
                        chart_metrics = tbl_Donut_chart.tblChart_Metric.Select(metric => metric.tblMetric).ToList();
                        return chart_metrics;
                    }
                case ChartType.Counter:
                    tblChart_Counter tbl_Counter = _dbcontext.tblChart_Counter.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_Counter == null)
                    {
                        throw new ArgumentNullException("Counter Chart not found please check the Counter chart id");
                    }
                    else
                    {
                        chart_metrics = _dbcontext.tblMetrics.Where(metric => metric.Id == tbl_Counter.Metric_Id).ToList();
                        return chart_metrics;
                    }
                case ChartType.TreeMap:
                    tblChart_TreeMap tbl_TreeMap = _dbcontext.tblChart_TreeMap.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_TreeMap == null)
                    {
                        throw new ArgumentNullException("TreeMap Chart not found please check the Treemap chart id");
                    }
                    else
                    {
                        chart_metrics = _dbcontext.tblMetrics.Where(metric => metric.Id == tbl_TreeMap.Metric_Id || metric.Id == tbl_TreeMap.Target_Metric_Id).ToList();
                        return chart_metrics;
                    }
                case ChartType.HeatMap:
                    tblChart_Heatmap tbl_Heatmap = _dbcontext.tblChart_Heatmap.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_Heatmap == null)
                    {
                        throw new ArgumentNullException("Heatmap Chart not found please check the Heatmap chart id");
                    }
                    else
                    {
                        chart_metrics = _dbcontext.tblMetrics.Where(metric => metric.Id == tbl_Heatmap.Metric_Id ).ToList();
                        return chart_metrics;
                    }
                case ChartType.Gauge:
                    tblChart_Gauge tbl_Gauge = _dbcontext.tblChart_Gauge.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_Gauge == null)
                    {
                        throw new ArgumentNullException("Gauge Chart not found please check the Gauge chart id");
                    }
                    else
                    {
                        chart_metrics = _dbcontext.tblMetrics.Where(metric => metric.Id == tbl_Gauge.Metric_Id || metric.Id == tbl_Gauge.Target_Matric_Id).ToList();
                        return chart_metrics;
                    }
                case ChartType.Diagram:
                    return Get_Diagram_Metric();
                default:
                    throw new Exception(string.Format(Resources.Invalid_Chart_Type + " {0}", _chart_type));
            }
        }


        /// <summary>
        /// This function is for the return the tblMetric Source Column elementid and tag related with the Metric 
        /// source column contain json  "{  "Tags": [],  "Points": [    {      "ElementId": 1608    }  ]}"
        /// </summary>
        /// <param name="_chart_type"></param>
        /// <param name="_id"></param>
        /// <returns></returns>
        public Aggregate_Element_Ids Get_Data_Points_By_Chart(ChartType _chart_type, int _id)
        {

            Aggregate_Element_Ids ElementIds = new Aggregate_Element_Ids();
            switch (_chart_type)
            {
                case ChartType.Bar:
                    tblChart_Bar tbl_bar_chart = _dbcontext.tblChart_Bar.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_bar_chart == null)
                    {
                        throw new ArgumentNullException("Bar Chart not found please check the Bar chart id");
                    }
                    else
                    {
                        ElementIds.Metric_Name = tbl_bar_chart.tblMetric.Metric_Name;
                        ElementIds.Target_Metric_Name = tbl_bar_chart.tblMetric1.Metric_Name;
                        ElementIds.Mertric_Unit = Unit_Of_Measurement_DTO_Convert.Convert_Table_To_DTO(tbl_bar_chart.tblMetric.tblUnit);
                        ElementIds.Target_Mertric_Unit = Unit_Of_Measurement_DTO_Convert.Convert_Table_To_DTO(tbl_bar_chart.tblMetric1.tblUnit);
                        ElementIds.Mertric_Rollup_Function = (Rollup_Function_Option)Enums.TryParse(typeof(Rollup_Function_Option), tbl_bar_chart.tblMetric.Rollup_Function);
                        ElementIds.Mertric_Target_Rollup_Function = (Rollup_Function_Option)Enums.TryParse(typeof(Rollup_Function_Option), tbl_bar_chart.tblMetric1.Rollup_Function);
                        ElementIds.Element_Ids = Get_ElementId(tbl_bar_chart.tblMetric.Source);
                        ElementIds.Target_Element_Ids = Get_ElementId(tbl_bar_chart.tblMetric1.Source);
                        return ElementIds;
                    }

                case ChartType.BarFixedPlacement:
                    tblChart_Bar tbl_bar_Fixed_Placement_chart = _dbcontext.tblChart_Bar.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_bar_Fixed_Placement_chart == null)
                    {
                        throw new ArgumentNullException("Bar Chart not found please check the Bar chart id");
                    }
                    else
                    {
                        ElementIds.Metric_Name = tbl_bar_Fixed_Placement_chart.tblMetric.Metric_Name;
                        ElementIds.Target_Metric_Name = tbl_bar_Fixed_Placement_chart.tblMetric1.Metric_Name;
                        ElementIds.Mertric_Unit = Unit_Of_Measurement_DTO_Convert.Convert_Table_To_DTO(tbl_bar_Fixed_Placement_chart.tblMetric.tblUnit);
                        ElementIds.Target_Mertric_Unit = Unit_Of_Measurement_DTO_Convert.Convert_Table_To_DTO(tbl_bar_Fixed_Placement_chart.tblMetric1.tblUnit);
                        ElementIds.Mertric_Rollup_Function = (Rollup_Function_Option)Enums.TryParse(typeof(Rollup_Function_Option), tbl_bar_Fixed_Placement_chart.tblMetric.Rollup_Function);
                        ElementIds.Mertric_Target_Rollup_Function = (Rollup_Function_Option)Enums.TryParse(typeof(Rollup_Function_Option), tbl_bar_Fixed_Placement_chart.tblMetric1.Rollup_Function);
                        ElementIds.Element_Ids = Get_ElementId(tbl_bar_Fixed_Placement_chart.tblMetric.Source);
                        ElementIds.Target_Element_Ids = Get_ElementId(tbl_bar_Fixed_Placement_chart.tblMetric1.Source);
                        return ElementIds;
                    }

                case ChartType.Gauge:
                    tblChart_Gauge tbl_gauge_chart = _dbcontext.tblChart_Gauge.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_gauge_chart == null)
                    {
                        throw new ArgumentNullException("Gauge Chart not found please check the Gauge chart id");
                    }
                    else
                    {
                        ElementIds.Metric_Name = tbl_gauge_chart.tblMetric.Metric_Name;
                        ElementIds.Target_Metric_Name = tbl_gauge_chart.tblMetric1.Metric_Name;
                        ElementIds.Mertric_Unit = Unit_Of_Measurement_DTO_Convert.Convert_Table_To_DTO(tbl_gauge_chart.tblMetric.tblUnit);
                        ElementIds.Target_Mertric_Unit = Unit_Of_Measurement_DTO_Convert.Convert_Table_To_DTO(tbl_gauge_chart.tblMetric1.tblUnit);
                        ElementIds.Mertric_Rollup_Function = (Rollup_Function_Option)Enums.TryParse(typeof(Rollup_Function_Option), tbl_gauge_chart.tblMetric.Rollup_Function);
                        ElementIds.Mertric_Target_Rollup_Function = (Rollup_Function_Option)Enums.TryParse(typeof(Rollup_Function_Option), tbl_gauge_chart.tblMetric1.Rollup_Function);
                        ElementIds.Element_Ids = Get_ElementId(tbl_gauge_chart.tblMetric.Source);
                        ElementIds.Target_Element_Ids = Get_ElementId(tbl_gauge_chart.tblMetric1.Source);
                        return ElementIds;
                    }
                case ChartType.Counter:
                    tblChart_Counter tbl_counter_chart = _dbcontext.tblChart_Counter.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_counter_chart == null)
                    {
                        throw new ArgumentNullException("Counter Chart not found please check the Counter chart id");
                    }
                    else
                    {
                        ElementIds.Metric_Name = tbl_counter_chart.tblMetric.Metric_Name;
                        ElementIds.Mertric_Unit = Unit_Of_Measurement_DTO_Convert.Convert_Table_To_DTO(tbl_counter_chart.tblMetric.tblUnit);
                        ElementIds.Mertric_Rollup_Function = (Rollup_Function_Option)Enums.TryParse(typeof(Rollup_Function_Option), tbl_counter_chart.tblMetric.Rollup_Function);
                        ElementIds.Element_Ids = Get_ElementId(tbl_counter_chart.tblMetric.Source);                        
                        return ElementIds;
                    }
                case ChartType.TreeMap:
                    tblChart_TreeMap tbl_treemap_chart = _dbcontext.tblChart_TreeMap.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_treemap_chart == null)
                    {
                        throw new ArgumentNullException("Treemap Chart not found please check the Treemap chart id");
                    }
                    else
                    {
                        ElementIds.Metric_Name = tbl_treemap_chart.tblMetric.Metric_Name;
                        ElementIds.Target_Metric_Name = tbl_treemap_chart.tblMetric1.Metric_Name;
                        ElementIds.Mertric_Unit = Unit_Of_Measurement_DTO_Convert.Convert_Table_To_DTO(tbl_treemap_chart.tblMetric.tblUnit);
                        ElementIds.Target_Mertric_Unit = Unit_Of_Measurement_DTO_Convert.Convert_Table_To_DTO(tbl_treemap_chart.tblMetric1.tblUnit);
                        ElementIds.Mertric_Rollup_Function = (Rollup_Function_Option)Enums.TryParse(typeof(Rollup_Function_Option), tbl_treemap_chart.tblMetric.Rollup_Function);
                        ElementIds.Mertric_Target_Rollup_Function = (Rollup_Function_Option)Enums.TryParse(typeof(Rollup_Function_Option), tbl_treemap_chart.tblMetric1.Rollup_Function);
                        ElementIds.Element_Ids = Get_ElementId(tbl_treemap_chart.tblMetric.Source);
                        ElementIds.Target_Element_Ids = Get_ElementId(tbl_treemap_chart.tblMetric1.Source);
                        return ElementIds;
                    }
                case ChartType.HeatMap:
                    tblChart_Heatmap tbl_heatmap_chart = _dbcontext.tblChart_Heatmap.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_heatmap_chart == null)
                    {
                        throw new ArgumentNullException("Heatmap Chart not found please check the Heatmap chart id");
                    }
                    else
                    {
                        ElementIds.Metric_Name = tbl_heatmap_chart.tblMetric.Metric_Name;
                        ElementIds.Mertric_Unit = Unit_Of_Measurement_DTO_Convert.Convert_Table_To_DTO(tbl_heatmap_chart.tblMetric.tblUnit);
                        ElementIds.Mertric_Rollup_Function = (Rollup_Function_Option)Enums.TryParse(typeof(Rollup_Function_Option), tbl_heatmap_chart.tblMetric.Rollup_Function);
                        ElementIds.Element_Ids = Get_ElementId(tbl_heatmap_chart.tblMetric.Source);
                        return ElementIds;
                    }
                case ChartType.Pie:
                    tblChart_Pie tbl_pie_chart = _dbcontext.tblChart_Pie.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_pie_chart == null)
                    {
                        throw new ArgumentNullException("Pie Chart not found please check the Pie chart id");
                    }
                    else {
                        //ElementIds.Metric_Name = tbl_pie_chart.tblMetric.Metric_Name;
                        ElementIds.Element_Ids = Get_ElementId(tbl_pie_chart.tblChart_Metric);
                        return ElementIds;
                    }
                case ChartType.Donut:
                    tblChart_Donut tbl_Donut_chart = _dbcontext.tblChart_Donut.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_Donut_chart == null)
                    {
                        throw new ArgumentNullException("Donut Chart not found please check the Donut chart id");
                    }
                    else
                    {
                        //ElementIds.Metric_Name = tbl_bar_chart.tblMetric.Metric_Name;
                        ElementIds.Element_Ids = Get_ElementId(tbl_Donut_chart.tblChart_Metric);
                        return ElementIds;
                    }
                case ChartType.Stacked:
                    tblChart_Stacked tbl_stacked_chart = _dbcontext.tblChart_Stacked.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_stacked_chart == null)
                    {
                        throw new ArgumentNullException("Stacked Chart not found please check the Stacked chart id");
                    }
                    else
                    {
                        //ElementIds.Metric_Name = tbl_bar_chart.tblMetric.Metric_Name;
                        ElementIds.Element_Ids = Get_ElementId(tbl_stacked_chart.tblChart_Metric);
                        return ElementIds;
                    }
                case ChartType.Line:
                    tblChart_Line tbl_Line_chart = _dbcontext.tblChart_Line.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_Line_chart == null)
                    {
                        throw new ArgumentNullException("Line Chart not found please check the Line chart id");
                    }
                    else
                    {
                        //ElementIds.Metric_Name = tbl_bar_chart.tblMetric.Metric_Name;
                        ElementIds.Element_Ids = Get_ElementId(tbl_Line_chart.tblChart_Metric);
                        return ElementIds;
                    }
                default:
                    throw new Exception(string.Format(Resources.Invalid_Chart_Type + " {0}", _chart_type));

            }
        }


        /// <summary>
        /// This function only use for the traget metrics, if the chart control does not have the trarget metric donot use this method.
        /// Absolute not in use
        /// </summary>
        /// <param name="_chart_type"></param>
        /// <param name="_id"></param>
        /// <returns></returns>
        public IList<ElementDTO_WareHouse> Get_Target_Data_Points_By_Chart(ChartType _chart_type, int _id)
        {
            tblMetric tbl_Metric;
            switch (_chart_type)
            {
                case ChartType.Bar:
                    tblChart_Bar tbl_bar_chart = _dbcontext.tblChart_Bar.SingleOrDefault(chart => chart.Id == _id);
                    tbl_Metric = _dbcontext.tblMetrics.SingleOrDefault(metric => metric.Id == tbl_bar_chart.Target_Metric_Id);
                    return Get_ElementId(tbl_Metric.Source);
                case ChartType.BarFixedPlacement:
                    tblChart_Bar tbl_bar_Fixed_Placement_chart = _dbcontext.tblChart_Bar.SingleOrDefault(chart => chart.Id == _id);
                    tbl_Metric = _dbcontext.tblMetrics.SingleOrDefault(metric => metric.Id == tbl_bar_Fixed_Placement_chart.Target_Metric_Id);
                    return Get_ElementId(tbl_Metric.Source);
                case ChartType.Gauge:
                    tblChart_Gauge tbl_gauge_chart = _dbcontext.tblChart_Gauge.SingleOrDefault(chart => chart.Id == _id);
                    tbl_Metric = _dbcontext.tblMetrics.SingleOrDefault(metric => metric.Id == tbl_gauge_chart.Target_Matric_Id);
                    return Get_ElementId(tbl_Metric.Source);
                case ChartType.TreeMap:
                    throw new Exception("Treemap doesnot have targeted metric");
                case ChartType.HeatMap:
                    throw new Exception("HeatMap doesnot have targeted metric");
                case ChartType.Pie:
                    throw new Exception("Pie doesnot have targeted metric");
                case ChartType.Stacked:
                    throw new Exception("Stacked doesnot have targeted metric");
                case ChartType.Line:
                    throw new Exception("Line doesnot have targeted metric");
                case ChartType.Donut:
                    throw new Exception("Donut doesnot have targeted metric");
                case ChartType.Counter:
                    throw new Exception("Counter doesnot have targeted metric");
                default:
                    throw new Exception(string.Format(Resources.Invalid_Chart_Type + " {0}", _chart_type));

            }
        }


        /// <summary>
        /// This function is use for populate the time_line popup for every chart type
        /// </summary>
        /// <param name="_chart_type"></param>
        /// <param name="widget_id"></param>
        /// <returns></returns>
        public Chart_Common_Properties_DTO Get_Time_Line_By_Chart(ChartType _chart_type, int widget_id)
        {
            Chart_Common_Properties_DTO dto = new Chart_Common_Properties_DTO();
            switch (_chart_type)
            {
                case ChartType.Bar:
                    tblChart_Bar tbl_bar_chart = _dbcontext.tblChart_Bar.SingleOrDefault(chart => chart.Id == widget_id);
                    dto = Chart_Common_Properties_Convert.Convert_Anonymous_Object_To_DTO(tbl_bar_chart);
                    return dto;
                case ChartType.BarFixedPlacement:
                    tblChart_Bar tbl_bar_Fixed_Placement_chart = _dbcontext.tblChart_Bar.SingleOrDefault(chart => chart.Id == widget_id);
                    dto = Chart_Common_Properties_Convert.Convert_Anonymous_Object_To_DTO(tbl_bar_Fixed_Placement_chart);
                    return dto;
                case ChartType.Gauge:
                    tblChart_Gauge tbl_gauge_chart = _dbcontext.tblChart_Gauge.SingleOrDefault(chart => chart.Id == widget_id);
                    dto = Chart_Common_Properties_Convert.Convert_Anonymous_Object_To_DTO(tbl_gauge_chart);
                    return dto;
                case ChartType.TreeMap:
                    tblChart_TreeMap tbl_treemap_chart = _dbcontext.tblChart_TreeMap.SingleOrDefault(chart => chart.Id == widget_id);
                    dto = Chart_Common_Properties_Convert.Convert_Anonymous_Object_To_DTO(tbl_treemap_chart);
                    return dto;
                case ChartType.HeatMap:
                    tblChart_Heatmap tbl_heatmap_chart = _dbcontext.tblChart_Heatmap.SingleOrDefault(chart => chart.Id == widget_id);
                    dto = Chart_Common_Properties_Convert.Convert_Anonymous_Object_To_DTO(tbl_heatmap_chart);
                    return dto;
                case ChartType.Pie:
                    tblChart_Pie tbl_pie_chart = _dbcontext.tblChart_Pie.SingleOrDefault(chart => chart.Id == widget_id);
                    dto = Chart_Common_Properties_Convert.Convert_Anonymous_Object_To_DTO(tbl_pie_chart);
                    return dto;
                case ChartType.Stacked:
                    tblChart_Stacked tbl_stacked_chart = _dbcontext.tblChart_Stacked.SingleOrDefault(chart => chart.Id == widget_id);
                    dto = Chart_Common_Properties_Convert.Convert_Anonymous_Object_To_DTO(tbl_stacked_chart);
                    return dto;
                case ChartType.Line:
                    tblChart_Line tbl_Line_chart = _dbcontext.tblChart_Line.SingleOrDefault(chart => chart.Id == widget_id);
                    dto = Chart_Common_Properties_Convert.Convert_Anonymous_Object_To_DTO(tbl_Line_chart);
                    return dto;
                case ChartType.Donut:
                    tblChart_Donut tbl_donut_chart = _dbcontext.tblChart_Donut.SingleOrDefault(chart => chart.Id == widget_id);
                    dto = Chart_Common_Properties_Convert.Convert_Anonymous_Object_To_DTO(tbl_donut_chart);
                    return dto;
                case ChartType.Counter:
                    tblChart_Counter tbl_counter_chart = _dbcontext.tblChart_Counter.SingleOrDefault(chart => chart.Id == widget_id);
                    dto = Chart_Common_Properties_Convert.Convert_Anonymous_Object_To_DTO(tbl_counter_chart);
                    return dto;
                default:
                    throw new Exception(string.Format(Resources.Invalid_Chart_Type + " {0}", _chart_type));
            }
        }

        /// <summary>
        /// this function only updates the Chart common properties which is time_line
        /// </summary>
        /// <param name="widget_id"></param>
        /// <param name="chart_common_propreties"></param>
        /// <param name="chart_type"></param>
        public void Update_Chart_Common_Properties(int widget_id, Chart_Common_Properties_DTO chart_common_propreties, ChartType _chart_type)
        {


            switch (_chart_type)
            {
                case ChartType.Bar:
                    tblChart_Bar tbl_bar_chart = _dbcontext.tblChart_Bar.SingleOrDefault(chart => chart.Id == widget_id);
                    tbl_bar_chart.Time_Line = chart_common_propreties.Time_Line.ToString();
                    tbl_bar_chart.From_Date = chart_common_propreties.From_Date;
                    tbl_bar_chart.To_Date = chart_common_propreties.To_Date;
                    break;
                case ChartType.BarFixedPlacement:
                    tblChart_Bar tbl_bar_Fixed_Placement_chart = _dbcontext.tblChart_Bar.SingleOrDefault(chart => chart.Id == widget_id);
                    tbl_bar_Fixed_Placement_chart.Time_Line = chart_common_propreties.Time_Line.ToString();
                    tbl_bar_Fixed_Placement_chart.From_Date = chart_common_propreties.From_Date;
                    tbl_bar_Fixed_Placement_chart.To_Date = chart_common_propreties.To_Date;
                    break;
                case ChartType.Gauge:
                    tblChart_Gauge tbl_gauge_chart = _dbcontext.tblChart_Gauge.SingleOrDefault(chart => chart.Id == widget_id);
                    tbl_gauge_chart.Time_Line = chart_common_propreties.Time_Line.ToString();
                    tbl_gauge_chart.From_Date = chart_common_propreties.From_Date;
                    tbl_gauge_chart.To_Date = chart_common_propreties.To_Date;
                    break;
                case ChartType.TreeMap:
                    tblChart_TreeMap tbl_treemap_chart = _dbcontext.tblChart_TreeMap.SingleOrDefault(chart => chart.Id == widget_id);
                    tbl_treemap_chart.Time_Line = chart_common_propreties.Time_Line.ToString();
                    tbl_treemap_chart.From_Date = chart_common_propreties.From_Date;
                    tbl_treemap_chart.To_Date = chart_common_propreties.To_Date;
                    break;
                case ChartType.HeatMap:
                    tblChart_Heatmap tbl_heatmap_chart = _dbcontext.tblChart_Heatmap.SingleOrDefault(chart => chart.Id == widget_id);
                    tbl_heatmap_chart.Time_Line = chart_common_propreties.Time_Line.ToString();
                    tbl_heatmap_chart.From_Date = chart_common_propreties.From_Date;
                    tbl_heatmap_chart.To_Date = chart_common_propreties.To_Date;
                    break;
                case ChartType.Pie:
                    tblChart_Pie tbl_pie_chart = _dbcontext.tblChart_Pie.SingleOrDefault(chart => chart.Id == widget_id);
                    tbl_pie_chart.Time_Line = chart_common_propreties.Time_Line.ToString();
                    tbl_pie_chart.From_Date = chart_common_propreties.From_Date;
                    tbl_pie_chart.To_Date = chart_common_propreties.To_Date;
                    break;
                case ChartType.Stacked:
                    tblChart_Stacked tbl_stacked_chart = _dbcontext.tblChart_Stacked.SingleOrDefault(chart => chart.Id == widget_id);
                    tbl_stacked_chart.Time_Line = chart_common_propreties.Time_Line.ToString();
                    tbl_stacked_chart.From_Date = chart_common_propreties.From_Date;
                    tbl_stacked_chart.To_Date = chart_common_propreties.To_Date;
                    break;
                case ChartType.Line:
                    tblChart_Line tbl_Line_chart = _dbcontext.tblChart_Line.SingleOrDefault(chart => chart.Id == widget_id);
                    tbl_Line_chart.Time_Line = chart_common_propreties.Time_Line.ToString();
                    tbl_Line_chart.From_Date = chart_common_propreties.From_Date;
                    tbl_Line_chart.To_Date = chart_common_propreties.To_Date;
                    break;
                case ChartType.Donut:
                    tblChart_Donut tbl_donut_chart = _dbcontext.tblChart_Donut.SingleOrDefault(chart => chart.Id == widget_id);
                    tbl_donut_chart.Time_Line = chart_common_propreties.Time_Line.ToString();
                    tbl_donut_chart.From_Date = chart_common_propreties.From_Date;
                    tbl_donut_chart.To_Date = chart_common_propreties.To_Date;
                    break;
                case ChartType.Counter:
                    tblChart_Counter tbl_counter_chart = _dbcontext.tblChart_Counter.SingleOrDefault(chart => chart.Id == widget_id);
                    tbl_counter_chart.Time_Line = chart_common_propreties.Time_Line.ToString();
                    tbl_counter_chart.From_Date = chart_common_propreties.From_Date;
                    tbl_counter_chart.To_Date = chart_common_propreties.To_Date;
                    break;
                default:
                    throw new Exception(string.Format(Resources.Invalid_Chart_Type + " {0}", _chart_type));
            }
            _dbcontext.SaveChanges();
        }

        /// <summary>
        /// Return elements id which has the data
        /// </summary>
        /// <param name="_id">Metric_Id</param>
        /// <returns></returns>
        public Aggregate_Metric_Elements Get_Data_Points_By_Metric(tblMetric metric)
        {
            Aggregate_Metric_Elements Metric_ElementIds = new Aggregate_Metric_Elements();
            try
            {
                Metric_ElementIds.Metric_Id = metric.Id;
                Metric_ElementIds.Metric_Name = metric.Metric_Name;
                Metric_ElementIds.Mertric_Unit = Unit_Of_Measurement_DTO_Convert.Convert_Table_To_DTO(metric.tblUnit);
                Metric_ElementIds.Mertric_Rollup_Function = (Rollup_Function_Option)Enums.TryParse(typeof(Rollup_Function_Option), metric.Rollup_Function);
                Metric_ElementIds.Elements.Element_Ids = Get_ElementId(metric.Source);
            }
            catch(Exception ex) 
            {   
            
            }            
            return Metric_ElementIds;
        }


        /// <summary>
        /// this function is for single metric source
        /// </summary>
        /// <param name="source_json"></param>
        /// <returns></returns>
        private IList<ElementDTO_WareHouse> Get_ElementId(string source_json)
        {
            Source_Json _tag_points = Source_Json.Convert_Json_To_Source_Json(source_json);
            IList<ElementDTO_WareHouse> Elements = new List<ElementDTO_WareHouse>();
            List<long> Point_ID = new List<long>();
            if (_tag_points.Tags != null)
            {
                //Due to non primative values
                var tagIds = _tag_points.Tags.Select(z => z.TagID).ToArray();
                InnonAnalyticsEngineEntities _db = new InnonAnalyticsEngineEntities();
                string tag_ids = InnonAnalytics.Common.Helper.ConvertIEnumerableToString(tagIds, ",");

                try
                {
                    Point_ID = _db.Database.SqlQuery<long>("GetElementIDsByTagIDs @csvTagIDs", new System.Data.SqlClient.SqlParameter("csvTagIDs", tag_ids)).ToList();

                }
                catch (Exception ex)
                {
                }
            }

            Point_ID.AddRange(_tag_points.Points.Select(z => z.ElementId));
            Elements = _elementRep.GetElementsDTOWareHouse(Point_ID);
            return Elements;
        }

        private IList<ElementDTO_WareHouse> Get_ElementId(IEnumerable<tblChart_Metric> tblChart_Metrics)
        {
           
            List<ElementDTO_WareHouse> Elements = new List<ElementDTO_WareHouse>();           
            foreach (tblChart_Metric tblChart_Metric in tblChart_Metrics)
            {
              Elements.AddRange(Get_ElementId(tblChart_Metric.tblMetric.Source));              
            }
            return Elements;
        }

        public Dashboard_Widget_VM_DTO Get_Chart_By_Chart_ID(ChartType _chart_type, int _id)
        {           

            Dashboard_Widget_VM_DTO _dto = new Dashboard_Widget_VM_DTO(_chart_type);
            switch (_chart_type)
            {
                case ChartType.Bar:
                    tblChart_Bar bar_chart = _dbcontext.tblChart_Bar.Find(_id);
                    if (bar_chart == null) throw new ArgumentNullException("Invalid BarChart Id " + _id);
                    _dto = Dashboard_Widget_VM_DTO_Convert.Dashboard_Widget_DTO_Convert_Table_To_DTO(bar_chart.tblDashboard_Widget);
                    break;
                case ChartType.BarFixedPlacement:
                    tblChart_Bar fixed_placment_chart = _dbcontext.tblChart_Bar.Find(_id);
                    if (fixed_placment_chart == null) throw new ArgumentNullException("Invalid Fixed Placement Chart Id " + _id);
                    _dto = Dashboard_Widget_VM_DTO_Convert.Dashboard_Widget_DTO_Convert_Table_To_DTO(fixed_placment_chart.tblDashboard_Widget);
                    break;
                case ChartType.Gauge:
                    tblChart_Gauge gauge_chart = _dbcontext.tblChart_Gauge.Find(_id);
                    if (gauge_chart == null) throw new ArgumentNullException("Invalid Gauge Chart Id " + _id);
                    _dto = Dashboard_Widget_VM_DTO_Convert.Dashboard_Widget_DTO_Convert_Table_To_DTO(gauge_chart.tblDashboard_Widget);
                    break;
                case ChartType.HeatMap:
                   tblChart_Heatmap heatmap_chart = _dbcontext.tblChart_Heatmap.Find(_id);
                   if (heatmap_chart == null) throw new ArgumentNullException("Invalid HeatMap Id " + _id);
                   _dto = Dashboard_Widget_VM_DTO_Convert.Dashboard_Widget_DTO_Convert_Table_To_DTO(heatmap_chart.tblDashboard_Widget);
                    break;
                case ChartType.TreeMap:
                   tblChart_TreeMap treemap_chart = _dbcontext.tblChart_TreeMap.Find(_id);
                   if (treemap_chart == null) throw new ArgumentNullException("Invalid TreeMap Id " + _id);
                   _dto = Dashboard_Widget_VM_DTO_Convert.Dashboard_Widget_DTO_Convert_Table_To_DTO(treemap_chart.tblDashboard_Widget);
                    break;
                case ChartType.Pie:
                   tblChart_Pie pie_chart = _dbcontext.tblChart_Pie.Find(_id);
                   if (pie_chart == null) throw new ArgumentNullException("Invalid PieChart Id " + _id);
                   _dto = Dashboard_Widget_VM_DTO_Convert.Dashboard_Widget_DTO_Convert_Table_To_DTO(pie_chart.tblDashboard_Widget);
                    break;
                case ChartType.Stacked:
                    tblChart_Stacked stacked_chart = _dbcontext.tblChart_Stacked.Find(_id);
                    if (stacked_chart == null) throw new ArgumentNullException("Invalid Stacked Chart Id " + _id);
                    _dto = Dashboard_Widget_VM_DTO_Convert.Dashboard_Widget_DTO_Convert_Table_To_DTO(stacked_chart.tblDashboard_Widget);
                    break;
                case ChartType.Line:
                    tblChart_Line Line_chart = _dbcontext.tblChart_Line.Find(_id);
                    if (Line_chart == null) throw new ArgumentNullException("Invalid Line Chart Id " + _id);
                    _dto = Dashboard_Widget_VM_DTO_Convert.Dashboard_Widget_DTO_Convert_Table_To_DTO(Line_chart.tblDashboard_Widget);
                    break;
                case ChartType.Donut:
                     tblChart_Donut donut_chart = _dbcontext.tblChart_Donut.Find(_id);
                     if (donut_chart == null) throw new ArgumentNullException("Invalid DonutChart Id " + _id);
                     _dto = Dashboard_Widget_VM_DTO_Convert.Dashboard_Widget_DTO_Convert_Table_To_DTO(donut_chart.tblDashboard_Widget);
                    break;
                case ChartType.Counter:
                    tblChart_Counter counter_chart = _dbcontext.tblChart_Counter.Find(_id);
                    if (counter_chart == null) throw new ArgumentNullException("Invalid CounterChart Id " + _id);
                    _dto = Dashboard_Widget_VM_DTO_Convert.Dashboard_Widget_DTO_Convert_Table_To_DTO(counter_chart.tblDashboard_Widget);
                    break;
                default:
                    throw new Exception(string.Format(Resources.Invalid_Chart_Type + " {0}", _chart_type));
            }

            return _dto;
        }

        /// <summary>
        /// this method is for to get Group by from the chart tables, Two kind of Group by one is AggerationType Group by (Hour, min, year etc), sec is TagType(Department, consumer etc)
        /// </summary>
        /// <param name="_chart_type"></param>
        /// <param name="_id"></param>
        /// <returns></returns>
        public Combine_Enum_Tag_Aggregation Get_Group_By(ChartType _chart_type, int _id)
        {

            Combine_Enum_Tag_Aggregation _group_by = new Combine_Enum_Tag_Aggregation();
            TagType tagtype_group_by;
            AggerationType aggregationtype_group_by;

            switch (_chart_type)
            {
                case ChartType.Bar:
                    tblChart_Bar tbl_bar_chart = _dbcontext.tblChart_Bar.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_bar_chart == null)
                    {
                        throw new ArgumentNullException("Bar Chart not found please check the Bar chart id");
                    }
                    else
                    {
                        if (Enum.TryParse(tbl_bar_chart.Group_By, out tagtype_group_by))
                        { _group_by.Tage_Type = tagtype_group_by; return _group_by; }
                        else if (Enum.TryParse(tbl_bar_chart.Group_By, out aggregationtype_group_by))
                        { _group_by.Aggregation_Type = aggregationtype_group_by; return _group_by; }
                        else
                            return _group_by;
                    }
                case ChartType.BarFixedPlacement:
                    tblChart_Bar tbl_bar_Fixed_chart = _dbcontext.tblChart_Bar.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_bar_Fixed_chart == null)
                    {
                        throw new ArgumentNullException("Bar Chart not found please check the Bar chart id");
                    }
                    else
                    {
                        if (Enum.TryParse(tbl_bar_Fixed_chart.Group_By, out tagtype_group_by))
                         { _group_by.Tage_Type = tagtype_group_by; return _group_by; }
                        else if (Enum.TryParse(tbl_bar_Fixed_chart.Group_By, out aggregationtype_group_by))
                        { _group_by.Aggregation_Type = aggregationtype_group_by; return _group_by; }
                        else
                            return _group_by;
                    }

                case ChartType.Gauge:
                    throw new Exception(string.Format("Gauge Control does have group by.  {0}", _chart_type));
                case ChartType.Counter:
                    throw new Exception(string.Format("Counter Control does have group by.  {0}", _chart_type));
                case ChartType.Donut:
                    throw new Exception(string.Format("Donut Control does have group by.  {0}", _chart_type));
                case ChartType.TreeMap:
                    tblChart_TreeMap tbl_treemap_chart = _dbcontext.tblChart_TreeMap.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_treemap_chart == null)
                    {
                        throw new ArgumentNullException("Treemap Chart not found please check the Treemap chart id");
                    }
                    else
                    {
                        if (Enum.TryParse(tbl_treemap_chart.Group_By, out tagtype_group_by))
                        { _group_by.Tage_Type = tagtype_group_by; return _group_by; }
                        else if (Enum.TryParse(tbl_treemap_chart.Group_By, out aggregationtype_group_by))
                        { _group_by.Aggregation_Type = aggregationtype_group_by; return _group_by; }
                        else
                            return _group_by;
                    }
                case ChartType.Pie:
                    tblChart_Pie tbl_pie_chart = _dbcontext.tblChart_Pie.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_pie_chart == null)
                    {
                        throw new ArgumentNullException("Pie Chart not found please check the Pie chart id");
                    }
                    else
                    {
                        if (Enum.TryParse(tbl_pie_chart.Group_By, out tagtype_group_by))
                        { _group_by.Tage_Type = tagtype_group_by; return _group_by; }
                        else if (Enum.TryParse(tbl_pie_chart.Group_By, out aggregationtype_group_by))
                        { _group_by.Aggregation_Type = aggregationtype_group_by; return _group_by; }
                        else
                            return _group_by;
                    }
                case ChartType.Stacked:
                    tblChart_Stacked tbl_stacked_chart = _dbcontext.tblChart_Stacked.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_stacked_chart == null)
                    {
                        throw new ArgumentNullException("stacked Chart not found please check the stakced chart id");
                    }
                    else
                    {
                        if (Enum.TryParse(tbl_stacked_chart.Group_By, out tagtype_group_by))
                        { _group_by.Tage_Type = tagtype_group_by; return _group_by; }
                        else if (Enum.TryParse(tbl_stacked_chart.Group_By, out aggregationtype_group_by))
                        { _group_by.Aggregation_Type = aggregationtype_group_by; return _group_by; }
                        else
                            return _group_by;
                    }
                case ChartType.Line:
                    tblChart_Line tbl_Line_chart = _dbcontext.tblChart_Line.SingleOrDefault(chart => chart.Id == _id);
                    if (tbl_Line_chart == null)
                    {
                        throw new ArgumentNullException("Line Chart not found please check the stakced chart id");
                    }
                    else
                    {
                        if (Enum.TryParse(tbl_Line_chart.Group_By, out tagtype_group_by))
                        { _group_by.Tage_Type = tagtype_group_by; return _group_by; }
                        else if (Enum.TryParse(tbl_Line_chart.Group_By, out aggregationtype_group_by))
                        { _group_by.Aggregation_Type = aggregationtype_group_by; return _group_by; }
                        else
                            return _group_by;
                    }
                case ChartType.HeatMap:
                    throw new Exception(string.Format("Heatmap Control does have group by.  {0}", _chart_type));
                default:
                    throw new Exception(string.Format("Does not have group by or " + Resources.Invalid_Chart_Type + " {0}", _chart_type));

            }
        }

        public void Remove_Chart(ChartType _chart_type, int _id)
        {
            try
            {
                long widget_id = 0;
                switch (_chart_type)
                {
                    case ChartType.Bar:
                        tblChart_Bar tbl_bar_chart = _dbcontext.tblChart_Bar.Single(chart => chart.Id == _id);
                        tbl_bar_chart.Is_Deleted = true;
                        widget_id = tbl_bar_chart.DashboardWidget_Id;
                        break;
                    case ChartType.BarFixedPlacement:
                        tblChart_Bar tbl_bar_Fixed_Placement_chart = _dbcontext.tblChart_Bar.Single(chart => chart.Id == _id);
                        tbl_bar_Fixed_Placement_chart.Is_Deleted = true;
                        widget_id = tbl_bar_Fixed_Placement_chart.DashboardWidget_Id;
                        break;
                    case ChartType.Gauge:
                        tblChart_Gauge tbl_gauge_chart = _dbcontext.tblChart_Gauge.Single(chart => chart.Id == _id);
                        tbl_gauge_chart.Is_Deleted = true;
                        widget_id = tbl_gauge_chart.DashboardWidget_Id;
                        break;
                    case ChartType.TreeMap:
                        tblChart_TreeMap tbl_Treemap_chart = _dbcontext.tblChart_TreeMap.Single(chart => chart.Id == _id);
                        tbl_Treemap_chart.Is_Deleted = true;
                        widget_id = tbl_Treemap_chart.DashboardWidget_Id;
                        break;
                    case ChartType.HeatMap:
                        tblChart_Heatmap tbl_heatmap_chart = _dbcontext.tblChart_Heatmap.Single(chart => chart.Id == _id);
                        tbl_heatmap_chart.Is_Deleted = true;
                        widget_id = tbl_heatmap_chart.DashboardWidget_Id;
                        break;
                    case ChartType.Pie:
                        tblChart_Pie tbl_pie_chart = _dbcontext.tblChart_Pie.Single(chart => chart.Id == _id);
                        tbl_pie_chart.Is_Deleted = true;
                        widget_id = tbl_pie_chart.DashboardWidget_Id;
                        break;
                    case ChartType.Stacked:
                        tblChart_Stacked tbl_stacked_chart = _dbcontext.tblChart_Stacked.Single(chart => chart.Id == _id);
                        tbl_stacked_chart.Is_Deleted = true;
                        widget_id = tbl_stacked_chart.DashboardWidget_Id;
                        break;
                    case ChartType.Line:
                        tblChart_Line tbl_Line_chart = _dbcontext.tblChart_Line.Single(chart => chart.Id == _id);
                        tbl_Line_chart.Is_Deleted = true;
                        widget_id = tbl_Line_chart.DashboardWidget_Id;
                        break;
                    case ChartType.Donut:
                        tblChart_Donut tbl_donut_chart = _dbcontext.tblChart_Donut.Single(chart => chart.Id == _id);
                        tbl_donut_chart.Is_Deleted = true;
                        widget_id = tbl_donut_chart.DashboardWidget_Id;
                        break;
                    case ChartType.Counter:
                        tblChart_Counter tbl_counter_chart = _dbcontext.tblChart_Counter.Single(chart => chart.Id == _id);
                        tbl_counter_chart.Is_Deleted = true;
                        widget_id = tbl_counter_chart.DashboardWidget_Id;
                        break;
                    default:
                        throw new Exception(string.Format(Resources.Invalid_Chart_Type + " {0}", _chart_type));
                }
                _dbcontext.SaveChanges();
                _dashboardRep.Remove_Widget_From_Dashboard_When_All_Chart_Set_Is_Deleted(widget_id, _chart_type);



            }
            catch (ArgumentNullException aex)
            {
                throw aex;
            }
            catch(Exception ex)
            {
                throw ex;
            }
        }


        public ChartBarDTO Get_Bar_Chart(int chart_id)
        {
            tblChart_Bar bar_chart = _dbcontext.tblChart_Bar.Find(chart_id);
            return  ChartBarDTO_Convert.ChartBarDTO_Convert_Table_To_DTO(bar_chart);
        }

        public ChartGaugeDTO Get_Gauge_Chart(int chart_id)
        {
            tblChart_Gauge gauge_chart = _dbcontext.tblChart_Gauge.Find(chart_id);
            return ChartGaugeDTO_Convert.ChartGaugeDTO_Convert_Table_To_DTO(gauge_chart);
        }

        public ChartTreeMapDTO Get_TreeMap_Chart(int chart_id)
        {
            tblChart_TreeMap treemap_chart = _dbcontext.tblChart_TreeMap.Find(chart_id);
            return ChartTreeMapDTO_Convert.ChartTreeMapDTO_Convert_Table_To_DTO(treemap_chart);
        }

        public ChartHeatMapDTO Get_HeatMap_Chart(int chart_id)
        {
            tblChart_Heatmap heatmap_chart = _dbcontext.tblChart_Heatmap.Find(chart_id);
            return ChartHeatMapDTO_Convert.ChartHeatMapDTO_Convert_Table_To_DTO(heatmap_chart);
        }

        public ChartPieDTO Get_Pie_Chart(int chart_id)
        {
            tblChart_Pie pie_chart = _dbcontext.tblChart_Pie.Find(chart_id);
            return ChartPieDTO_Convert.ChartPieDTO_Convert_Table_DTO(pie_chart);
        }

        public ChartStackedDTO Get_Stacked_Chart(int chart_id)
        {
            tblChart_Stacked stacked_chart = _dbcontext.tblChart_Stacked.Find(chart_id);
            return ChartStackedDTO_Convert.ChartStackedDTO_Convert_Table_DTO(stacked_chart);
        }

        public ChartLineDTO Get_Line_Chart(int chart_id)
        {
            tblChart_Line Line_chart = _dbcontext.tblChart_Line.Find(chart_id);
            return ChartLineDTO_Convert.ChartLineDTO_Convert_Table_DTO(Line_chart);
        }

        public ChartDonutDTO Get_Donut_Chart(int chart_id)
        {
            tblChart_Donut Donut_chart = _dbcontext.tblChart_Donut.Find(chart_id);
            return ChartDonutDTO_Convert.ChartDonutDTO_Convert_Table_DTO(Donut_chart);
        }

        public ChartCounterDTO Get_Counter_Chart(int chart_id)
        {
            tblChart_Counter Counter_chart = _dbcontext.tblChart_Counter.Find(chart_id);
            return ChartCounter_Converter.Convert_Table_To_DTO(Counter_chart);
        }

        /// <summary>
        /// this function is used foe the energy generation diagram
        /// </summary>
        public IList<tblMetric> Get_Diagram_Metric()
        {
            List<int> metric_ids = new List<int>() { 6213, 6214, 6215, 6216, 6217, 6218, 6219, 6220, 6221, 6222, 6224, 6225, 6227, 6228, 6229, 6239, 6240, 6242, 6243, 6244, 6246 };
            IList<tblMetric> tbl_Metrics = _dbcontext.tblMetrics.Where(metric => metric_ids.Contains(metric.Id)).ToList();
            return tbl_Metrics;
        }

    }


    /// <summary>
    /// Two kind of Group by 1. TagType, 2. AggregateType
    /// </summary>
    public class Combine_Enum_Tag_Aggregation
    {
        public TagType Tage_Type { get; set; }
        public AggerationType Aggregation_Type { get; set; }

    }

    #region Radial_Gauge

    /// <summary>
    /// http://demos.telerik.com/aspnet-mvc/radial-gauge/index
    /// </summary>
    public class Radial_Gauge_DTO
    {
        private const int _StartAngle = -30;
        private const int _EndAngle = 240;
        private const int _MinorUnit = 5;

        public double PointerValue { get; set; }
        
        public double Value { get; set; }
        public double Target_Value { get; set; }

        public double Label { get; set; }

        public double Label_Target { get; set; }

        public double Label_Value { get; set; }

        public string Unit { get; set; }

        public double Min { get; set; }
        public double Max { get; set; }
        public double MinorUnit { get; set; }
        public int StartAngle { get; set; }
        public int EndAngle { get; set; }
    }

    public class Radial_Gauge 
    {
        //public Radial_Gauge_DTO GetChart(DashboardWidgetDTO dto_dashboard_widget)
        //{



        //    return null;
        //}
    }

    #endregion Radial_Gauge
}
