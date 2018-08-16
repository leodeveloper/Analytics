using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Model.Exceptions;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class ChartBarDTO
    {
        public ChartBarDTO()
        {
            this.Metric = new MetricDTO();
            this.Target_Metric = new MetricDTO();
            this.Chart_Common_Property_DTO = new Chart_Common_Properties_DTO();
        }

        public int Id { get; set; }
        public MetricDTO Metric { get; set; }
        public MetricDTO Target_Metric { get; set; }

        public string Chart_Title { get; set; }

        public string Group_By { get; set; }
        public int Dashboard_Widget_Id { get; set; }

        public Chart_Common_Properties_DTO Chart_Common_Property_DTO { get; set; }
    }

    public class ChartBarDTO_Convert
    {
        public static tblChart_Bar ChartBarDTO_Convert_DTO_To_Table(ChartBarDTO chart_bar_dto)
        {
            if (chart_bar_dto != null)
            {
                try
                {
                    tblChart_Bar chart_bar_tbl = new tblChart_Bar();
                    chart_bar_tbl.Chart_Title = chart_bar_dto.Chart_Title;
                    chart_bar_tbl.DashboardWidget_Id = chart_bar_dto.Dashboard_Widget_Id;
                    chart_bar_tbl.Group_By = chart_bar_dto.Group_By;
                    chart_bar_tbl.Id = chart_bar_dto.Id;
                    chart_bar_tbl.Metric_Id = chart_bar_dto.Metric.Id;
                    chart_bar_tbl.Target_Metric_Id = chart_bar_dto.Target_Metric.Id;

                    chart_bar_tbl.From_Date = chart_bar_dto.Chart_Common_Property_DTO.From_Date;
                    if (chart_bar_dto.Chart_Common_Property_DTO.Time_Line != null)
                        chart_bar_tbl.Time_Line = chart_bar_dto.Chart_Common_Property_DTO.Time_Line.ToString();
                    chart_bar_tbl.To_Date = chart_bar_dto.Chart_Common_Property_DTO.To_Date;
                    chart_bar_tbl.Precision = chart_bar_dto.Chart_Common_Property_DTO.Precision;
                    
                    return chart_bar_tbl;
                }
                catch (Exception ex)
                {
                    throw ex;
                }
            }
            else
            {
                throw new Chart_Bar_Exception(Resources.Chart_Bar_Null_Exception);
            }
        }

        public static IList<tblChart_Bar> ChartBarDTO_Convert_DTO_To_Table(ICollection<ChartBarDTO> chart_barMap_dtos)
        {
            IList<tblChart_Bar> tbl_chart_bar_maps = new List<tblChart_Bar>();
            foreach (ChartBarDTO chart_barMap_dto in chart_barMap_dtos)
            {
                tbl_chart_bar_maps.Add(ChartBarDTO_Convert_DTO_To_Table(chart_barMap_dto));
            }
            return tbl_chart_bar_maps;
        }

        public static ChartBarDTO ChartBarDTO_Convert_Table_To_DTO(tblChart_Bar chart_bar_tbl)
        {
            if (chart_bar_tbl != null)
            {
                try
                {
                    ChartBarDTO chart_bar_dto = new ChartBarDTO();                    
                    chart_bar_dto.Chart_Title = chart_bar_tbl.Chart_Title;
                    chart_bar_dto.Dashboard_Widget_Id = chart_bar_tbl.DashboardWidget_Id;
                    chart_bar_dto.Group_By = chart_bar_tbl.Group_By;
                    chart_bar_dto.Id = chart_bar_tbl.Id;
                    chart_bar_dto.Metric.Id = chart_bar_tbl.Metric_Id;
                    chart_bar_dto.Target_Metric.Id = (int)chart_bar_tbl.Target_Metric_Id;

                    chart_bar_dto.Chart_Common_Property_DTO.From_Date = chart_bar_tbl.From_Date;
                    if (chart_bar_tbl.Time_Line != null)
                        chart_bar_dto.Chart_Common_Property_DTO.Time_Line = (TimeLine)Enums.TryParse(typeof(TimeLine), chart_bar_tbl.Time_Line);
                    chart_bar_dto.Chart_Common_Property_DTO.To_Date = chart_bar_tbl.To_Date;
                    chart_bar_dto.Chart_Common_Property_DTO.Precision = chart_bar_tbl.Precision;
                    return chart_bar_dto;
                }
                catch (Exception ex)
                {
                    throw ex;
                }
            }
            else
            {
                throw new Chart_Bar_Exception(Resources.Chart_Bar_Null_Exception);
            }
        }

        public static IList<ChartBarDTO> ChartBarDTO_Convert_Table_To_DTO(ICollection<tblChart_Bar> tbl_chart_bars)
        {
            IList<ChartBarDTO> chart_bar_dtos = new List<ChartBarDTO>();
            foreach (tblChart_Bar tbl_chart_bar in tbl_chart_bars)
            {
                chart_bar_dtos.Add(ChartBarDTO_Convert_Table_To_DTO(tbl_chart_bar));
            }
            return chart_bar_dtos;
        }
    }
}
