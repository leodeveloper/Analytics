using FluentValidation.Attributes;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.Common.Static_Resources;
using InnonAnalytics.Model.DTOValidators;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    [Validator(typeof(DashboardWidgetDTOValidator))]
    public class DashboardWidgetDTO
    {
        public int Id { get; set; }
        public string Name_Widget { get; set; }

        public int Timeline_Option { get; set; }

        public string Timeline_By_Option_Text { get { return Tuples_DTO.Get_Timeline_Option_Value(this.Timeline_Option); } }

        public DateTime? From_Date { get; set; }
        public DateTime? To_Date { get; set; }
        public int Compare_Timeline_Option { get; set; }
        public string Compare_Timeline_By_Option_Text { get { return Tuples_DTO.Get_Timeline_Option_Value(this.Compare_Timeline_Option); } }

        public DateTime? Compare_From_Date { get; set; }
        public DateTime? Compare_To_Date { get; set; }

        public ChartType Chart_Type { get; set; }

        public int Time_Table { get; set; }

        public int Roll_Up { get; set; }

        public int Group_By { get; set; }

        public int Filter_By { get; set; }

        public int Filter_By_Option { get; set; }

        /// <summary>
        /// This following property return Text against the value the  Filter_By_Option
        /// </summary>
        public string Filter_By_Option_Text { get { return Tuples_DTO.Get_Filter_By_Option_Value(this.Filter_By_Option); } }

        public string Filter_Text { get; set; }

        public int Dashboard_Id { get; set; }
     //   public DashboardDTO Dashboard { get; set; }

        public bool Is_Deleted { get; set; }

        public int Metric_Id { get; set; }

        public int? Target_Metric_Id { get; set; }
    }

    public static class Convert_DashboardWidget
    {
        //public static DashboardWidgetDTO Convert_Table_To_Dto(tblDashboardWidget tbl_dashboard_widget)
        //{
        //    DashboardWidgetDTO dto_dashboard_widget = new DashboardWidgetDTO();
        //    dto_dashboard_widget.Id = tbl_dashboard_widget.Id;
        //    dto_dashboard_widget.Name_Widget = tbl_dashboard_widget.Name_Widget;
        //    dto_dashboard_widget.Timeline_Option = tbl_dashboard_widget.Timeline;
        //    dto_dashboard_widget.From_Date = tbl_dashboard_widget.From_Date;
        //    dto_dashboard_widget.To_Date = tbl_dashboard_widget.To_Date;
        //    dto_dashboard_widget.Compare_Timeline_Option = tbl_dashboard_widget.Compare_Timeline;
        //    dto_dashboard_widget.Compare_From_Date = tbl_dashboard_widget.Compare_From_Date;
        //    dto_dashboard_widget.Compare_To_Date = tbl_dashboard_widget.Compare_To_Date;
        //    dto_dashboard_widget.Chart_Type = (ChartType)Enums.TryParse(typeof(ChartType), tbl_dashboard_widget.Chart_Type.ToString());
        //    dto_dashboard_widget.Time_Table = tbl_dashboard_widget.Time_Table;
        //    dto_dashboard_widget.Roll_Up = tbl_dashboard_widget.Roll_Up;
        //    dto_dashboard_widget.Group_By = tbl_dashboard_widget.Group_By;
        //    dto_dashboard_widget.Filter_By = tbl_dashboard_widget.Filter_By;
        //    dto_dashboard_widget.Filter_By_Option = tbl_dashboard_widget.Filter_By_Options;
        //    dto_dashboard_widget.Filter_Text = tbl_dashboard_widget.Filter_Text;
        //    dto_dashboard_widget.Dashboard_Id = tbl_dashboard_widget.Dashboard_Id;
        //    dto_dashboard_widget.Is_Deleted = tbl_dashboard_widget.Is_Deleted;
        //   // dto_dashboard_widget.Dashboard = ConvertDashboard.ConvertDashboardTable_To_DTO(tbl_dashboard_widget.tblDashboard);
        //    dto_dashboard_widget.Metric_Id = tbl_dashboard_widget.Metric_Id;
        //    dto_dashboard_widget.Target_Metric_Id = tbl_dashboard_widget.Target_Metric_Id;
        //    return dto_dashboard_widget;
        //}

        /// <summary>
        /// list Convertion of Database Table to DTO
        /// </summary>
        /// <param name="tbl_dashboard_widgets"></param>
        /// <returns type="IList<DashboardWidgetDTO>" ></returns>
        //public static IList<DashboardWidgetDTO> Convert_list_Table_To_Dto(IEnumerable<tblDashboardWidget> tbl_dashboard_widgets)
        //{
        //    try
        //    {
        //        IList<DashboardWidgetDTO> dto_dashboard_widgets = new List<DashboardWidgetDTO>();
        //        foreach (var tbl_dashboard_widget in tbl_dashboard_widgets)
        //        {
        //            dto_dashboard_widgets.Add(Convert_Table_To_Dto(tbl_dashboard_widget));
        //        }

        //        return dto_dashboard_widgets;
        //    }
        //    catch (Exception ex)
        //    {
        //        throw ex;
        //    }
        //}

        //public static tblDashboardWidget Convert_Dto_To_Table(DashboardWidgetDTO dto_dashboard_widget)
        //{
        //    tblDashboardWidget tbl_dashboard_widget = new tblDashboardWidget();
        //    tbl_dashboard_widget.Id = dto_dashboard_widget.Id;
        //    tbl_dashboard_widget.Name_Widget = dto_dashboard_widget.Name_Widget;
        //    tbl_dashboard_widget.Timeline = dto_dashboard_widget.Timeline_Option;
        //    tbl_dashboard_widget.From_Date = dto_dashboard_widget.From_Date;
        //    tbl_dashboard_widget.To_Date = dto_dashboard_widget.To_Date;

        //    tbl_dashboard_widget.Compare_Timeline = dto_dashboard_widget.Compare_Timeline_Option;
        //    tbl_dashboard_widget.Compare_From_Date = dto_dashboard_widget.Compare_From_Date;
        //    tbl_dashboard_widget.Compare_To_Date = dto_dashboard_widget.Compare_To_Date;

        //    tbl_dashboard_widget.Chart_Type = dto_dashboard_widget.Chart_Type.ToString();
        //    tbl_dashboard_widget.Time_Table = dto_dashboard_widget.Time_Table;
        //    tbl_dashboard_widget.Roll_Up = dto_dashboard_widget.Roll_Up;
        //    tbl_dashboard_widget.Group_By = dto_dashboard_widget.Group_By;
        //    tbl_dashboard_widget.Filter_By = dto_dashboard_widget.Filter_By;
        //    tbl_dashboard_widget.Filter_By_Options = dto_dashboard_widget.Filter_By_Option;
        //    tbl_dashboard_widget.Filter_Text = dto_dashboard_widget.Filter_Text;
        //    tbl_dashboard_widget.Dashboard_Id = dto_dashboard_widget.Dashboard_Id;
        //    tbl_dashboard_widget.Is_Deleted = dto_dashboard_widget.Is_Deleted;
        //    tbl_dashboard_widget.Metric_Id = dto_dashboard_widget.Metric_Id;
        //    tbl_dashboard_widget.Target_Metric_Id = dto_dashboard_widget.Target_Metric_Id;
        //    return tbl_dashboard_widget;
        //}
    }
}

