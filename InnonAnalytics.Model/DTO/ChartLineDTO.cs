using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class ChartLineDTO
    {
        public ChartLineDTO()
        {
            this.Chart_Metric = new HashSet<MetricDTO>();
            this.Chart_Id_Metric_Ids = new HashSet<Chart_Id_Metric_Ids>();
            this.Chart_Common_Property_DTO = new Chart_Common_Properties_DTO();

        }

        public int Id { get; set; }

        public ICollection<MetricDTO> Chart_Metric { get; set; }


        //this is the id of metric from the table of tbl_Chart_Metric
        public int[] Chart_Metric_Ids { get; set; }


        //this is primery key ids of the tbl_Chart_Metric
        public ICollection<Chart_Id_Metric_Ids> Chart_Id_Metric_Ids { get; set; }

        public string MetricIds { get; set; }

        public string Chart_Title { get; set; }

        public string Group_By { get; set; }
        public int Dashboard_Widget_Id { get; set; }
        public Chart_Common_Properties_DTO Chart_Common_Property_DTO { get; set; }
    }

    public class ChartLineDTO_Convert
    {
        public static ChartLineDTO ChartLineDTO_Convert_Table_DTO(tblChart_Line tbl_Chart_Line)
        {
            ChartLineDTO chart_Line_dto = new ChartLineDTO();
            chart_Line_dto.Id = tbl_Chart_Line.Id;
            chart_Line_dto.Group_By = tbl_Chart_Line.Group_By;
            chart_Line_dto.Dashboard_Widget_Id = tbl_Chart_Line.DashboardWidget_Id;
            chart_Line_dto.Chart_Title = tbl_Chart_Line.Chart_Title;
            chart_Line_dto.Chart_Metric_Ids = ChartMetricDTO_Convert.ChartMetricDTO_Convert_List_Table_To_Array(tbl_Chart_Line.tblChart_Metric);
            //chart_Line_dto.Chart_Metric = ChartMetricDTO_Convert.ChartMetricDTO_Convert_List_Table_To_DTO(tbl_Chart_Line.tblChart_Metric);
            chart_Line_dto.Dashboard_Widget_Id = tbl_Chart_Line.DashboardWidget_Id;

            chart_Line_dto.Chart_Common_Property_DTO.From_Date = tbl_Chart_Line.From_Date;
            if (tbl_Chart_Line.Time_Line != null)
                chart_Line_dto.Chart_Common_Property_DTO.Time_Line = (TimeLine)Enums.TryParse(typeof(TimeLine), tbl_Chart_Line.Time_Line);
            chart_Line_dto.Chart_Common_Property_DTO.To_Date = tbl_Chart_Line.To_Date;
            chart_Line_dto.Chart_Common_Property_DTO.Precision = tbl_Chart_Line.Precision;
            return chart_Line_dto;

        }

        public static IList<ChartLineDTO> ChartLineDTO_Convert_Table_DTO(ICollection<tblChart_Line> tbl_chart_Lines)
        {
            IList<ChartLineDTO> chart_Line_dtos = new List<ChartLineDTO>();
            foreach (tblChart_Line tbl_chart_Line in tbl_chart_Lines)
            {
                chart_Line_dtos.Add(ChartLineDTO_Convert_Table_DTO(tbl_chart_Line));
            }
            return chart_Line_dtos;
        }

        public static IList<tblChart_Line> ChartLineDTO_Convert_DTO_Table(ICollection<ChartLineDTO> chart_Line_dtos)
        {
            IList<tblChart_Line> tbl_chart_Line = new List<tblChart_Line>();
            foreach (ChartLineDTO chart_Line_dto in chart_Line_dtos)
            {
                tbl_chart_Line.Add(ChartLineDTO_Convert_DTO_Table(chart_Line_dto));
            }
            return tbl_chart_Line;
        }

        public static tblChart_Line ChartLineDTO_Convert_DTO_Table(ChartLineDTO chart_Line_dto)
        {
            tblChart_Line tbl_chart_Line = new tblChart_Line();
            tbl_chart_Line.Id = chart_Line_dto.Id;
            tbl_chart_Line.Group_By = chart_Line_dto.Group_By;
            tbl_chart_Line.DashboardWidget_Id = chart_Line_dto.Dashboard_Widget_Id;
            tbl_chart_Line.Chart_Title = chart_Line_dto.Chart_Title;

            tbl_chart_Line.tblChart_Metric = ChartMetricDTO_Convert.ChartMetricDTO_Convert_List_DTO_To_Table(chart_Line_dto.Chart_Id_Metric_Ids, chart_Line_dto.Id, Common.Enums.ChartType.Line);
            tbl_chart_Line.From_Date = chart_Line_dto.Chart_Common_Property_DTO.From_Date;
            if (chart_Line_dto.Chart_Common_Property_DTO.Time_Line != null)
                tbl_chart_Line.Time_Line = chart_Line_dto.Chart_Common_Property_DTO.Time_Line.ToString();
            tbl_chart_Line.To_Date = chart_Line_dto.Chart_Common_Property_DTO.To_Date;
            tbl_chart_Line.Precision = chart_Line_dto.Chart_Common_Property_DTO.Precision;
            return tbl_chart_Line;
        }
    }
}
