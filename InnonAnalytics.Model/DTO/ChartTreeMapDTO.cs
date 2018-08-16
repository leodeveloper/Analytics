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
    public class ChartTreeMapDTO
    {

        public ChartTreeMapDTO()
        {
            this.Metric = new MetricDTO();
            this.Target_Metric = new MetricDTO();
            this.Chart_Common_Property_DTO = new Chart_Common_Properties_DTO();
        }

        public int Id { get; set; }
        public MetricDTO Metric { get; set; }

        public MetricDTO Target_Metric { get; set; }

        public int Dashboard_Widget_Id { get; set; }

        public string Tree_Map_Title { get; set; }
        public string Group_By { get; set; }
        public Chart_Common_Properties_DTO Chart_Common_Property_DTO { get; set; }
    }

    public class ChartTreeMapDTO_Convert
    {
        public static tblChart_TreeMap ChartTreeMapDTO_Convert_DTO_To_Table(ChartTreeMapDTO chart_treeMap_dto)
        {
            if (chart_treeMap_dto != null)
            {
                tblChart_TreeMap tbl_chart_tree_map = new tblChart_TreeMap();
                try
                {
                    tbl_chart_tree_map.DashboardWidget_Id = chart_treeMap_dto.Dashboard_Widget_Id;
                    tbl_chart_tree_map.Group_By = chart_treeMap_dto.Group_By;
                    tbl_chart_tree_map.Id = chart_treeMap_dto.Id;
                    tbl_chart_tree_map.Metric_Id = chart_treeMap_dto.Metric.Id;
                    tbl_chart_tree_map.Target_Metric_Id = chart_treeMap_dto.Target_Metric.Id;
                    tbl_chart_tree_map.Tree_Map_Title = chart_treeMap_dto.Tree_Map_Title;
                    tbl_chart_tree_map.From_Date = chart_treeMap_dto.Chart_Common_Property_DTO.From_Date;
                    if (chart_treeMap_dto.Chart_Common_Property_DTO.Time_Line != null)
                        tbl_chart_tree_map.Time_Line = chart_treeMap_dto.Chart_Common_Property_DTO.Time_Line.ToString();
                    tbl_chart_tree_map.To_Date = chart_treeMap_dto.Chart_Common_Property_DTO.To_Date;
                    tbl_chart_tree_map.Precision = chart_treeMap_dto.Chart_Common_Property_DTO.Precision;
                    return tbl_chart_tree_map;
                }
                catch (Exception ex)
                {
                    throw ex;
                }                
            }
            else
            {
                throw new Chart_TreeMap_Exception(Resources.Chart_Tree_Map_Null_Exception);
            }            
        }

        public static IList<tblChart_TreeMap> ChartTreeMapDTO_Convert_DTO_To_Table(ICollection<ChartTreeMapDTO> chart_treeMap_dtos )
        {
            IList<tblChart_TreeMap> tbl_chart_tree_maps = new List<tblChart_TreeMap>();
            foreach (ChartTreeMapDTO chart_treeMap_dto in chart_treeMap_dtos)
            {
                tbl_chart_tree_maps.Add(ChartTreeMapDTO_Convert_DTO_To_Table(chart_treeMap_dto));
            }
            return tbl_chart_tree_maps;
        }

        public static ChartTreeMapDTO ChartTreeMapDTO_Convert_Table_To_DTO(tblChart_TreeMap tbl_chart_tree_map)
        {
            ChartTreeMapDTO chart_treeMap_dto = new ChartTreeMapDTO();
            try
            {
                chart_treeMap_dto.Dashboard_Widget_Id = tbl_chart_tree_map.DashboardWidget_Id;
                chart_treeMap_dto.Group_By = tbl_chart_tree_map.Group_By;
                chart_treeMap_dto.Id = tbl_chart_tree_map.Id;
                chart_treeMap_dto.Metric.Id = tbl_chart_tree_map.Metric_Id;
                chart_treeMap_dto.Target_Metric.Id = tbl_chart_tree_map.Target_Metric_Id;
                chart_treeMap_dto.Tree_Map_Title = tbl_chart_tree_map.Tree_Map_Title;
                chart_treeMap_dto.Chart_Common_Property_DTO.From_Date = tbl_chart_tree_map.From_Date;
                if (tbl_chart_tree_map.Time_Line != null)
                    chart_treeMap_dto.Chart_Common_Property_DTO.Time_Line = (TimeLine)Enums.TryParse(typeof(TimeLine), tbl_chart_tree_map.Time_Line);
                chart_treeMap_dto.Chart_Common_Property_DTO.To_Date = tbl_chart_tree_map.To_Date;
                chart_treeMap_dto.Chart_Common_Property_DTO.Precision = tbl_chart_tree_map.Precision;
            }
            catch (Exception ex)
            {

            }
            return chart_treeMap_dto;
        }

        public static IList<ChartTreeMapDTO> ChartTreeMapDTO_Convert_Table_To_DTO(ICollection<tblChart_TreeMap> tbl_chart_tree_maps)
        {
            IList<ChartTreeMapDTO> chart_treeMap_dtos = new List<ChartTreeMapDTO>();
            foreach (tblChart_TreeMap tbl_chart_tree_map in tbl_chart_tree_maps)
            {
                chart_treeMap_dtos.Add(ChartTreeMapDTO_Convert_Table_To_DTO(tbl_chart_tree_map));
            }
            return chart_treeMap_dtos;
        }
    }
}
