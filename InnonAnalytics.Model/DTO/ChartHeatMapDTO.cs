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
    public class ChartHeatMapDTO
    {
        public ChartHeatMapDTO()
        {
            this.Metric = new MetricDTO();
            this.Chart_Common_Property_DTO = new Chart_Common_Properties_DTO();
        }

        public int Id { get; set; }
        public MetricDTO Metric { get; set; }

        public string Chart_Title { get; set; }

        public int Dashboard_Widget_Id { get; set; }

        public Chart_Common_Properties_DTO Chart_Common_Property_DTO { get; set; }
    }

    public class ChartHeatMapDTO_Convert
    {
        public static tblChart_Heatmap ChartHeatMapDTO_Convert_DTO_To_Table(ChartHeatMapDTO chart_Heatmap_dto)
        {
            if (chart_Heatmap_dto != null)
            {
                try
                {
                    tblChart_Heatmap chart_Heatmap_tbl = new tblChart_Heatmap();
                    chart_Heatmap_tbl.Chart_Title = chart_Heatmap_dto.Chart_Title;
                    chart_Heatmap_tbl.DashboardWidget_Id = chart_Heatmap_dto.Dashboard_Widget_Id;
                    chart_Heatmap_tbl.Id = chart_Heatmap_dto.Id;
                    chart_Heatmap_tbl.Metric_Id = chart_Heatmap_dto.Metric.Id;

                    chart_Heatmap_tbl.From_Date = chart_Heatmap_dto.Chart_Common_Property_DTO.From_Date;
                    if (chart_Heatmap_dto.Chart_Common_Property_DTO.Time_Line != null)
                        chart_Heatmap_tbl.Time_Line = chart_Heatmap_dto.Chart_Common_Property_DTO.Time_Line.ToString();
                    chart_Heatmap_tbl.To_Date = chart_Heatmap_dto.Chart_Common_Property_DTO.To_Date;
                    chart_Heatmap_tbl.Precision = chart_Heatmap_dto.Chart_Common_Property_DTO.Precision;
                    return chart_Heatmap_tbl;
                }
                catch (Exception ex)
                {
                    throw ex;
                }
            }
            else
            {
                throw new Chart_Heatmap_Exception(Resources.Chart_Heatmap_Null_Exception);
            }
        }

        public static IList<tblChart_Heatmap> ChartHeatMapDTO_Convert_DTO_To_Table(ICollection<ChartHeatMapDTO> chart_Heatmap_dtos)
        {
            IList<tblChart_Heatmap> tbl_chart_Heatmaps = new List<tblChart_Heatmap>();
            foreach (ChartHeatMapDTO chart_Heatmap_dto in chart_Heatmap_dtos)
            {
                try
                {
                    tbl_chart_Heatmaps.Add(ChartHeatMapDTO_Convert_DTO_To_Table(chart_Heatmap_dto));
                }
                catch (Exception ex)
                {

                }
            }
            return tbl_chart_Heatmaps;
        }

        public static ChartHeatMapDTO ChartHeatMapDTO_Convert_Table_To_DTO(tblChart_Heatmap chart_Heatmap_tbl)
        {
            if (chart_Heatmap_tbl != null)
            {
                try
                {
                    ChartHeatMapDTO chart_Heatmap_dto = new ChartHeatMapDTO();
                    chart_Heatmap_dto.Chart_Title = chart_Heatmap_tbl.Chart_Title;
                    chart_Heatmap_dto.Dashboard_Widget_Id = chart_Heatmap_tbl.DashboardWidget_Id;
                    chart_Heatmap_dto.Id = chart_Heatmap_tbl.Id;
                    chart_Heatmap_dto.Metric.Id = chart_Heatmap_tbl.Metric_Id;
                    chart_Heatmap_dto.Chart_Common_Property_DTO.From_Date = chart_Heatmap_tbl.From_Date;
                    if (chart_Heatmap_tbl.Time_Line != null)
                        chart_Heatmap_dto.Chart_Common_Property_DTO.Time_Line = (TimeLine)Enums.TryParse(typeof(TimeLine), chart_Heatmap_tbl.Time_Line);
                    chart_Heatmap_dto.Chart_Common_Property_DTO.To_Date = chart_Heatmap_tbl.To_Date;
                    chart_Heatmap_dto.Chart_Common_Property_DTO.Precision = chart_Heatmap_tbl.Precision;
                    return chart_Heatmap_dto;
                }
                catch (Exception ex)
                {
                    throw ex;
                }
            }
            else
            {
                throw new Chart_Heatmap_Exception(Resources.Chart_Heatmap_Null_Exception);
            }
        }

        public static IList<ChartHeatMapDTO> ChartHeatMapDTO_Convert_Table_To_DTO(ICollection<tblChart_Heatmap> tbl_chart_Heatmaps)
        {
            IList<ChartHeatMapDTO> chart_Heatmap_dtos = new List<ChartHeatMapDTO>();
            foreach(tblChart_Heatmap tbl_chart_Heatmap in  tbl_chart_Heatmaps)
            {
                try
                {
                    chart_Heatmap_dtos.Add(ChartHeatMapDTO_Convert_Table_To_DTO(tbl_chart_Heatmap));
                }
                catch(Exception ex)
                {

                }
            }
            return chart_Heatmap_dtos;
        }
    }

}
