using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class ChartStackedDTO
    {
        public ChartStackedDTO()
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

    public class Chart_Id_Metric_Ids
    {
        public int Chart_Metric_Id { get; set; }
        public int Metric_Id { get; set; }
    }

    public class ChartStackedDTO_Convert
    {
        public static ChartStackedDTO ChartStackedDTO_Convert_Table_DTO(tblChart_Stacked tbl_Chart_Stacked)
        {
            ChartStackedDTO chart_Stacked_dto = new ChartStackedDTO();
            chart_Stacked_dto.Id = tbl_Chart_Stacked.Id;
            chart_Stacked_dto.Group_By = tbl_Chart_Stacked.Group_By;
            chart_Stacked_dto.Dashboard_Widget_Id = tbl_Chart_Stacked.DashboardWidget_Id;
            chart_Stacked_dto.Chart_Title = tbl_Chart_Stacked.Chart_Title;
            chart_Stacked_dto.Chart_Metric_Ids = ChartMetricDTO_Convert.ChartMetricDTO_Convert_List_Table_To_Array(tbl_Chart_Stacked.tblChart_Metric);
            //chart_Stacked_dto.Chart_Metric = ChartMetricDTO_Convert.ChartMetricDTO_Convert_List_Table_To_DTO(tbl_Chart_Stacked.tblChart_Metric);
            chart_Stacked_dto.Dashboard_Widget_Id = tbl_Chart_Stacked.DashboardWidget_Id;

            chart_Stacked_dto.Chart_Common_Property_DTO.From_Date = tbl_Chart_Stacked.From_Date;
            if (tbl_Chart_Stacked.Time_Line != null)
                chart_Stacked_dto.Chart_Common_Property_DTO.Time_Line = (TimeLine)Enums.TryParse(typeof(TimeLine), tbl_Chart_Stacked.Time_Line);
            chart_Stacked_dto.Chart_Common_Property_DTO.To_Date = tbl_Chart_Stacked.To_Date;
            chart_Stacked_dto.Chart_Common_Property_DTO.Precision = tbl_Chart_Stacked.Precision;
            return chart_Stacked_dto;

        }

        public static IList<ChartStackedDTO> ChartStackedDTO_Convert_Table_DTO(ICollection<tblChart_Stacked> tbl_chart_Stackeds)
        {
            IList<ChartStackedDTO> chart_Stacked_dtos = new List<ChartStackedDTO>();
            foreach (tblChart_Stacked tbl_chart_Stacked in tbl_chart_Stackeds)
            {
                chart_Stacked_dtos.Add(ChartStackedDTO_Convert_Table_DTO(tbl_chart_Stacked));
            }
            return chart_Stacked_dtos;
        }

        public static IList<tblChart_Stacked> ChartStackedDTO_Convert_DTO_Table(ICollection<ChartStackedDTO> chart_Stacked_dtos)
        {
            IList<tblChart_Stacked> tbl_chart_Stacked = new List<tblChart_Stacked>();
            foreach (ChartStackedDTO chart_Stacked_dto in chart_Stacked_dtos)
            {
                tbl_chart_Stacked.Add(ChartStackedDTO_Convert_DTO_Table(chart_Stacked_dto));
            }
            return tbl_chart_Stacked;
        }

        public static tblChart_Stacked ChartStackedDTO_Convert_DTO_Table(ChartStackedDTO chart_Stacked_dto)
        {
            tblChart_Stacked tbl_chart_Stacked = new tblChart_Stacked();
            tbl_chart_Stacked.Id = chart_Stacked_dto.Id;
            tbl_chart_Stacked.Group_By = chart_Stacked_dto.Group_By;
            tbl_chart_Stacked.DashboardWidget_Id = chart_Stacked_dto.Dashboard_Widget_Id;
            tbl_chart_Stacked.Chart_Title = chart_Stacked_dto.Chart_Title;

            tbl_chart_Stacked.tblChart_Metric = ChartMetricDTO_Convert.ChartMetricDTO_Convert_List_DTO_To_Table(chart_Stacked_dto.Chart_Id_Metric_Ids, chart_Stacked_dto.Id, Common.Enums.ChartType.Stacked);
            tbl_chart_Stacked.From_Date = chart_Stacked_dto.Chart_Common_Property_DTO.From_Date;
            if (chart_Stacked_dto.Chart_Common_Property_DTO.Time_Line != null)
                tbl_chart_Stacked.Time_Line = chart_Stacked_dto.Chart_Common_Property_DTO.Time_Line.ToString();
            tbl_chart_Stacked.To_Date = chart_Stacked_dto.Chart_Common_Property_DTO.To_Date;
            tbl_chart_Stacked.Precision = chart_Stacked_dto.Chart_Common_Property_DTO.Precision;
            return tbl_chart_Stacked;
        }
    }
}
