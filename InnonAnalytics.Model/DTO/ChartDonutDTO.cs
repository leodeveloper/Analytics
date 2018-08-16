using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class ChartDonutDTO
    {
        public ChartDonutDTO()
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
        
        public int Dashboard_Widget_Id { get; set; }
        public Chart_Common_Properties_DTO Chart_Common_Property_DTO { get; set; }
    }

    public class ChartDonutDTO_Convert
    {
        public static ChartDonutDTO ChartDonutDTO_Convert_Table_DTO(tblChart_Donut tbl_Chart_Donut)
        {
            ChartDonutDTO chart_Donut_dto = new ChartDonutDTO();
            chart_Donut_dto.Id = tbl_Chart_Donut.Id;           
            chart_Donut_dto.Dashboard_Widget_Id = tbl_Chart_Donut.DashboardWidget_Id;
            chart_Donut_dto.Chart_Title = tbl_Chart_Donut.Chart_Title;
            chart_Donut_dto.Chart_Metric_Ids = ChartMetricDTO_Convert.ChartMetricDTO_Convert_List_Table_To_Array(tbl_Chart_Donut.tblChart_Metric);
            //chart_Donut_dto.Chart_Metric = ChartMetricDTO_Convert.ChartMetricDTO_Convert_List_Table_To_DTO(tbl_Chart_Donut.tblChart_Metric);
            chart_Donut_dto.Dashboard_Widget_Id = tbl_Chart_Donut.DashboardWidget_Id;

            chart_Donut_dto.Chart_Common_Property_DTO.From_Date = tbl_Chart_Donut.From_Date;
            chart_Donut_dto.Chart_Common_Property_DTO.To_Date = tbl_Chart_Donut.To_Date;
            chart_Donut_dto.Chart_Common_Property_DTO.Precision = tbl_Chart_Donut.Precision;
            if (tbl_Chart_Donut.Time_Line != null)
                chart_Donut_dto.Chart_Common_Property_DTO.Time_Line = (TimeLine)Enums.TryParse(typeof(TimeLine), tbl_Chart_Donut.Time_Line);
            

            return chart_Donut_dto;

        }


        public static IList<ChartDonutDTO> ChartDonutDTO_Convert_Table_DTO(ICollection<tblChart_Donut> tbl_chart_Donuts)
        {
            IList<ChartDonutDTO> chart_Donut_dtos = new List<ChartDonutDTO>();
            foreach (tblChart_Donut tbl_chart_Donut in tbl_chart_Donuts)
            {
                chart_Donut_dtos.Add(ChartDonutDTO_Convert_Table_DTO(tbl_chart_Donut));
            }
            return chart_Donut_dtos;
        }

        public static IList<tblChart_Donut> ChartDonutDTO_Convert_DTO_Table(ICollection<ChartDonutDTO> chart_Donut_dtos)
        {
            IList<tblChart_Donut> tbl_chart_Donut = new List<tblChart_Donut>();
            foreach (ChartDonutDTO chart_Donut_dto in chart_Donut_dtos)
            {
                tbl_chart_Donut.Add(ChartDonutDTO_Convert_DTO_Table(chart_Donut_dto));
            }
            return tbl_chart_Donut;
        }

        public static tblChart_Donut ChartDonutDTO_Convert_DTO_Table(ChartDonutDTO chart_Donut_dto)
        {
            tblChart_Donut tbl_chart_Donut = new tblChart_Donut();
            tbl_chart_Donut.Id = chart_Donut_dto.Id;
            tbl_chart_Donut.DashboardWidget_Id = chart_Donut_dto.Dashboard_Widget_Id;
            tbl_chart_Donut.Chart_Title = chart_Donut_dto.Chart_Title;

            tbl_chart_Donut.tblChart_Metric = ChartMetricDTO_Convert.ChartMetricDTO_Convert_List_DTO_To_Table(chart_Donut_dto.Chart_Id_Metric_Ids, chart_Donut_dto.Id, Common.Enums.ChartType.Donut);

            tbl_chart_Donut.From_Date = chart_Donut_dto.Chart_Common_Property_DTO.From_Date;
            tbl_chart_Donut.To_Date = chart_Donut_dto.Chart_Common_Property_DTO.To_Date;
            tbl_chart_Donut.Precision = chart_Donut_dto.Chart_Common_Property_DTO.Precision;
            if (chart_Donut_dto.Chart_Common_Property_DTO.Time_Line != null)
                tbl_chart_Donut.Time_Line = chart_Donut_dto.Chart_Common_Property_DTO.Time_Line.ToString();
            

            return tbl_chart_Donut;
        }
    }
}
