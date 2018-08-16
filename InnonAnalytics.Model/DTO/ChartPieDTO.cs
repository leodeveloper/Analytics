using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class ChartPieDTO
    {
        public ChartPieDTO()
        {
            this.Chart_Metric = new HashSet<MetricDTO>();
            this.Chart_Id_Metric_Ids = new HashSet<Chart_Id_Metric_Ids>();
            this.Chart_Common_Property_DTO = new Chart_Common_Properties_DTO();
        }

        public int Id { get; set; }

        public ICollection<MetricDTO> Chart_Metric { get; set; }

        public int[] Chart_Metric_Ids { get; set; }

        public string MetricIds { get; set; }

        public ICollection<Chart_Id_Metric_Ids> Chart_Id_Metric_Ids { get; set; }

        public string Chart_Title { get; set; }

        public string Group_By { get; set; }
        public int Dashboard_Widget_Id { get; set; }
        public Chart_Common_Properties_DTO Chart_Common_Property_DTO { get; set; }
    }

    public class ChartPieDTO_Convert
    {
        public static ChartPieDTO ChartPieDTO_Convert_Table_DTO(tblChart_Pie tbl_Chart_Pie)
        {
            ChartPieDTO chart_pie_dto = new ChartPieDTO();
            chart_pie_dto.Id = tbl_Chart_Pie.Id;
            chart_pie_dto.Group_By = tbl_Chart_Pie.Group_By;
            chart_pie_dto.Dashboard_Widget_Id = tbl_Chart_Pie.DashboardWidget_Id;
            chart_pie_dto.Chart_Title = tbl_Chart_Pie.Chart_Title;
            chart_pie_dto.Chart_Metric_Ids = ChartMetricDTO_Convert.ChartMetricDTO_Convert_List_Table_To_Array(tbl_Chart_Pie.tblChart_Metric);
            //chart_pie_dto.Chart_Metric = ChartMetricDTO_Convert.ChartMetricDTO_Convert_List_Table_To_DTO(tbl_Chart_Pie.tblChart_Metric);
            chart_pie_dto.Dashboard_Widget_Id = tbl_Chart_Pie.DashboardWidget_Id;

            chart_pie_dto.Chart_Common_Property_DTO.From_Date = tbl_Chart_Pie.From_Date;
            if (tbl_Chart_Pie.Time_Line != null)
                chart_pie_dto.Chart_Common_Property_DTO.Time_Line = (TimeLine)Enums.TryParse(typeof(TimeLine), tbl_Chart_Pie.Time_Line);
            chart_pie_dto.Chart_Common_Property_DTO.To_Date = tbl_Chart_Pie.To_Date;
            chart_pie_dto.Chart_Common_Property_DTO.Precision = tbl_Chart_Pie.Precision;
            return chart_pie_dto;

        }

        public static IList<ChartPieDTO> ChartPieDTO_Convert_Table_DTO(ICollection<tblChart_Pie> tbl_chart_pies)
        {
            IList<ChartPieDTO> chart_pie_dtos = new List<ChartPieDTO>();
            foreach (tblChart_Pie tbl_chart_pie in tbl_chart_pies)
            {
                chart_pie_dtos.Add(ChartPieDTO_Convert_Table_DTO(tbl_chart_pie));
            }
            return chart_pie_dtos;
        }

        public static IList<tblChart_Pie> ChartPieDTO_Convert_DTO_Table(ICollection<ChartPieDTO> chart_pie_dtos)
        {
            IList<tblChart_Pie> tbl_chart_pie = new List<tblChart_Pie>();
            foreach (ChartPieDTO chart_pie_dto in chart_pie_dtos)
            {
                tbl_chart_pie.Add(ChartPieDTO_Convert_DTO_Table(chart_pie_dto));
            }
            return tbl_chart_pie;
        }

        public static tblChart_Pie ChartPieDTO_Convert_DTO_Table(ChartPieDTO chart_pie_dto)
        {
            tblChart_Pie tbl_chart_pie = new tblChart_Pie();
            tbl_chart_pie.Id = chart_pie_dto.Id;
            tbl_chart_pie.Group_By = chart_pie_dto.Group_By;
            tbl_chart_pie.DashboardWidget_Id = chart_pie_dto.Dashboard_Widget_Id;
            tbl_chart_pie.Chart_Title = chart_pie_dto.Chart_Title;

            tbl_chart_pie.tblChart_Metric = ChartMetricDTO_Convert.ChartMetricDTO_Convert_List_DTO_To_Table(chart_pie_dto.Chart_Id_Metric_Ids, chart_pie_dto.Id, Common.Enums.ChartType.Pie);
            tbl_chart_pie.From_Date = chart_pie_dto.Chart_Common_Property_DTO.From_Date;
            if (chart_pie_dto.Chart_Common_Property_DTO.Time_Line != null)
                tbl_chart_pie.Time_Line = chart_pie_dto.Chart_Common_Property_DTO.Time_Line.ToString();
            tbl_chart_pie.To_Date = chart_pie_dto.Chart_Common_Property_DTO.To_Date;
            tbl_chart_pie.Precision = chart_pie_dto.Chart_Common_Property_DTO.Precision;
            return tbl_chart_pie;
        }
    }
}
