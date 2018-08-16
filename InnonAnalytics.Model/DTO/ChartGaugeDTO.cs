using FluentValidation.Attributes;
using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.DTOValidators;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Model.Exceptions;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    [Validator(typeof(GaugeDTOValidator))]
    public class ChartGaugeDTO
    {

        public ChartGaugeDTO()
        {
            //Set default properties
            this.Metric_Label = "Total";
            this.Target_Matric_Label = "Total Target";
            this.Minor_Unit = 2;
            this.Start_Angle = -150;
            this.End_Angle = 150;
            this.Min = 0;
            this.Max = 100;
            this.Metric = new MetricDTO();
            this.Target_Matric = new MetricDTO();
            this.Chart_Common_Property_DTO = new Chart_Common_Properties_DTO();

        }

        public int Id { get; set; }
        public MetricDTO Metric { get; set; }
        public MetricDTO Target_Matric { get; set; }
        public int Minor_Unit { get; set; }
        public int Start_Angle { get; set; }
        public int End_Angle { get; set; }
        public int Min { get; set; }
        public int Max { get; set; }
        public string Metric_Label { get; set; }
        public string Target_Matric_Label { get; set; }
        public int Dashboard_Widget_Id { get; set; }
        public Chart_Common_Properties_DTO Chart_Common_Property_DTO { get; set; }

    }

    public static class ChartGaugeDTO_Convert
    {
        public static tblChart_Gauge ChartGaugeDTO_Convert_DTO_To_Table(ChartGaugeDTO chart_gauge_dto)
        {
            if (chart_gauge_dto != null)
            {
                tblChart_Gauge tbl_chart_gauge = new tblChart_Gauge();
                try
                {
                    tbl_chart_gauge.DashboardWidget_Id = chart_gauge_dto.Dashboard_Widget_Id;
                    tbl_chart_gauge.End_Angle = chart_gauge_dto.End_Angle;
                    tbl_chart_gauge.Id = chart_gauge_dto.Id;
                    tbl_chart_gauge.Max = chart_gauge_dto.Max;
                    tbl_chart_gauge.Metric_Id = chart_gauge_dto.Metric.Id;
                    tbl_chart_gauge.Metric_Label = chart_gauge_dto.Metric_Label;
                    tbl_chart_gauge.Min = chart_gauge_dto.Min;
                    tbl_chart_gauge.Minor_Unit = chart_gauge_dto.Minor_Unit;
                    tbl_chart_gauge.Start_Angle = chart_gauge_dto.Start_Angle;
                    tbl_chart_gauge.Target_Matric_Id = chart_gauge_dto.Target_Matric.Id;
                    tbl_chart_gauge.Target_Matric_Label = chart_gauge_dto.Target_Matric_Label;

                    tbl_chart_gauge.From_Date = chart_gauge_dto.Chart_Common_Property_DTO.From_Date;
                    if (chart_gauge_dto.Chart_Common_Property_DTO.Time_Line != null)
                        tbl_chart_gauge.Time_Line = chart_gauge_dto.Chart_Common_Property_DTO.Time_Line.ToString();
                    tbl_chart_gauge.To_Date = chart_gauge_dto.Chart_Common_Property_DTO.To_Date;
                    tbl_chart_gauge.Precision = chart_gauge_dto.Chart_Common_Property_DTO.Precision;

                    return tbl_chart_gauge;
                }
                catch (Exception ex)
                {
                    throw ex;
                }
            }
            else
            {
                throw new Chart_Gauge_Exception(Resources.Chart_Gauge_Null_Exception);
            }            
        }

        public static IList<tblChart_Gauge> ChartGaugeDTO_Convert_DTO_To_Table(ICollection<ChartGaugeDTO> dto_chart_gauges)
        {
            IList<tblChart_Gauge> chart_gauge_table = new List<tblChart_Gauge>();
            foreach (ChartGaugeDTO dto_chart_gauge in dto_chart_gauges)
            {
                chart_gauge_table.Add(ChartGaugeDTO_Convert_DTO_To_Table(dto_chart_gauge));
            }
            return chart_gauge_table;
        }

        public static ChartGaugeDTO ChartGaugeDTO_Convert_Table_To_DTO(tblChart_Gauge tbl_chart_gauge)
        {
            ChartGaugeDTO  chart_gauge_dto  = new ChartGaugeDTO();
            try
            {
                chart_gauge_dto.Dashboard_Widget_Id = tbl_chart_gauge.DashboardWidget_Id;
                chart_gauge_dto.End_Angle = tbl_chart_gauge.End_Angle;
                chart_gauge_dto.Id = tbl_chart_gauge.Id;
                chart_gauge_dto.Max = tbl_chart_gauge.Max;
                chart_gauge_dto.Metric.Id = tbl_chart_gauge.Metric_Id;
                chart_gauge_dto.Metric_Label = tbl_chart_gauge.Metric_Label;
                chart_gauge_dto.Min = tbl_chart_gauge.Min;
                chart_gauge_dto.Minor_Unit = tbl_chart_gauge.Minor_Unit;
                chart_gauge_dto.Start_Angle = tbl_chart_gauge.Start_Angle;
                chart_gauge_dto.Target_Matric.Id = tbl_chart_gauge.Target_Matric_Id;
                chart_gauge_dto.Target_Matric_Label = tbl_chart_gauge.Target_Matric_Label;               

                chart_gauge_dto.Chart_Common_Property_DTO.From_Date=tbl_chart_gauge.From_Date;
                if (tbl_chart_gauge.Time_Line != null)
                    chart_gauge_dto.Chart_Common_Property_DTO.Time_Line = (TimeLine)Enums.TryParse(typeof(TimeLine), tbl_chart_gauge.Time_Line);
                chart_gauge_dto.Chart_Common_Property_DTO.To_Date = tbl_chart_gauge.To_Date;
                chart_gauge_dto.Chart_Common_Property_DTO.Precision = tbl_chart_gauge.Precision;
            }
            catch (Exception ex)
            {

            }
            return chart_gauge_dto;
        }

        public static IList<ChartGaugeDTO> ChartGaugeDTO_Convert_Table_To_DTO(ICollection<tblChart_Gauge> tbl_chart_gauges)
        {
            IList<ChartGaugeDTO> chart_gauge_dto = new List<ChartGaugeDTO>();
            foreach(tblChart_Gauge tbl_chart_gauge in tbl_chart_gauges)
            {
                chart_gauge_dto.Add(ChartGaugeDTO_Convert_Table_To_DTO(tbl_chart_gauge));
            }
            return chart_gauge_dto;
        }
    }
}
