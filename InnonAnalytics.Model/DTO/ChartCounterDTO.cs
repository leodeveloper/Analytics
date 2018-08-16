using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class ChartCounterDTO
    {

        public ChartCounterDTO()
        {
            this.Metric = new MetricDTO();
            this.Chart_Common_Property_DTO = new Chart_Common_Properties_DTO();
        }

        public int Id { get; set; }
        public MetricDTO Metric { get; set; }

        public bool Is_Deleted { get; set; }

        public int Dashboard_Widget_Id { get; set; }
        public Chart_Common_Properties_DTO Chart_Common_Property_DTO { get; set; }
    }

    public static class ChartCounter_Converter
    {
        public static tblChart_Counter Convert_DTO_To_Table(ChartCounterDTO chart_counter_dto)
        {
            tblChart_Counter tbl_chart_counter = new tblChart_Counter();
            tbl_chart_counter.DashboardWidget_Id = chart_counter_dto.Dashboard_Widget_Id;
            tbl_chart_counter.Id = chart_counter_dto.Id;
            tbl_chart_counter.Is_Deleted = chart_counter_dto.Is_Deleted;
            tbl_chart_counter.Metric_Id = chart_counter_dto.Metric.Id;
            tbl_chart_counter.From_Date = chart_counter_dto.Chart_Common_Property_DTO.From_Date;

            if (chart_counter_dto.Chart_Common_Property_DTO.Time_Line != null)
                tbl_chart_counter.Time_Line = chart_counter_dto.Chart_Common_Property_DTO.Time_Line.ToString();
            tbl_chart_counter.To_Date = chart_counter_dto.Chart_Common_Property_DTO.To_Date;
            tbl_chart_counter.Precision = chart_counter_dto.Chart_Common_Property_DTO.Precision;
            return tbl_chart_counter;
        }

        public static IList<tblChart_Counter> Convert_DTO_To_Table(ICollection<ChartCounterDTO> dto_chart_counters)
        {
            IList<tblChart_Counter> tbl_chart_counter = new List<tblChart_Counter>();
            foreach (ChartCounterDTO dto_chart_counter in dto_chart_counters)
            {
                tbl_chart_counter.Add(Convert_DTO_To_Table(dto_chart_counter));
            }
            return tbl_chart_counter;
        }

        public static ChartCounterDTO Convert_Table_To_DTO(tblChart_Counter tbl_chart_counter)
        {
            ChartCounterDTO chart_counter_dto = new ChartCounterDTO();
            chart_counter_dto.Dashboard_Widget_Id = tbl_chart_counter.DashboardWidget_Id;
            chart_counter_dto.Id = tbl_chart_counter.Id;
            chart_counter_dto.Is_Deleted = tbl_chart_counter.Is_Deleted;
            chart_counter_dto.Metric.Id = tbl_chart_counter.Metric_Id;

            chart_counter_dto.Chart_Common_Property_DTO.From_Date = tbl_chart_counter.From_Date;
            if (tbl_chart_counter.Time_Line != null)
                chart_counter_dto.Chart_Common_Property_DTO.Time_Line = (TimeLine)Enums.TryParse(typeof(TimeLine), tbl_chart_counter.Time_Line);
            chart_counter_dto.Chart_Common_Property_DTO.To_Date = tbl_chart_counter.To_Date;
            chart_counter_dto.Chart_Common_Property_DTO.Precision = tbl_chart_counter.Precision;
            return chart_counter_dto;
        }

        public static IList<ChartCounterDTO> Convert_Table_To_DTO(ICollection<tblChart_Counter> tbl_chart_counters)
        {
            IList<ChartCounterDTO> dto_chart_counter = new List<ChartCounterDTO>();
            foreach (tblChart_Counter tbl_chart_counter in tbl_chart_counters)
            {
                dto_chart_counter.Add(Convert_Table_To_DTO(tbl_chart_counter));
            }
            return dto_chart_counter;
        }

    }
}
