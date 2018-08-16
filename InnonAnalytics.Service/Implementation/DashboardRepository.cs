using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Exceptions;
using InnonAnalytics.Service.Repository;
using InnonAnalytics.DataWareHouseService.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using InnonAnalytics.DataWareHouseService.Service;
using InnonAnalytics.Common.Enums;


namespace InnonAnalytics.Service.Implementation
{
    public class DashboardRepository : IDashboardRepository
    {
         private IInnonAnalyticsEngineEntities _dbcontext;
         private IMetricRepository _metric_rep;

        public DashboardRepository(IInnonAnalyticsEngineEntities db)
        {
            _dbcontext = db;          

        }

        public DashboardRepository(IInnonAnalyticsEngineEntities db, IMetricRepository metric_rep)
         {
             _dbcontext = db;
             _metric_rep = metric_rep;
           
         }

         public int Create_Dashboard(DashboardDTO dashboard, string user_id)
         {

             tblDashboard tbl_dashboard = _dbcontext.tblDashboards.Find(dashboard.Id);
            if (tbl_dashboard == null)
            {
                AspNetUserDashboard aspnetuser_dashbaord = new AspNetUserDashboard() { User_Id = user_id };
                tbl_dashboard = _dbcontext.tblDashboards.Add(ConvertDashboard.ConvertDashboardDTO_To_Table(dashboard));
                tbl_dashboard.AspNetUserDashboards.Add(aspnetuser_dashbaord);
                
            }
            else
            {
                tblDashboard tbl_dashboard_new = ConvertDashboard.ConvertDashboardDTO_To_Table(dashboard);
                _dbcontext.Entry(tbl_dashboard).CurrentValues.SetValues(tbl_dashboard_new);
            }
                 


             _dbcontext.SaveChanges();
             return tbl_dashboard.Id;
         }

        /// <summary>
        /// update only dashboard widget layout position
        /// </summary>
        /// <param name="dashboard_widgets_dto_layout"></param>
         public void Save_Dashboard_Widget_Layout(IList<Dashboard_Widget_Layout_DTO> dashboard_widgets_dto_layout)
         {
             try
             {
                 IEnumerable<int> widget_ids = dashboard_widgets_dto_layout.Select(widget => widget.widget_id);
                 IQueryable<tblDashboard_Widget> tbl_dashboard_widgets = _dbcontext.tblDashboard_Widget.Where(widgets => widget_ids.Contains(widgets.Id));
                 Dashboard_Widget_Layout_DTO dashboard_widget_dto_layout;
                 foreach (tblDashboard_Widget tbl_dashboard_widget in tbl_dashboard_widgets)
                 {
                     try
                     {
                         dashboard_widget_dto_layout = dashboard_widgets_dto_layout.SingleOrDefault(widgets => widgets.widget_id == tbl_dashboard_widget.Id);

                         if (dashboard_widget_dto_layout != null)
                         {
                             tbl_dashboard_widget.widget_height = dashboard_widget_dto_layout.widget_height;
                             tbl_dashboard_widget.widget_width = dashboard_widget_dto_layout.widget_width;
                             tbl_dashboard_widget.widget_x = dashboard_widget_dto_layout.widget_x;
                             tbl_dashboard_widget.widget_y = dashboard_widget_dto_layout.widget_y;
                         }
                     }
                     catch (Exception ex)
                     {

                     }
                 }
                 _dbcontext.SaveChanges();
             }
             catch(Exception ex)
             {
                 throw ex;
             }            

         }


        /// <summary>
        /// update only homepage widget layout position
        /// </summary>
        /// <param name="dashboard_widgets_dto_layout"></param>
        public void Save_Homepage_Widget_Layout(IList<Dashboard_Widget_Layout_DTO> dashboard_widgets_dto_layout, string user_id)
        {
            try
            {
                IEnumerable<int> widget_ids = dashboard_widgets_dto_layout.Select(widget => widget.widget_id);
                IQueryable<tblHomePage_Widget> tbl_dashboard_widgets = _dbcontext.tblHomePage_Widget.Where(widgets => widget_ids.Contains(widgets.Widget_Id) && widgets.User_Id == user_id);
                Dashboard_Widget_Layout_DTO dashboard_widget_dto_layout;
                foreach (tblHomePage_Widget tbl_dashboard_widget in tbl_dashboard_widgets)
                {
                    try
                    {
                        dashboard_widget_dto_layout = dashboard_widgets_dto_layout.SingleOrDefault(widgets => widgets.widget_id == tbl_dashboard_widget.Widget_Id);

                        if (dashboard_widget_dto_layout != null)
                        {
                            tbl_dashboard_widget.widget_height = dashboard_widget_dto_layout.widget_height;
                            tbl_dashboard_widget.widget_width = dashboard_widget_dto_layout.widget_width;
                            tbl_dashboard_widget.widget_x = dashboard_widget_dto_layout.widget_x;
                            tbl_dashboard_widget.widget_y = dashboard_widget_dto_layout.widget_y;
                        }
                    }
                    catch (Exception ex)
                    {

                    }
                }
                _dbcontext.SaveChanges();
            }
            catch (Exception ex)
            {
                throw ex;
            }

        }



        public long Add_Dashboard_Widget(Dashboard_Widget_VM_DTO dashboard_widget)
         {
             try
             {
                 dashboard_widget = Set_Primary_Key_For_Multi_Metrics(dashboard_widget);
                 tblDashboard_Widget tbl_dashboard_widget = _dbcontext.tblDashboard_Widget.Add(Dashboard_Widget_VM_DTO_Convert.Dashboard_Widget_DTO_Convert_DTO_To_Table(dashboard_widget));
                 _dbcontext.SaveChanges();
                 return tbl_dashboard_widget.Id;
             }
             catch (Exception ex)
             {
                 throw ex;
             }             
         }

        

        /// <summary>
        /// This function only those charts which has mutiple metrics
        /// </summary>
        /// <param name="dashboard_widget"></param>
        /// <returns></returns>
         private Dashboard_Widget_VM_DTO Set_Primary_Key_For_Multi_Metrics(Dashboard_Widget_VM_DTO dashboard_widget)
         {
             if (dashboard_widget.StackedDTO != null)
             {
                 IEnumerable<tblChart_Metric> tbl_chart_metric = _dbcontext.tblChart_Metric.Where(chart_metric => chart_metric.Stacked_Chart_Id == dashboard_widget.StackedDTO.Id);
                 if (tbl_chart_metric != null)
                 {
                     _dbcontext.tblChart_Metric.RemoveRange(tbl_chart_metric);
                     _dbcontext.SaveChanges();
                 }

                 foreach (int metric_id in dashboard_widget.StackedDTO.Chart_Metric_Ids)
                 {
                    
                     dashboard_widget.StackedDTO.Chart_Id_Metric_Ids.Add(new Chart_Id_Metric_Ids() { Chart_Metric_Id = 0, Metric_Id = metric_id });
                 }
             }

            if (dashboard_widget.LineDTO != null)
            {
                IEnumerable<tblChart_Metric> tbl_chart_metric = _dbcontext.tblChart_Metric.Where(chart_metric => chart_metric.Line_Chart_Id == dashboard_widget.LineDTO.Id);
                if (tbl_chart_metric != null)
                {
                    _dbcontext.tblChart_Metric.RemoveRange(tbl_chart_metric);
                    _dbcontext.SaveChanges();
                }

                foreach (int metric_id in dashboard_widget.LineDTO.Chart_Metric_Ids)
                {

                    dashboard_widget.LineDTO.Chart_Id_Metric_Ids.Add(new Chart_Id_Metric_Ids() { Chart_Metric_Id = 0, Metric_Id = metric_id });
                }
            }

            if (dashboard_widget.PieDTO != null)
             {
                 IEnumerable<tblChart_Metric> tbl_chart_metric = _dbcontext.tblChart_Metric.Where(chart_metric => chart_metric.Pie_Chart_Id == dashboard_widget.PieDTO.Id);
                 if (tbl_chart_metric != null)
                 {
                     _dbcontext.tblChart_Metric.RemoveRange(tbl_chart_metric);
                     _dbcontext.SaveChanges();
                 }
                 foreach (int metric_id in dashboard_widget.PieDTO.Chart_Metric_Ids)
                 {                     
                     dashboard_widget.PieDTO.Chart_Id_Metric_Ids.Add(new Chart_Id_Metric_Ids() { Chart_Metric_Id = 0, Metric_Id = metric_id });
                 }
             }

             if (dashboard_widget.DonutDTO != null)
             {
                 IEnumerable<tblChart_Metric> tbl_chart_metric = _dbcontext.tblChart_Metric.Where(chart_metric => chart_metric.Donut_Chart_Id == dashboard_widget.DonutDTO.Id);
                 if (tbl_chart_metric != null)
                 {
                     _dbcontext.tblChart_Metric.RemoveRange(tbl_chart_metric);
                     _dbcontext.SaveChanges();
                 }
                 foreach (int metric_id in dashboard_widget.DonutDTO.Chart_Metric_Ids)
                 {
                     dashboard_widget.DonutDTO.Chart_Id_Metric_Ids.Add(new Chart_Id_Metric_Ids() { Chart_Metric_Id = 0, Metric_Id = metric_id });
                 }
             }


             return dashboard_widget;
         }

         public long Edit_Dashboard_Widget(Dashboard_Widget_VM_DTO dashboard_widget)
         {
             try
             {

                 dashboard_widget = Set_Primary_Key_For_Multi_Metrics(dashboard_widget);

                 tblDashboard_Widget tbl_dashboard_widget = _dbcontext.tblDashboard_Widget.Find(dashboard_widget.Id);
                 tblDashboard_Widget tbl_dashboard_widget_new = Dashboard_Widget_VM_DTO_Convert.Dashboard_Widget_DTO_Convert_DTO_To_Table(dashboard_widget);
                 _dbcontext.Entry(tbl_dashboard_widget).CurrentValues.SetValues(tbl_dashboard_widget_new);



                 foreach (tblChart_Gauge tbl_dashboard_widget_Chart in tbl_dashboard_widget_new.tblChart_Gauge)
                 {
                     if (tbl_dashboard_widget_Chart.Id > 0)
                     {
                         _dbcontext.tblChart_Gauge.Attach(tbl_dashboard_widget_Chart);
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Modified;
                     }
                     else
                     {
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Added;
                     }
                 }

                 foreach (tblChart_Bar tbl_dashboard_widget_Chart in tbl_dashboard_widget_new.tblChart_Bar)
                 {

                     if (tbl_dashboard_widget_Chart.Id > 0)
                     {
                         _dbcontext.tblChart_Bar.Attach(tbl_dashboard_widget_Chart);
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Modified;
                     }
                     else
                     {
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Added;
                     }
                 }

                 foreach (tblChart_TreeMap tbl_dashboard_widget_Chart in tbl_dashboard_widget_new.tblChart_TreeMap)
                 {
                     if (tbl_dashboard_widget_Chart.Id > 0)
                     {
                         _dbcontext.tblChart_TreeMap.Attach(tbl_dashboard_widget_Chart);
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Modified;
                     }
                     else
                     {
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Added;
                     }
                 }

                 foreach (tblChart_Pie tbl_dashboard_widget_Chart in tbl_dashboard_widget_new.tblChart_Pie)
                 {

                     foreach (tblChart_Metric tbl_chart_metric in tbl_dashboard_widget_Chart.tblChart_Metric)
                     {
                         _dbcontext.Entry(tbl_chart_metric).State = System.Data.Entity.EntityState.Added;
                     }

                     if (tbl_dashboard_widget_Chart.Id > 0)
                     {
                         _dbcontext.tblChart_Pie.Attach(tbl_dashboard_widget_Chart);
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Modified;
                     }
                     else
                     {
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Added;
                     }

                   
                 }

                 foreach (tblChart_Donut tbl_dashboard_widget_Chart in tbl_dashboard_widget_new.tblChart_Donut)
                 {

                     foreach (tblChart_Metric tbl_chart_metric in tbl_dashboard_widget_Chart.tblChart_Metric)
                     {
                         _dbcontext.Entry(tbl_chart_metric).State = System.Data.Entity.EntityState.Added;
                     }                  

                     if (tbl_dashboard_widget_Chart.Id > 0)
                     {
                         _dbcontext.tblChart_Donut.Attach(tbl_dashboard_widget_Chart);
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Modified;
                     }
                     else
                     {
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Added;
                     }
                 }

                 foreach (tblChart_Stacked tbl_dashboard_widget_Chart in tbl_dashboard_widget_new.tblChart_Stacked)
                 {   

                     foreach (tblChart_Metric tbl_chart_metric in tbl_dashboard_widget_Chart.tblChart_Metric)
                     {                       
                         _dbcontext.Entry(tbl_chart_metric).State = System.Data.Entity.EntityState.Added;
                     }

                     if (tbl_dashboard_widget_Chart.Id > 0)
                     {
                         _dbcontext.tblChart_Stacked.Attach(tbl_dashboard_widget_Chart);
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Modified;
                     }
                     else
                     {
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Added;
                     }
                     
                  
                 }

                foreach (tblChart_Line tbl_dashboard_widget_Chart in tbl_dashboard_widget_new.tblChart_Line)
                {

                    foreach (tblChart_Metric tbl_chart_metric in tbl_dashboard_widget_Chart.tblChart_Metric)
                    {
                        _dbcontext.Entry(tbl_chart_metric).State = System.Data.Entity.EntityState.Added;
                    }

                    if (tbl_dashboard_widget_Chart.Id > 0)
                    {
                        _dbcontext.tblChart_Line.Attach(tbl_dashboard_widget_Chart);
                        _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Modified;
                    }
                    else
                    {
                        _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Added;
                    }


                }

                foreach (tblChart_Heatmap tbl_dashboard_widget_Chart in tbl_dashboard_widget_new.tblChart_Heatmap)
                 {
                     if (tbl_dashboard_widget_Chart.Id > 0)
                     {
                         _dbcontext.tblChart_Heatmap.Attach(tbl_dashboard_widget_Chart);
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Modified;
                     }
                     else
                     {
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Added;
                     }

                 }

                 foreach (tblChart_Counter tbl_dashboard_widget_Chart in tbl_dashboard_widget_new.tblChart_Counter)
                 {
                     if (tbl_dashboard_widget_Chart.Id > 0)
                     {
                         _dbcontext.tblChart_Counter.Attach(tbl_dashboard_widget_Chart);
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Modified;
                     }
                     else
                     {
                         _dbcontext.Entry(tbl_dashboard_widget_Chart).State = System.Data.Entity.EntityState.Added;
                     }

                 }

                 _dbcontext.SaveChanges();
                 return tbl_dashboard_widget.Id;
             }
             catch (Exception ex)
             {
                 throw ex;
             }
         }



         public DashboardDTO Get_Dashboard(int Id, string User_Id)
         {

             tblDashboard tbl_dashboard = _dbcontext.tblDashboards.SingleOrDefault(dashboard => dashboard.Id == Id && dashboard.Is_Deleted == false);

             if(tbl_dashboard != null)
             {
                 tbl_dashboard.tblDashboard_Widget = tbl_dashboard.tblDashboard_Widget.Where(widget => widget.Is_Deleted == false).ToList();

                foreach (tblDashboard_Widget dashboard_widget in tbl_dashboard.tblDashboard_Widget)
                {
                    dashboard_widget.tblChart_TreeMap = dashboard_widget.tblChart_TreeMap.Where(bar => bar.Is_Deleted == false).ToList();
                    dashboard_widget.tblChart_Bar = dashboard_widget.tblChart_Bar.Where(bar => bar.Is_Deleted == false).ToList();
                    dashboard_widget.tblChart_Donut = dashboard_widget.tblChart_Donut.Where(donut => donut.Is_Deleted == false).ToList();
                    dashboard_widget.tblChart_Gauge = dashboard_widget.tblChart_Gauge.Where(gauge => gauge.Is_Deleted == false).ToList();
                    dashboard_widget.tblChart_Heatmap = dashboard_widget.tblChart_Heatmap.Where(heatmap => heatmap.Is_Deleted == false).ToList();
                    dashboard_widget.tblChart_Pie = dashboard_widget.tblChart_Pie.Where(pie => pie.Is_Deleted == false).ToList();
                    dashboard_widget.tblChart_Stacked = dashboard_widget.tblChart_Stacked.Where(stacked => stacked.Is_Deleted == false).ToList();
                    dashboard_widget.tblChart_Line = dashboard_widget.tblChart_Line.Where(line => line.Is_Deleted == false).ToList();
                    dashboard_widget.tblChart_Counter = dashboard_widget.tblChart_Counter.Where(counter => counter.Is_Deleted == false).ToList();
                    dashboard_widget.tblHomePage_Widget = dashboard_widget.tblHomePage_Widget.Where(homepagewidget => homepagewidget.User_Id == User_Id).ToList();
                }
             }

             return ConvertDashboard.ConvertDashboardTable_To_DTO(tbl_dashboard);
             
         }
       

        public DashboardDTO Get_Dashboard_By_Id(int Id)
        {
            try
            {
                tblDashboard tbl_dashboard = _dbcontext.tblDashboards.SingleOrDefault(dashboard => dashboard.Id == Id );
                if (tbl_dashboard == null)
                    throw new DashboardException(Resources.DashboardException);

                return ConvertDashboard.ConvertDashboardTable_To_DTO(tbl_dashboard);
            }
            catch(Exception ex)
            {
                throw ex;
            }
            
        }


        /// <summary>
        /// Get only child dashboards
        /// </summary>
        /// <param name="Is_Deleted"></param>
        /// <returns></returns>
        public IList<DashboardDTO> Get_Dashboard_Is_Deleted(bool Is_Deleted)
        {
            IList<tblDashboard> tbl_dashboards = _dbcontext.tblDashboards.Where(dashboard => dashboard.Is_Deleted == Is_Deleted && dashboard.Parent_Id != null).ToList();
            return ConvertDashboard.ConvertDashboard_List_Table_To_DTO(tbl_dashboards);
        }

        /// <summary>
        /// All dashboards parent_id=null are parent dashboards
        /// </summary>
        /// <returns></returns>
        public IList<DashboardDTO> Get_All_Parent_Dashboards()
        {
            IList<tblDashboard> tbl_dashboards = _dbcontext.tblDashboards.Where(dashboard => dashboard.Is_Deleted == false && dashboard.Dashboard_Type == DashboardType.Folder.ToString()).ToList();
            return ConvertDashboard.ConvertDashboard_List_Table_To_DTO(tbl_dashboards);
        }

        public IList<DashboardDTO> Get_All_Parent_Dashboards(string user_id)
        {
            IList<tblDashboard> tbl_dashboards = _dbcontext.AspNetUserDashboards.Where(userdashboard => userdashboard.User_Id == user_id &&
            userdashboard.tblDashboard.Is_Deleted == false && userdashboard.tblDashboard.Dashboard_Type == DashboardType.Folder.ToString())
            .Select(user_dashboar => user_dashboar.tblDashboard).ToList();
                
                //.tblDashboards.Where(dashboard => dashboard.Is_Deleted == false && dashboard.Dashboard_Type == DashboardType.Folder.ToString()).ToList();
            return ConvertDashboard.ConvertDashboard_List_Table_To_DTO(tbl_dashboards);
        }


        public IList<Dashboard_Menu_DTO> Get_All_Parent_Child_Dashboards()
        {
            IList<tblDashboard> tbl_dashboards = _dbcontext.tblDashboards.Where(dashboard => dashboard.Is_Deleted == false).ToList();
            return Dashboard_Menu_DTO_Converter.Dashboard_Menu_DTO_Converter_list_Table_To_DTO(tbl_dashboards);
        }

        public IList<Dashboard_Menu_DTO> Get_All_Parent_Child_Dashboards_By_User_Id(IEnumerable<string> user_ids)
        {
            IList<tblDashboard> tbl_dashboards = _dbcontext.AspNetUserDashboards.Where(userdashboard => user_ids.Contains(userdashboard.User_Id)).Select(dashboard => dashboard.tblDashboard).ToList();
            return Dashboard_Menu_DTO_Converter.Dashboard_Menu_DTO_Converter_list_Table_To_DTO(tbl_dashboards);
        }

        public IList<Dashboard_Menu_DTO> Get_Dashboard_Menu()
        {
            IList<tblDashboard> tbl_dashboards = _dbcontext.tblDashboards.Where(dashboard => dashboard.Is_Deleted == false && dashboard.Parent_Id == null).ToList();
            return Dashboard_Menu_DTO_Converter.Dashboard_Menu_DTO_Converter_list_Table_To_DTO(tbl_dashboards);
        }

        public IList<Dashboard_Menu_DTO> Get_Dashboard_Menu_ByID(int? menuID)
        {
            _dbcontext = new InnonAnalyticsEngineEntities();
            IList<tblDashboard> tbl_dashboards = (from e in _dbcontext.tblDashboards
                                                  where (menuID.HasValue ? e.Parent_Id == menuID : e.Parent_Id == null) && 
                                                  e.Is_Deleted == false
                                                  orderby e.Title 
                                                select e ).ToList();
            return Dashboard_Menu_DTO_Converter.Dashboard_Menu_DTO_Converter_list_Table_To_DTO(tbl_dashboards);
        }

        public IList<Dashboard_Menu_DTO> Get_Dashboard_Menu_ByID_ByUserId(int? menuID, string user_ID)
        {
            _dbcontext = new InnonAnalyticsEngineEntities();


            IList<tblDashboard> tbl_dashboards = _dbcontext.AspNetUserDashboards.Where(userdashboard => userdashboard.User_Id == user_ID)
                .Select(dashboard => dashboard.tblDashboard).ToList();

            tbl_dashboards = (from e in tbl_dashboards
                              where (menuID.HasValue ? e.Parent_Id == menuID : e.Parent_Id == null) &&
                              e.Is_Deleted == false
                              orderby e.Title
                              select e).ToList();


            return Dashboard_Menu_DTO_Converter.Dashboard_Menu_DTO_Converter_list_Table_To_DTO(tbl_dashboards);
        }

        public IList<Dashboard_Widget_DTO> Get_Dashboard_Widget_By_Dashboard_Id(int Dashboard_Id)
        {
            IList<tblDashboard_Widget> tbl_dashboard_widgets = _dbcontext.tblDashboard_Widget.Where(DashboardWidget => DashboardWidget.Dashboard_Id == Dashboard_Id).ToList();
            return Dashboard_Widget_DTO_Convert.Dashboard_Widget_DTO_Convert_List_Table_To_DTO(tbl_dashboard_widgets);
        }

        public IList<Dashboard_Widget_DTO> Get_Dashboard_Widget_For_Home_Page_By_User_ID(string user_id)
        {          

            IList<tblDashboard_Widget> tbl_dashboard_widgets = (from dashboardwidget in _dbcontext.tblDashboard_Widget
                              join homepage_widget in _dbcontext.tblHomePage_Widget on  dashboardwidget equals homepage_widget.tblDashboard_Widget into dh
                              from homepage_widget in dh.DefaultIfEmpty()
                              where homepage_widget.User_Id == user_id 
                              select dashboardwidget).ToList();


            foreach (var tbl_dashboard_widget in tbl_dashboard_widgets)
            {
                tbl_dashboard_widget.tblHomePage_Widget = tbl_dashboard_widget.tblHomePage_Widget.Where(s => s.User_Id == user_id).ToList();
            }
            return Dashboard_Widget_DTO_Convert.Dashboard_Widget_DTO_Convert_List_Table_To_DTO(tbl_dashboard_widgets);
        }

        public Dashboard_Widget_DTO Get_Dashboard_Widget_By_Id(int Id)
        {
            tblDashboard_Widget tbl_dashboard_widget = _dbcontext.tblDashboard_Widget.SingleOrDefault(DashboardWidget => DashboardWidget.Id == Id);
            if (tbl_dashboard_widget != null)
                return Dashboard_Widget_DTO_Convert.Dashboard_Widget_DTO_Convert_Table_To_DTO(tbl_dashboard_widget);
            else
                return null; 
        }

        /// <summary>
        /// this method use for to add new tab into the widget, tblDashboard_Widget will not change, only add new chart
        /// </summary>
        /// <param name="Id"></param>
        /// <returns></returns>
        public Dashboard_Widget_VM_DTO Get_Dashboard_Widget_By_Id_New_Chart(int widget_Id)
        {
            tblDashboard_Widget tbl_dashboard_widget = _dbcontext.tblDashboard_Widget.SingleOrDefault(DashboardWidget => DashboardWidget.Id == widget_Id);

            if (tbl_dashboard_widget != null)
            {
                Dashboard_Widget_VM_DTO _dto = Dashboard_Widget_VM_DTO_Convert.Dashboard_Widget_DTO_Convert_Table_To_DTO(tbl_dashboard_widget);
                _dto.BarDTO = new ChartBarDTO { Dashboard_Widget_Id = widget_Id };
                _dto.DonutDTO = new ChartDonutDTO { Dashboard_Widget_Id = widget_Id };
                _dto.GaugeDTO = new ChartGaugeDTO { Dashboard_Widget_Id = widget_Id };
                _dto.HeapMapDTO = new ChartHeatMapDTO { Dashboard_Widget_Id = widget_Id };
                _dto.PieDTO = new ChartPieDTO { Dashboard_Widget_Id = widget_Id };
                _dto.StackedDTO = new ChartStackedDTO { Dashboard_Widget_Id = widget_Id };
                _dto.LineDTO = new ChartLineDTO { Dashboard_Widget_Id = widget_Id };
                _dto.TreeMapDTO = new ChartTreeMapDTO { Dashboard_Widget_Id = widget_Id };
                _dto.CounterDTO = new ChartCounterDTO { Dashboard_Widget_Id = widget_Id };
                return _dto;
            }
            else
                return null;
        }

        public void Remove_Widget_From_Dashboard(long widget_id)
        {
            try
            {
                tblDashboard_Widget tbl_dashboard_widget = _dbcontext.tblDashboard_Widget.Single(widget => widget.Id == widget_id);
                tbl_dashboard_widget.Is_Deleted = true;
                _dbcontext.SaveChanges();
            }
            catch { }
        }

        /// <summary>
        /// This function is used when all chart is_deleted for Dashboard_widget, than we also remove the dashboard widget from dahboard, other wise the black sapce will show
        /// </summary>
        /// <param name="widget_id"></param>
        public void Remove_Widget_From_Dashboard_When_All_Chart_Set_Is_Deleted(long _id, ChartType _chart_type)
        {
            try
            {
                tblDashboard_Widget tbl_dashboard_widget = _dbcontext.tblDashboard_Widget.Single(chart => chart.Id == _id);
                if (tbl_dashboard_widget != null)
                {
                    switch (_chart_type)
                    {
                        case ChartType.Bar:
                            if (!tbl_dashboard_widget.tblChart_Bar.Where(chart => chart.Is_Deleted == false).Any())
                                tbl_dashboard_widget.Is_Deleted = true;
                            break;
                        case ChartType.BarFixedPlacement:
                            if (!tbl_dashboard_widget.tblChart_Bar.Where(chart => chart.Is_Deleted == false).Any())
                                tbl_dashboard_widget.Is_Deleted = true;
                            break;
                        case ChartType.Gauge:
                            if (!tbl_dashboard_widget.tblChart_Gauge.Where(chart => chart.Is_Deleted == false).Any())
                                tbl_dashboard_widget.Is_Deleted = true;
                            break;
                        case ChartType.TreeMap:
                            if (!tbl_dashboard_widget.tblChart_TreeMap.Where(chart => chart.Is_Deleted == false).Any())
                                tbl_dashboard_widget.Is_Deleted = true;
                            break;
                        case ChartType.HeatMap:
                            if (!tbl_dashboard_widget.tblChart_Heatmap.Where(chart => chart.Is_Deleted == false).Any())
                                tbl_dashboard_widget.Is_Deleted = true;
                            break;
                        case ChartType.Pie:
                            if (!tbl_dashboard_widget.tblChart_Pie.Where(chart => chart.Is_Deleted == false).Any())
                                tbl_dashboard_widget.Is_Deleted = true;
                            break;
                        case ChartType.Stacked:
                            if (!tbl_dashboard_widget.tblChart_Stacked.Where(chart => chart.Is_Deleted == false).Any())
                                tbl_dashboard_widget.Is_Deleted = true;
                            break;
                        case ChartType.Line:
                            if (!tbl_dashboard_widget.tblChart_Line.Where(chart => chart.Is_Deleted == false).Any())
                                tbl_dashboard_widget.Is_Deleted = true;
                            break;
                        case ChartType.Donut:
                            if (!tbl_dashboard_widget.tblChart_Donut.Where(chart => chart.Is_Deleted == false).Any())
                                tbl_dashboard_widget.Is_Deleted = true;
                            break;
                        case ChartType.Counter:
                            if (!tbl_dashboard_widget.tblChart_Counter.Where(chart => chart.Is_Deleted == false).Any())
                                tbl_dashboard_widget.Is_Deleted = true;
                            break;
                        default:
                            throw new Exception(string.Format(Resources.Invalid_Chart_Type + " {0}", _chart_type));
                    }
                    _dbcontext.SaveChanges();
                }                
            }
            catch { }
        }


        /// <summary>
        /// 
        /// </summary>
        /// <param name="dashboard_ids"></param>
        /// <param name="user_ids"></param>
        /// <returns></returns>
        public bool User_Dashboard_Update(List<Dashboard_Menu_DTO> dashboarddto, IEnumerable<string> user_ids)
        {
            IEnumerable<int> dashboard_ids = dashboarddto != null ?  dashboarddto.Select(dashboard => dashboard.Id) : null ;
            //Get All the dashboard list for the users
            IList<AspNetUserDashboard> _dbuserdashboards = _dbcontext.AspNetUserDashboards.Where(userdashboard => user_ids.Contains(userdashboard.User_Id)).ToList();
            IList<AspNetUserDashboard> _userdashboards = Convert_DashboardMenuUsers.Convert_List_Table(dashboard_ids, user_ids);
            var comparer = new UserDashboardEqualityComparer();
            var itemsToDelete = _dbuserdashboards.Except(_userdashboards, comparer).ToList();
            foreach (AspNetUserDashboard item in itemsToDelete)
            {
                // Delete the dashboard
                _dbcontext.AspNetUserDashboards.Remove(item);
            }
            var itemsToAdd = _userdashboards.Except(_dbuserdashboards, comparer).ToList();
            foreach (AspNetUserDashboard item in itemsToAdd)
            {
                // Add the dashboard
                _dbcontext.AspNetUserDashboards.Add(item);
            }
            _dbcontext.SaveChanges();
            return true;
        }

        public void Change_Dashboard_Layout(int dashboard_id, int layout_id)
        {
            try
            {
                tblDashboard tbl_dashboard = _dbcontext.tblDashboards.Single(dashboard => dashboard.Id == dashboard_id);
                tbl_dashboard.Layout_Option = layout_id;
                _dbcontext.SaveChanges();
            }
            catch (Exception ex)
            { }
         
        }


        public Dashboard_Widget_DTO Get_Dashboard_Widget_Chart_Type(ChartType chart_type)
        {
            return new Dashboard_Widget_DTO(chart_type);
        }

      
    }


    public class UserDashboardEqualityComparer : IEqualityComparer<AspNetUserDashboard>
    {
        public int GetHashCode(AspNetUserDashboard obj)
        {
            return (obj == null) ? 0 : obj.GetHashCode();
        }

        public bool Equals(AspNetUserDashboard x, AspNetUserDashboard y)
        {
            if (ReferenceEquals(x, y)) return true;
            if (x == null || y == null) return false;
            return x.DashBoard_Id == y.DashBoard_Id && x.User_Id == y.User_Id;
        }
    }
}
