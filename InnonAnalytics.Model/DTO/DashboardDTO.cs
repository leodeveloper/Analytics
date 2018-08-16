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
    [Validator(typeof(DashboardDTOValidator))]
    public class DashboardDTO
    {
        public int Id { get; set; }

        public string Title { get; set; }

        public Accessibility_Type Accessibility { get; set; }

        public string Accessibility_String { get{ return this.Accessibility.ToString(); }  }

        public bool Is_Deleted { get; set; }

        public IEnumerable<Dashboard_Widget_DTO> Dashboard_Widgets { get; set; }

        public int Layout_Option { get; set; }

        public string Layout_Option_Text { get { return Tuples_DTO.Get_Layout_By_Option_Value(this.Layout_Option); } }

        public DashboardType Dashboard_Type { get; set; }

        public int? Parent_Id { get; set; }

        /// <summary>
        /// json formate for the dashboard widgets
        /// </summary>
        public string Widget_Positions { get; set; }
    }

    public static class ConvertDashboard
    {
        public static tblDashboard ConvertDashboardDTO_To_Table(DashboardDTO dashboard)
        {
            tblDashboard tbl_Dashboard = new tblDashboard();
            tbl_Dashboard.Id = dashboard.Id;
            tbl_Dashboard.Layout_Option = dashboard.Layout_Option;
            tbl_Dashboard.Is_Deleted = dashboard.Is_Deleted;
            

            if (dashboard.Accessibility == 0)
                tbl_Dashboard.Accessibility = Accessibility_Type.Private.ToString();
            else
                tbl_Dashboard.Accessibility = dashboard.Accessibility.ToString();


            tbl_Dashboard.Parent_Id = dashboard.Parent_Id;
            tbl_Dashboard.Title = dashboard.Title;
            tbl_Dashboard.Dashboard_Type = dashboard.Dashboard_Type.ToString();
            return tbl_Dashboard;
        }

        public static DashboardDTO ConvertDashboardTable_To_DTO(tblDashboard dashboard)
        {
            DashboardDTO dto_Dashboard = new DashboardDTO();
            try
            {
                dto_Dashboard.Id = dashboard.Id;
                dto_Dashboard.Layout_Option = dashboard.Layout_Option;
                dto_Dashboard.Is_Deleted = dashboard.Is_Deleted;
                dto_Dashboard.Accessibility = (Accessibility_Type)Enums.TryParse(typeof(Accessibility_Type), dashboard.Accessibility.ToString());
                dto_Dashboard.Widget_Positions = dashboard.Widget_Positions;
                dto_Dashboard.Title = dashboard.Title;
                dto_Dashboard.Parent_Id = dashboard.Parent_Id;
                dto_Dashboard.Dashboard_Type = (DashboardType)Enum.Parse(typeof(DashboardType),  dashboard.Dashboard_Type);
                dto_Dashboard.Dashboard_Widgets = Dashboard_Widget_DTO_Convert.Dashboard_Widget_DTO_Convert_List_Table_To_DTO(dashboard.tblDashboard_Widget);
            }
            catch { }           
            
            return dto_Dashboard;
        }

        public static IList<DashboardDTO> ConvertDashboard_List_Table_To_DTO(IList<tblDashboard> dashboards)
        {
            IList<DashboardDTO> dto_Dashboards = new List<DashboardDTO>();

            foreach(tblDashboard tbl_Dashboard in dashboards)
            {
                dto_Dashboards.Add(ConvertDashboardTable_To_DTO(tbl_Dashboard));
            }

            return dto_Dashboards;
        }


    }


    public class Dashboard_Menu_DTO
    {

        public Dashboard_Menu_DTO()
        {
            this.Child_Menu = new HashSet<Dashboard_Menu_DTO>();
        }

        public int Id { get; set; }

        public string Title { get; set; }

        public DashboardType Dashboard_Type { get; set; }

        public int? Parent_Dashboard_Id { get; set; }

        public ICollection<Dashboard_Menu_DTO> Child_Menu { get; set; } 
    }

    public class Dashboard_Menu_DTO_Converter
    {
        public static IList<Dashboard_Menu_DTO> Dashboard_Menu_DTO_Converter_list_Table_To_DTO(IList<tblDashboard> _tbl_Dashboards)
        {
            IList<Dashboard_Menu_DTO> dashboard_menu = new List<Dashboard_Menu_DTO>();

            foreach(tblDashboard _tbl_Dashboard in _tbl_Dashboards)
            {
                dashboard_menu.Add(Dashboard_Menu_DTO_Converter_Table_To_DTO(_tbl_Dashboard));
            }
            return dashboard_menu;
        }

        public static Dashboard_Menu_DTO Dashboard_Menu_DTO_Converter_Table_To_DTO(tblDashboard _tbl_Dashboard)
        {
            Dashboard_Menu_DTO dashboard_menu = new Dashboard_Menu_DTO();
            dashboard_menu.Id = _tbl_Dashboard.Id;
            dashboard_menu.Title = _tbl_Dashboard.Title;
            dashboard_menu.Parent_Dashboard_Id = _tbl_Dashboard.Parent_Id;           
            dashboard_menu.Child_Menu = Dashboard_Menu_DTO_Converter_list_Table_To_DTO(_tbl_Dashboard.tblDashboard1.ToList());
            dashboard_menu.Dashboard_Type = (DashboardType)Enum.Parse(typeof(DashboardType), _tbl_Dashboard.Dashboard_Type);
            return dashboard_menu;

            
        }
    }
}
