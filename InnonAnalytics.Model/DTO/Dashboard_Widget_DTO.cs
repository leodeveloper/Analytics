using FluentValidation.Attributes;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.DTOValidators;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{

    #region Dashboard widget view model DTO using for the CRUD. Add update widget
    /// <summary>
    /// This DTO used for add edit chart in the widget
    /// </summary>
    [Validator(typeof(Dashboard_Widget_VM_DTOValidation))]
    public class Dashboard_Widget_VM_DTO
    {
        public Dashboard_Widget_VM_DTO(ChartType chart_type)
        {
            switch (chart_type)
            {
                case ChartType.Gauge:
                    this.GaugeDTO = new ChartGaugeDTO();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.TreeMap:
                    this.TreeMapDTO = new ChartTreeMapDTO();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.Bar:                   
                case ChartType.BarFixedPlacement:
                    this.BarDTO = new ChartBarDTO();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.Pie:
                    this.PieDTO = new ChartPieDTO();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.Donut:
                    this.DonutDTO = new ChartDonutDTO();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.Stacked:
                    this.StackedDTO = new ChartStackedDTO();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.Line:
                    this.LineDTO = new ChartLineDTO();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.HeatMap:
                    this.HeapMapDTO = new ChartHeatMapDTO();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.Counter:
                    this.CounterDTO = new ChartCounterDTO();
                    this.Chart_Type = chart_type;
                    break;
                default:
                    break;
            }
            this.Is_Deleted = false;
        }

        public Dashboard_Widget_VM_DTO()
        {

        }

        public int Id { get; set; }
        public string Widget_Title { get; set; }

        public ChartType Chart_Type { get; set; }

        public int Dashboard_Id { get; set; }

        public ChartGaugeDTO GaugeDTO { get; set; }

        public ChartTreeMapDTO TreeMapDTO { get; set; }

        public ChartBarDTO BarDTO { get; set; }

        public ChartPieDTO PieDTO { get; set; }

        public ChartDonutDTO DonutDTO { get; set; }

        public ChartStackedDTO StackedDTO { get; set; }

        public ChartLineDTO LineDTO { get; set; }

        public ChartHeatMapDTO HeapMapDTO { get; set; }

        public ChartCounterDTO CounterDTO { get; set; }

        public bool Is_Deleted { get; set; }

        public int widget_x { get; set; }

        public int widget_y { get; set; }

        public int widget_width { get; set; }

        public int widget_height { get; set; }

    }

    public static class Dashboard_Widget_VM_DTO_Convert
    {
        public static tblDashboard_Widget Dashboard_Widget_DTO_Convert_DTO_To_Table(Dashboard_Widget_VM_DTO dashboard_widget_dto)
        {
            tblDashboard_Widget tbl_dashboard_widget = new tblDashboard_Widget();
            try
            {
                tbl_dashboard_widget.Id = dashboard_widget_dto.Id;
                tbl_dashboard_widget.Chart_Type = dashboard_widget_dto.Chart_Type.ToString();
                tbl_dashboard_widget.Dashboard_Id = dashboard_widget_dto.Dashboard_Id;
                tbl_dashboard_widget.Widget_Title = dashboard_widget_dto.Widget_Title;
                tbl_dashboard_widget.Is_Deleted = dashboard_widget_dto.Is_Deleted;

                tbl_dashboard_widget.widget_height = dashboard_widget_dto.widget_height;
                tbl_dashboard_widget.widget_width = dashboard_widget_dto.widget_width;
                tbl_dashboard_widget.widget_x = dashboard_widget_dto.widget_x;
                tbl_dashboard_widget.widget_y = dashboard_widget_dto.widget_y;

                if (dashboard_widget_dto.GaugeDTO != null)
                    tbl_dashboard_widget.tblChart_Gauge.Add(ChartGaugeDTO_Convert.ChartGaugeDTO_Convert_DTO_To_Table(dashboard_widget_dto.GaugeDTO));
                else if (dashboard_widget_dto.TreeMapDTO != null)
                    tbl_dashboard_widget.tblChart_TreeMap.Add(ChartTreeMapDTO_Convert.ChartTreeMapDTO_Convert_DTO_To_Table(dashboard_widget_dto.TreeMapDTO));
                else if (dashboard_widget_dto.BarDTO != null)
                    tbl_dashboard_widget.tblChart_Bar.Add(ChartBarDTO_Convert.ChartBarDTO_Convert_DTO_To_Table(dashboard_widget_dto.BarDTO));
                else if (dashboard_widget_dto.PieDTO != null)
                    tbl_dashboard_widget.tblChart_Pie.Add(ChartPieDTO_Convert.ChartPieDTO_Convert_DTO_Table(dashboard_widget_dto.PieDTO));
                else if (dashboard_widget_dto.DonutDTO != null)
                    tbl_dashboard_widget.tblChart_Donut.Add(ChartDonutDTO_Convert.ChartDonutDTO_Convert_DTO_Table(dashboard_widget_dto.DonutDTO));
                else if (dashboard_widget_dto.StackedDTO != null)
                    tbl_dashboard_widget.tblChart_Stacked.Add(ChartStackedDTO_Convert.ChartStackedDTO_Convert_DTO_Table(dashboard_widget_dto.StackedDTO));
                else if (dashboard_widget_dto.LineDTO != null)
                    tbl_dashboard_widget.tblChart_Line.Add(ChartLineDTO_Convert.ChartLineDTO_Convert_DTO_Table(dashboard_widget_dto.LineDTO));
                else if (dashboard_widget_dto.HeapMapDTO != null)
                    tbl_dashboard_widget.tblChart_Heatmap.Add(ChartHeatMapDTO_Convert.ChartHeatMapDTO_Convert_DTO_To_Table(dashboard_widget_dto.HeapMapDTO));
                else if (dashboard_widget_dto.CounterDTO != null)
                    tbl_dashboard_widget.tblChart_Counter.Add(ChartCounter_Converter.Convert_DTO_To_Table(dashboard_widget_dto.CounterDTO));

            }
            catch (Exception ex)
            {
                throw ex;
            }


            return tbl_dashboard_widget;
        }


        public static Dashboard_Widget_VM_DTO Dashboard_Widget_DTO_Convert_Table_To_DTO(tblDashboard_Widget dashboard_widget_tbl)
        {
            Dashboard_Widget_VM_DTO dashboard_widget_dto = new Dashboard_Widget_VM_DTO();
            try
            {
                dashboard_widget_dto.Id = dashboard_widget_tbl.Id;
                dashboard_widget_dto.Chart_Type = (ChartType)Enums.TryParse(typeof(ChartType), dashboard_widget_tbl.Chart_Type.ToString());
                dashboard_widget_dto.Dashboard_Id = dashboard_widget_tbl.Dashboard_Id;
                dashboard_widget_dto.Widget_Title = dashboard_widget_tbl.Widget_Title;
                dashboard_widget_dto.Is_Deleted = dashboard_widget_tbl.Is_Deleted;
                dashboard_widget_dto.widget_height = dashboard_widget_tbl.widget_height;
                dashboard_widget_dto.widget_width = dashboard_widget_tbl.widget_width;
                dashboard_widget_dto.widget_x = dashboard_widget_tbl.widget_x;
                dashboard_widget_dto.widget_y = dashboard_widget_tbl.widget_y;

                if (dashboard_widget_tbl.tblChart_Gauge.Any())
                    dashboard_widget_dto.GaugeDTO = ChartGaugeDTO_Convert.ChartGaugeDTO_Convert_Table_To_DTO(dashboard_widget_tbl.tblChart_Gauge.FirstOrDefault());
                else if (dashboard_widget_tbl.tblChart_TreeMap.Any())
                    dashboard_widget_dto.TreeMapDTO = ChartTreeMapDTO_Convert.ChartTreeMapDTO_Convert_Table_To_DTO(dashboard_widget_tbl.tblChart_TreeMap.FirstOrDefault());
                else if (dashboard_widget_tbl.tblChart_Bar.Any())
                    dashboard_widget_dto.BarDTO = ChartBarDTO_Convert.ChartBarDTO_Convert_Table_To_DTO(dashboard_widget_tbl.tblChart_Bar.FirstOrDefault());
                else if (dashboard_widget_tbl.tblChart_Pie.Any())
                    dashboard_widget_dto.PieDTO = ChartPieDTO_Convert.ChartPieDTO_Convert_Table_DTO(dashboard_widget_tbl.tblChart_Pie.FirstOrDefault());
                else if (dashboard_widget_tbl.tblChart_Donut.Any())
                    dashboard_widget_dto.DonutDTO = ChartDonutDTO_Convert.ChartDonutDTO_Convert_Table_DTO(dashboard_widget_tbl.tblChart_Donut.FirstOrDefault());
                else if (dashboard_widget_tbl.tblChart_Stacked.Any())
                    dashboard_widget_dto.StackedDTO = ChartStackedDTO_Convert.ChartStackedDTO_Convert_Table_DTO(dashboard_widget_tbl.tblChart_Stacked.FirstOrDefault());
                else if (dashboard_widget_tbl.tblChart_Line.Any())
                    dashboard_widget_dto.LineDTO = ChartLineDTO_Convert.ChartLineDTO_Convert_Table_DTO(dashboard_widget_tbl.tblChart_Line.FirstOrDefault());
                else if (dashboard_widget_tbl.tblChart_Heatmap.Any())
                    dashboard_widget_dto.HeapMapDTO = ChartHeatMapDTO_Convert.ChartHeatMapDTO_Convert_Table_To_DTO(dashboard_widget_tbl.tblChart_Heatmap.FirstOrDefault());
                else if (dashboard_widget_tbl.tblChart_Counter.Any())
                    dashboard_widget_dto.CounterDTO = ChartCounter_Converter.Convert_Table_To_DTO(dashboard_widget_tbl.tblChart_Counter.FirstOrDefault());
            }
            catch (Exception ex)
            {
                throw ex;
            }


            return dashboard_widget_dto;
        }

        public static IList<Dashboard_Widget_VM_DTO> Dashboard_Widget_DTO_Convert_List_Table_To_DTO(ICollection<tblDashboard_Widget> tbl_dashboard_widgets)
        {
            IList<Dashboard_Widget_VM_DTO> dashboard_widget_dto = new List<Dashboard_Widget_VM_DTO>();
            foreach (tblDashboard_Widget tbl_dashboard_widget in tbl_dashboard_widgets)
            {
                dashboard_widget_dto.Add(Dashboard_Widget_DTO_Convert_Table_To_DTO(tbl_dashboard_widget));
            }
            return dashboard_widget_dto;
        }

    }

    #endregion


    #region Dashboard widget view model DTO Dashboards for present the widgets in the dashboard

    [Validator(typeof(Dashboard_Widget_DTOValidation))]
    public class Dashboard_Widget_DTO
    {
        public Dashboard_Widget_DTO(ChartType chart_type)
        {
            switch (chart_type)
            {
                case ChartType.Gauge:
                    this.GaugeDTO = new HashSet<ChartGaugeDTO>();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.TreeMap:
                    this.TreeMapDTO = new HashSet<ChartTreeMapDTO>();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.Bar:
                    this.BarDTO = new HashSet<ChartBarDTO>();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.BarFixedPlacement:
                    this.BarDTO = new HashSet<ChartBarDTO>();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.Pie:
                    this.PieDTO = new HashSet<ChartPieDTO>();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.Donut:
                    this.DonutDTO = new HashSet<ChartDonutDTO>();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.Stacked:
                    this.StackedDTO = new HashSet<ChartStackedDTO>();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.Line:
                    this.LineDTO = new HashSet<ChartLineDTO>();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.HeatMap:
                    this.HeapMapDTO = new HashSet<ChartHeatMapDTO>();
                    this.Chart_Type = chart_type;
                    break;
                case ChartType.Counter:
                    this.CounterDTO = new HashSet<ChartCounterDTO>();
                    this.Chart_Type = chart_type;
                    break;
                default:
                    break;
            }
            this.homepage_widgets = new HomePage_WidgetDTO();
            this.Is_Deleted = false;
        }

        public Dashboard_Widget_DTO()
        {

        }

        public int Id { get; set; }
        public string Widget_Title { get; set; }

        public ChartType Chart_Type { get; set; }

        public int Dashboard_Id { get; set; }

        public ICollection<ChartGaugeDTO> GaugeDTO { get; set; }

        public ICollection<ChartTreeMapDTO> TreeMapDTO { get; set; }

        public ICollection<ChartBarDTO> BarDTO { get; set; }

        public ICollection<ChartPieDTO> PieDTO { get; set; }

        public ICollection<ChartDonutDTO> DonutDTO { get; set; }

        public ICollection<ChartStackedDTO> StackedDTO { get; set; }

        public ICollection<ChartLineDTO> LineDTO { get; set; }

        public ICollection<ChartHeatMapDTO> HeapMapDTO { get; set; }
        public ICollection<ChartCounterDTO> CounterDTO { get; set; }
        public bool Is_Deleted { get; set; }

        public int widget_x { get; set; }

        public int widget_y { get; set; }

        public int widget_width { get; set; }

        public int widget_height { get; set; }

        public HomePage_WidgetDTO homepage_widgets { get; set; }

    }
    public static class Dashboard_Widget_DTO_Convert
    {
        public static tblDashboard_Widget Dashboard_Widget_DTO_Convert_DTO_To_Table(Dashboard_Widget_DTO dashboard_widget_dto)
        {
            tblDashboard_Widget tbl_dashboard_widget = new tblDashboard_Widget();
            try
            {
                tbl_dashboard_widget.Id = dashboard_widget_dto.Id;
                tbl_dashboard_widget.Chart_Type = dashboard_widget_dto.Chart_Type.ToString();
                tbl_dashboard_widget.Dashboard_Id = dashboard_widget_dto.Dashboard_Id;
                tbl_dashboard_widget.Widget_Title = dashboard_widget_dto.Widget_Title;
                tbl_dashboard_widget.Is_Deleted = dashboard_widget_dto.Is_Deleted;

                tbl_dashboard_widget.widget_height = dashboard_widget_dto.widget_height;
                tbl_dashboard_widget.widget_width = dashboard_widget_dto.widget_width;
                tbl_dashboard_widget.widget_x = dashboard_widget_dto.widget_x;
                tbl_dashboard_widget.widget_y = dashboard_widget_dto.widget_y;

                if (dashboard_widget_dto.GaugeDTO != null)
                    tbl_dashboard_widget.tblChart_Gauge = ChartGaugeDTO_Convert.ChartGaugeDTO_Convert_DTO_To_Table(dashboard_widget_dto.GaugeDTO);
                else if (dashboard_widget_dto.TreeMapDTO != null)
                    tbl_dashboard_widget.tblChart_TreeMap = ChartTreeMapDTO_Convert.ChartTreeMapDTO_Convert_DTO_To_Table(dashboard_widget_dto.TreeMapDTO);
                else if (dashboard_widget_dto.BarDTO != null)
                    tbl_dashboard_widget.tblChart_Bar = ChartBarDTO_Convert.ChartBarDTO_Convert_DTO_To_Table(dashboard_widget_dto.BarDTO);
                else if (dashboard_widget_dto.PieDTO != null)
                    tbl_dashboard_widget.tblChart_Pie = ChartPieDTO_Convert.ChartPieDTO_Convert_DTO_Table(dashboard_widget_dto.PieDTO);
                else if (dashboard_widget_dto.DonutDTO != null)
                    tbl_dashboard_widget.tblChart_Donut = ChartDonutDTO_Convert.ChartDonutDTO_Convert_DTO_Table(dashboard_widget_dto.DonutDTO);
                else if (dashboard_widget_dto.StackedDTO != null)
                    tbl_dashboard_widget.tblChart_Stacked = ChartStackedDTO_Convert.ChartStackedDTO_Convert_DTO_Table(dashboard_widget_dto.StackedDTO);
                else if (dashboard_widget_dto.LineDTO != null)
                    tbl_dashboard_widget.tblChart_Line = ChartLineDTO_Convert.ChartLineDTO_Convert_DTO_Table(dashboard_widget_dto.LineDTO);
                else if (dashboard_widget_dto.HeapMapDTO != null)
                    tbl_dashboard_widget.tblChart_Heatmap = ChartHeatMapDTO_Convert.ChartHeatMapDTO_Convert_DTO_To_Table(dashboard_widget_dto.HeapMapDTO);
                else if (dashboard_widget_dto.CounterDTO != null)
                    tbl_dashboard_widget.tblChart_Counter = ChartCounter_Converter.Convert_DTO_To_Table(dashboard_widget_dto.CounterDTO);

            }
            catch (Exception ex)
            {
                throw ex;
            }


            return tbl_dashboard_widget;
        }


        public static Dashboard_Widget_DTO Dashboard_Widget_DTO_Convert_Table_To_DTO(tblDashboard_Widget dashboard_widget_tbl)
        {
            

            Dashboard_Widget_DTO dashboard_widget_dto = new Dashboard_Widget_DTO();
            try
            {
                dashboard_widget_dto.Id = dashboard_widget_tbl.Id;
                dashboard_widget_dto.Chart_Type = (ChartType)Enums.TryParse(typeof(ChartType), dashboard_widget_tbl.Chart_Type.ToString());
                dashboard_widget_dto.Dashboard_Id = dashboard_widget_tbl.Dashboard_Id;
                dashboard_widget_dto.Widget_Title = dashboard_widget_tbl.Widget_Title;
                dashboard_widget_dto.Is_Deleted = dashboard_widget_tbl.Is_Deleted;
                dashboard_widget_dto.widget_height = dashboard_widget_tbl.widget_height;
                dashboard_widget_dto.widget_width = dashboard_widget_tbl.widget_width;
                dashboard_widget_dto.widget_x = dashboard_widget_tbl.widget_x;
                dashboard_widget_dto.widget_y = dashboard_widget_tbl.widget_y;

                //Every widget has only entry in the tblHomePage_Widget, thats why we get only first and default
                dashboard_widget_dto.homepage_widgets = HomePage_WidgetDTO_Converter.Convert(dashboard_widget_tbl.tblHomePage_Widget.FirstOrDefault());

                if (dashboard_widget_tbl.tblChart_Gauge.Any())
                    dashboard_widget_dto.GaugeDTO = ChartGaugeDTO_Convert.ChartGaugeDTO_Convert_Table_To_DTO(dashboard_widget_tbl.tblChart_Gauge);
                else if (dashboard_widget_tbl.tblChart_TreeMap.Any())
                    dashboard_widget_dto.TreeMapDTO = ChartTreeMapDTO_Convert.ChartTreeMapDTO_Convert_Table_To_DTO(dashboard_widget_tbl.tblChart_TreeMap);
                else if (dashboard_widget_tbl.tblChart_Bar.Any())
                    dashboard_widget_dto.BarDTO = ChartBarDTO_Convert.ChartBarDTO_Convert_Table_To_DTO(dashboard_widget_tbl.tblChart_Bar);
                else if (dashboard_widget_tbl.tblChart_Pie.Any())
                    dashboard_widget_dto.PieDTO = ChartPieDTO_Convert.ChartPieDTO_Convert_Table_DTO(dashboard_widget_tbl.tblChart_Pie);
                else if (dashboard_widget_tbl.tblChart_Donut.Any())
                    dashboard_widget_dto.DonutDTO = ChartDonutDTO_Convert.ChartDonutDTO_Convert_Table_DTO(dashboard_widget_tbl.tblChart_Donut);
                else if (dashboard_widget_tbl.tblChart_Stacked.Any())
                    dashboard_widget_dto.StackedDTO = ChartStackedDTO_Convert.ChartStackedDTO_Convert_Table_DTO(dashboard_widget_tbl.tblChart_Stacked);
                else if (dashboard_widget_tbl.tblChart_Line.Any())
                    dashboard_widget_dto.LineDTO = ChartLineDTO_Convert.ChartLineDTO_Convert_Table_DTO(dashboard_widget_tbl.tblChart_Line);
                else if (dashboard_widget_tbl.tblChart_Heatmap.Any())
                    dashboard_widget_dto.HeapMapDTO = ChartHeatMapDTO_Convert.ChartHeatMapDTO_Convert_Table_To_DTO(dashboard_widget_tbl.tblChart_Heatmap);
                else if (dashboard_widget_tbl.tblChart_Counter.Any())
                    dashboard_widget_dto.CounterDTO = ChartCounter_Converter.Convert_Table_To_DTO(dashboard_widget_tbl.tblChart_Counter);
            }
            catch (Exception ex)
            {
                throw ex;
            }


            return dashboard_widget_dto;
        }

        public static IList<Dashboard_Widget_DTO> Dashboard_Widget_DTO_Convert_List_Table_To_DTO(ICollection<tblDashboard_Widget> tbl_dashboard_widgets)
        {
            IList<Dashboard_Widget_DTO> dashboard_widget_dto = new List<Dashboard_Widget_DTO>();
            foreach (tblDashboard_Widget tbl_dashboard_widget in tbl_dashboard_widgets)
            {
                dashboard_widget_dto.Add(Dashboard_Widget_DTO_Convert_Table_To_DTO(tbl_dashboard_widget));
            }
            return dashboard_widget_dto;
        }

    }
    #endregion


    public class Dashboard_Widget_Layout_DTO
    {
        public int widget_id { get; set; }
        public int widget_x { get; set; }

        public int widget_y { get; set; }

        public int widget_width { get; set; }

        public int widget_height { get; set; }
    }

}
