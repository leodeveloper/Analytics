using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class ChartMetricDTO
    {
        public int Id { get; set; }
        public int? Pie_Chart_Id { get; set; }
        public int? Stacked_Chart_Id { get; set; }

        public int? Line_Chart_Id { get; set; }

        public int Metric_Id { get; set;}
    }

    public class ChartMetricDTO_Convert
    {
        public static IList<tblChart_Metric> ChartMetricDTO_Convert_List_DTO_To_Table(ICollection<ChartMetricDTO> chart_metric_dtos)
        {
            IList<tblChart_Metric> tbl_chart_metrics = new List<tblChart_Metric>();
            foreach (ChartMetricDTO chart_metric_dto in chart_metric_dtos)
            {
                tbl_chart_metrics.Add(ChartMetricDTO_Convert.ChartMetricDTO_Convert_DTO_To_Table(chart_metric_dto));
            }
            return tbl_chart_metrics;
        }


        public static IList<tblChart_Metric> ChartMetricDTO_Convert_List_DTO_To_Table(ICollection<Chart_Id_Metric_Ids> Chart_Id_Metric_Ids, int chart_id, ChartType _chart_type)
        {
            IList<tblChart_Metric> tbl_chart_metrics = new List<tblChart_Metric>();
            foreach (Chart_Id_Metric_Ids chart_metric_id in Chart_Id_Metric_Ids)
            {

                switch(_chart_type)
                {
                    case ChartType.Pie:
                        tbl_chart_metrics.Add(new tblChart_Metric() { Id = chart_metric_id.Chart_Metric_Id, Metric_Id = chart_metric_id.Metric_Id, Pie_Chart_Id = chart_id });
                        break;
                    case ChartType.Stacked:
                        tbl_chart_metrics.Add(new tblChart_Metric() { Id = chart_metric_id.Chart_Metric_Id, Metric_Id = chart_metric_id.Metric_Id, Stacked_Chart_Id = chart_id });
                        break;
                    case ChartType.Donut:
                        tbl_chart_metrics.Add(new tblChart_Metric() { Id = chart_metric_id.Chart_Metric_Id, Metric_Id = chart_metric_id.Metric_Id, Donut_Chart_Id = chart_id });
                        break;
                    case ChartType.Line:
                        tbl_chart_metrics.Add(new tblChart_Metric() { Id = chart_metric_id.Chart_Metric_Id, Metric_Id = chart_metric_id.Metric_Id, Line_Chart_Id = chart_id });
                        break;
                    default:
                        throw new Exception(string.Format(Resources.Invalid_Chart_Type + " {0}", _chart_type));
                }

                
            }
            return tbl_chart_metrics;
        }


        

        public static tblChart_Metric ChartMetricDTO_Convert_DTO_To_Table(ChartMetricDTO chart_metric_dto)
        {
            tblChart_Metric tbl_chart_metric = new tblChart_Metric();
            tbl_chart_metric.Id = chart_metric_dto.Id;
            tbl_chart_metric.Metric_Id = chart_metric_dto.Metric_Id;
            tbl_chart_metric.Pie_Chart_Id = chart_metric_dto.Pie_Chart_Id;
            tbl_chart_metric.Stacked_Chart_Id = chart_metric_dto.Stacked_Chart_Id;
            tbl_chart_metric.Line_Chart_Id = chart_metric_dto.Line_Chart_Id;

            return tbl_chart_metric;
        }

        public static IList<ChartMetricDTO> ChartMetricDTO_Convert_List_Table_To_DTO(ICollection<tblChart_Metric> tbl_chart_metrics)
        {
            IList<ChartMetricDTO> chart_metric_dtos = new List<ChartMetricDTO>();
            foreach (tblChart_Metric tbl_chart_metric in tbl_chart_metrics)
            {
                chart_metric_dtos.Add(ChartMetricDTO_Convert.ChartMetricDTO_Convert_Table_To_DTO(tbl_chart_metric));
            }
            return chart_metric_dtos;
        }

        public static int[] ChartMetricDTO_Convert_List_Table_To_Array(ICollection<tblChart_Metric> tbl_chart_metrics)
        {
            IEnumerable<int> _metric_ids = tbl_chart_metrics.Select(metric_ids => metric_ids.Metric_Id);
            return _metric_ids.ToArray();
        }

        public static ChartMetricDTO ChartMetricDTO_Convert_Table_To_DTO(tblChart_Metric tbl_chart_metric)
        {
            ChartMetricDTO chart_metric_dto = new ChartMetricDTO();
            chart_metric_dto.Id = tbl_chart_metric.Id;
            chart_metric_dto.Metric_Id = tbl_chart_metric.Metric_Id;
            chart_metric_dto.Pie_Chart_Id = tbl_chart_metric.Pie_Chart_Id;
            chart_metric_dto.Stacked_Chart_Id = tbl_chart_metric.Stacked_Chart_Id;
            chart_metric_dto.Line_Chart_Id = tbl_chart_metric.Line_Chart_Id;
            return chart_metric_dto;

        }
    }
}
