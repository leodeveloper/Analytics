using System;
using InnonAnalytics.Model.DTO;
using System.Collections.Generic;
using InnonAnalytics.Common.Enums;

namespace InnonAnalytics.Service.Repository
{
    public interface IDashboardRepository
    {
        int Create_Dashboard(DashboardDTO dashboard, string user_id);
      //  long Add_Dashboard_Widget(DashboardWidgetDTO dashboard_widget);
        long Add_Dashboard_Widget(Dashboard_Widget_VM_DTO dashboard_widget);

        long Edit_Dashboard_Widget(Dashboard_Widget_VM_DTO dashboard_widget);

        DashboardDTO Get_Dashboard_By_Id(int Id);
        IList<Dashboard_Widget_DTO> Get_Dashboard_Widget_By_Dashboard_Id(int Dashboard_Id);
        Dashboard_Widget_DTO Get_Dashboard_Widget_By_Id(int Id);

        Dashboard_Widget_VM_DTO Get_Dashboard_Widget_By_Id_New_Chart(int widget_Id);

        IList<DashboardDTO> Get_Dashboard_Is_Deleted(bool Is_Deleted);
        void Remove_Widget_From_Dashboard(long widget_id);

        void Remove_Widget_From_Dashboard_When_All_Chart_Set_Is_Deleted(long _id, ChartType _chart_type);
        bool User_Dashboard_Update(List<Dashboard_Menu_DTO> dashboarddto, IEnumerable<string> user_ids);
        void Change_Dashboard_Layout(int dashboard_id, int layout_id);
        Dashboard_Widget_DTO Get_Dashboard_Widget_Chart_Type(ChartType chart_type);
        IList<DashboardDTO> Get_All_Parent_Dashboards();
        IList<DashboardDTO> Get_All_Parent_Dashboards(string user_id);
        IList<Dashboard_Menu_DTO> Get_All_Parent_Child_Dashboards();
        IList<Dashboard_Menu_DTO> Get_Dashboard_Menu();
        IList<Dashboard_Menu_DTO> Get_Dashboard_Menu_ByID(int? menuID);

        IList<Dashboard_Menu_DTO> Get_Dashboard_Menu_ByID_ByUserId(int? menuID, string user_ID);

        IList<Dashboard_Menu_DTO> Get_All_Parent_Child_Dashboards_By_User_Id(IEnumerable<string> user_ids);

        void Save_Dashboard_Widget_Layout(IList<Dashboard_Widget_Layout_DTO> dashboard_widgets_dto_layout);

        void Save_Homepage_Widget_Layout(IList<Dashboard_Widget_Layout_DTO> dashboard_widgets_dto_layout, string user_id);

        DashboardDTO Get_Dashboard(int Id, string User_Id);
        IList<Dashboard_Widget_DTO> Get_Dashboard_Widget_For_Home_Page_By_User_ID(string user_id);
    }
}
