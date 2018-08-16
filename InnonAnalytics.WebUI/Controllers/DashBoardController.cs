using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Service.Repository;
using InnonAnalytics.Common.Static_Resources;
using InnonAnalytics.WebUI.Models;
using System.Net;
using Newtonsoft.Json;
using InnonAnalytics.Common.Enums;
using Kendo.Mvc.UI;
using Kendo.Mvc.Extensions;
using System.Diagnostics;
using Microsoft.AspNet.Identity;
using InnonAnalytics.WebUI.Filters;

namespace InnonAnalytics.WebUI.Controllers
{
    
    [Authorize]
    public class DashBoardController : Controller
    {

        private static IMetricRepository _iMetricRepository;
        private static IDashboardRepository _dashboardRepository;
        private static ITagRepository _iTagRepository;
        private static IElementRepository _iElementRepository;

        private static IChartRepository _iChartRepository;

        private static IList<MetricDTO> _list_metric;

        public DashBoardController(IDashboardRepository dashboard_repository, IMetricRepository metricRepository, ITagRepository tagRepository, IChartRepository chartRepository, IElementRepository elementRepository)
        {
            _dashboardRepository = dashboard_repository;
            _iMetricRepository = metricRepository;
            _iTagRepository = tagRepository;
            _iChartRepository = chartRepository;
            _iElementRepository = elementRepository;
        }

        // GET: DashBoard
        public ActionResult Index()
        {
           return View();
        }

        
        [CustomAuthorize("DashboardPermissionLivePoint")]
        public ActionResult GetLivePoints()
        {
            return PartialView("_DashboardLivePoint");
        }

        [CustomAuthorize("DashboardPermissionLivePoint")]
        public ActionResult GetLivePointsForGrid([DataSourceRequest]DataSourceRequest request)
        {
            IList<LivePoint_DTO> livepoint_dto = new List<LivePoint_DTO>();
            if (User.IsInRole("Admin"))
                livepoint_dto = _iElementRepository.GetLivePoints();
            else
                livepoint_dto = _iElementRepository.GetLivePoints(User.Identity.GetUserId());
            DataSourceResult result = livepoint_dto.ToDataSourceResult(request);
            return Json(result, JsonRequestBehavior.AllowGet);
        }

        [CustomAuthorize("DashboardPermissionLivePoint")]
        [HttpPost]
        public ActionResult UpdateLive_Value([DataSourceRequest]DataSourceRequest request, LivePoint_DTO livepoint_dto)
        {
            try
            {
                if (_iElementRepository.UpdateLivePoint(livepoint_dto, User.Identity.GetUserName()))
                {
                    livepoint_dto= _iElementRepository.GetLivePoint(livepoint_dto.Point_Id);
                    return Json(new[] { livepoint_dto }.ToDataSourceResult(request), JsonRequestBehavior.AllowGet);
                }
                else
                    throw new Exception("fail to update the live point value");
            }
            catch (Exception ex)
            {
                return Json(new[] { ex }.ToDataSourceResult(request, ModelState), JsonRequestBehavior.AllowGet);
            }
        }

        public ActionResult Get_Dashboard_ID(int Id)
        {
            if(Id == 2000)
            {
                DashboardDTO dto_dashboard = new DashboardDTO();
                dto_dashboard.Id = 2000;
                dto_dashboard.Title = "Electricity";
                dto_dashboard.Dashboard_Widgets = new List<Dashboard_Widget_DTO>();
                return View(dto_dashboard);
               // return PartialView("_Dashboard_Fixed_Chart");
            }
            else if(Id == 2001)
            {
                DashboardDTO dto_dashboard = new DashboardDTO();
                dto_dashboard.Id = 2001;
                dto_dashboard.Title = "KPI Overview";
                dto_dashboard.Dashboard_Widgets = new List<Dashboard_Widget_DTO>();
                return View(dto_dashboard);
               // return PartialView("_Dashboard_Fixed_Gauge");
            }
            else
            {
                DashboardDTO dto_dashboard = _dashboardRepository.Get_Dashboard_By_Id(Id);
                return View(dto_dashboard);
            }            
        }

        [CustomAuthorize("DashboardPermissionView")]
        public ActionResult Get_Dynamic_Dashboard_By_Dashboard_Id(int Id)
        {
            DashboardDTO _dto_dashboard = _dashboardRepository.Get_Dashboard(Id, User.Identity.GetUserId());
            return PartialView("_GetDashboard", _dto_dashboard);
        }



        [HttpGet]
        public ActionResult Get_Widgets_For_Home_Page()
        {            
            return Json(_dashboardRepository.Get_Dashboard_Widget_For_Home_Page_By_User_ID(User.Identity.GetUserId()), JsonRequestBehavior.AllowGet);
        }

        [CustomAuthorize("DashboardPermissionAddEdit")]
        public ActionResult Add_Edit_Dashboard(int dashboard_id)
        {
            if(dashboard_id > 0)
            {
                DashboardDTO dashboard_DTO = _dashboardRepository.Get_Dashboard_By_Id(dashboard_id);
                return PartialView("_AddEditDashBoard", dashboard_DTO);
            }
            else
                return PartialView("_AddEditDashBoard", new DashboardDTO());
        }

        [CustomAuthorize("DashboardPermissionAddEdit")]
        public ActionResult Create_Dashboard(DashboardDTO dashboard)
        {
           int dashboard_id = _dashboardRepository.Create_Dashboard(dashboard,User.Identity.GetUserId());
           return RedirectToAction("Index", "Home");
        }

        [CustomAuthorize("DashboardPermissionAddEdit")]
        public ActionResult Add_Dashboard_Widget(int dashboard_Id)
        {
            ViewBag.Chart_Id = 0;
            Dashboard_Widget_VM_DTO dto_dashboard_widget = new Dashboard_Widget_VM_DTO { Dashboard_Id = dashboard_Id };           
            return PartialView("_Dashboard_Widget_Add_Edit", dto_dashboard_widget);
        }

        [CustomAuthorize("DashboardPermissionAddEdit")]
        public ActionResult Add_New_Tab(int widget_Id)
        {
            ViewBag.Chart_Id = 0;
            Dashboard_Widget_VM_DTO dto_dashboard_widget = _dashboardRepository.Get_Dashboard_Widget_By_Id_New_Chart(widget_Id);
            return PartialView("_Dashboard_Widget_Add_Edit", dto_dashboard_widget);
        }

        [CustomAuthorize("DashboardPermissionAddEdit")]
        public ActionResult Edit_Dashboard_Widget(string chart_type, int chart_id)
        {
            ChartType _chart_type;
            Enum.TryParse(chart_type, out _chart_type);
            if (!Enum.IsDefined(typeof(ChartType), chart_type)) throw new Exception(String.Format(Common.App_CommonGlobalResources.Resources.Invalid_Chart_Type + " {0}", chart_type));

            ViewBag.Chart_Id = chart_id;
            Dashboard_Widget_VM_DTO dto_dashboard_widget = _iChartRepository.Get_Chart_By_Chart_ID(_chart_type, chart_id);
            return PartialView("_Dashboard_Widget_Add_Edit", dto_dashboard_widget);
        }

        [CustomAuthorize("DashboardPermissionAddEdit")]
        public ActionResult Get_Widget_Time_Line(int widget_id, string chart_type)
        {
            ChartType _chart_type;
            Enum.TryParse(chart_type, out _chart_type);
            if (!Enum.IsDefined(typeof(ChartType), chart_type)) throw new Exception(String.Format(Common.App_CommonGlobalResources.Resources.Invalid_Chart_Type + " {0}", chart_type));
            return PartialView("_Time_Line", _iChartRepository.Get_Time_Line_By_Chart(_chart_type, widget_id));
        }

        


        [HttpPost]
        [CustomAuthorize("DashboardPermissionAddEdit")]
        [ValidateAntiForgeryToken]
        public ActionResult Save_Widget_Time_Line(Chart_Common_Properties_DTO chart_common_properties, int widget_id, string chart_type)
        {
            ChartType _chart_type;
            Enum.TryParse(chart_type, out _chart_type);

            if (!Enum.IsDefined(typeof(ChartType), chart_type)) throw new Exception(String.Format(Common.App_CommonGlobalResources.Resources.Invalid_Chart_Type + " {0}", chart_type));

            _iChartRepository.Update_Chart_Common_Properties(widget_id, chart_common_properties, _chart_type);
            return Json(new { success = true }, JsonRequestBehavior.AllowGet);
        }

        [HttpPost]
        [CustomAuthorize("DashboardPermissionAddEdit")]
        public ActionResult Add_Edit_Dashboard_Widget(Dashboard_Widget_VM_DTO dashboard_widget_dto)
        {
            try
            {
                if (dashboard_widget_dto.Id > 0)
                {
                    _dashboardRepository.Edit_Dashboard_Widget(dashboard_widget_dto);
                    return Json(new { dashboard_id = dashboard_widget_dto.Dashboard_Id, success = true, message = Resources.Resources.Widget_Edit_Success }, JsonRequestBehavior.AllowGet);
                }
                else
                {
                    _dashboardRepository.Add_Dashboard_Widget(dashboard_widget_dto);
                    return Json(new { dashboard_id = dashboard_widget_dto.Dashboard_Id, success = true, message = Resources.Resources.Widget_Add_Success }, JsonRequestBehavior.AllowGet);
                }                    
            }
            catch(Exception ex)
            {
                throw ex;
            }            
        }

        [HttpPost]
        [CustomAuthorize("DashboardPermissionAddEdit")]
        public ActionResult Save_Dashboard_Widget_Layout(IList<Dashboard_Widget_Layout_DTO> dashboard_widget_layout)
        {
            try
            {
                _dashboardRepository.Save_Dashboard_Widget_Layout(dashboard_widget_layout);
                return Json(true, JsonRequestBehavior.AllowGet);
            }
            catch (Exception ex)
            {
                throw ex;
            }
        }

        [HttpPost]
        public ActionResult Save_Homepage_Widget_Layout(IList<Dashboard_Widget_Layout_DTO> dashboard_widget_layout)
        {
            try
            {
                _dashboardRepository.Save_Homepage_Widget_Layout(dashboard_widget_layout, User.Identity.GetUserId());
                return Json(true, JsonRequestBehavior.AllowGet);
            }
            catch (Exception ex)
            {
                throw ex;
            }
        }

        [CustomAuthorize("DashboardPermissionAddEdit")]
        public ActionResult Choose_Chart_Type(int dashboard_Id)
        {
            Dashboard_Widget_DTO dto_dashboard_widget = new Dashboard_Widget_DTO { Dashboard_Id = dashboard_Id };
            return PartialView("_Dashboard_Widget_Choose_Chart_Type", dto_dashboard_widget);
        }

        [CustomAuthorize("DashboardPermissionAddEdit")]
        public ActionResult Choose_Metric(int dashboard_Id, string chart_type, string widget_title, int widget_Id, int chart_id)
        {
            //Set the static list of metric 
            if (_list_metric == null)
            {

                if (User.IsInRole("Admin"))
                    _list_metric = _iMetricRepository.GetMetricForDropdownList();
                else
                    _list_metric = _iMetricRepository.GetMetricForDropdownListByUserId(User.Identity.GetUserId());
            }

            ChartType _chart_type;
            Enum.TryParse(chart_type, out _chart_type);

            if (!Enum.IsDefined(typeof(ChartType), chart_type)) throw new Exception(String.Format(Common.App_CommonGlobalResources.Resources.Invalid_Chart_Type + " {0}", chart_type));


            //Widget is greater than the 0 it mean it is for the Edit, 0 widget_id for new widget
            if (widget_Id > 0 && chart_id > 0)
            {
                Dashboard_Widget_VM_DTO dto_dashboard_widget = _iChartRepository.Get_Chart_By_Chart_ID(_chart_type, chart_id);
                return PartialView("_Dashboard_Widget_Choose_Metric", dto_dashboard_widget);
            }
            else if(widget_Id > 0 && chart_id == 0) // this is for adding the new tab into the widget
            {
                //Dashboard_Widget_VM_DTO dashboard_widget_dto = new Dashboard_Widget_VM_DTO(_chart_type);
                //dashboard_widget_dto.Widget_Title = widget_title;
                //dashboard_widget_dto.Dashboard_Id = dashboard_Id;
                //dashboard_widget_dto.Id = widget_Id;

                Dashboard_Widget_VM_DTO dto_dashboard_widget = _dashboardRepository.Get_Dashboard_Widget_By_Id_New_Chart(widget_Id);

                return PartialView("_Dashboard_Widget_Choose_Metric", dto_dashboard_widget);
            }
            else // this for to add new widget into the dahsboard
            {    
                Dashboard_Widget_VM_DTO dashboard_widget_dto = new Dashboard_Widget_VM_DTO(_chart_type);
                dashboard_widget_dto.Widget_Title = widget_title;
                dashboard_widget_dto.Dashboard_Id = dashboard_Id;
                dashboard_widget_dto.widget_width = 12;
                dashboard_widget_dto.widget_height = 10;
                return PartialView("_Dashboard_Widget_Choose_Metric", dashboard_widget_dto);
            }
           
                       
        }

        public ActionResult Chart_Control_Porperties()
        {
            //  Dashboard_Widget_DTO dto_dashboard_widget = new Dashboard_Widget_DTO { Dashboard_Id = dashboard_Id };
            return PartialView("_Dashboard_Widget_Chart_Control_Properties");
        }


        [CustomAuthorize("DashboardPermissionAddEdit")]
        public ActionResult Get_Dashboard_Widgets_By_Dashboard_Id(int dashboard_Id)
        {
            //Dashboard_Widget_DTO dto_dashboard_widget = new Dashboard_Widget_DTO();
            return Json(_dashboardRepository.Get_Dashboard_Widget_By_Dashboard_Id(dashboard_Id), JsonRequestBehavior.AllowGet);   
        }

        [CustomAuthorize("DashboardPermissionRemoveWidgt")]
        public ActionResult Remove_Widget_From_Dashboard(long widget_id)
        {
            _dashboardRepository.Remove_Widget_From_Dashboard(widget_id);
            return Json(true, JsonRequestBehavior.AllowGet);
        }

        [CustomAuthorize("DashboardPermissionRemoveChart")]
        public ActionResult Remove_Chart_From_Widget(string chart_type, int chart_id)
        {
            if (chart_id == 0) throw new ArgumentNullException(""+ chart_id);
            ChartType _chart_type;
            Enum.TryParse(chart_type, out _chart_type);
            if (!Enum.IsDefined(typeof(ChartType), chart_type)) throw new Exception(String.Format(Common.App_CommonGlobalResources.Resources.Invalid_Chart_Type + " {0}", chart_type));
            
            _iChartRepository.Remove_Chart(_chart_type, chart_id);
            return Json(true, JsonRequestBehavior.AllowGet);
        }

        public ActionResult Get_Private_Shared_Dashboard()
        {
            return Json(_dashboardRepository.Get_Dashboard_Is_Deleted(false), JsonRequestBehavior.AllowGet);
        }

        public ActionResult Get_Dashboard_Menu()
        {
            return Json(_dashboardRepository.Get_Dashboard_Menu(), JsonRequestBehavior.AllowGet); 
        }

        public ActionResult Get_Metric()
        {

            if (_list_metric == null)
            {

                if (User.IsInRole("Admin"))
                    _list_metric = _iMetricRepository.GetMetricForDropdownList();
                else
                    _list_metric = _iMetricRepository.GetMetricForDropdownListByUserId(User.Identity.GetUserId());
            }
                

            return new JsonResult()
            {
                Data = _list_metric,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };         
        }


        public ActionResult Get_Metric2()
        {
            IList<MetricDTO> list_metric_dto = _iMetricRepository.GetMetrics();
            return Json(new SelectList(list_metric_dto, "Id", "Metric_Name"), JsonRequestBehavior.AllowGet);
        }


        [HttpGet]
        public ActionResult Get_Dashboard_Menu(int? ID)
        {
            IList<Dashboard_Menu_DTO> list_of_dashboard = new List<Dashboard_Menu_DTO>();

            if (User.IsInRole("Admin"))
                list_of_dashboard = _dashboardRepository.Get_Dashboard_Menu_ByID(ID);
            else
                list_of_dashboard = _dashboardRepository.Get_Dashboard_Menu_ByID_ByUserId(ID, User.Identity.GetUserId());         


            
            var structure_list = from e in list_of_dashboard
                            select new
                            {
                                ID = e.Id,
                                Title = e.Title,
                                Dashboard_Type = e.Dashboard_Type.ToString(),
                                //Items = e.Child_Menu,
                                //ImgUrl = "../Content/images/"+ e.Element_Tag_Type +".png",                                
                                //(e.Element_Tag_Type == TagType.site) ? "../Content/images/site.png" : (e.Element_Tag_Type == TagType.equip) ? "../Content/images/equip.png" : (e.Element_Tag_Type == TagType.point) ? "../Content/images/point.png" : "", //"../Content/images/site.png",
                                hasChildren = e.Child_Menu.Any()
                            };

            return Json(structure_list, JsonRequestBehavior.AllowGet);
        }

        public ActionResult Get_Parent_Dashboard()
        {
            if(User.IsInRole("Admin"))
                return Json(new SelectList(_dashboardRepository.Get_All_Parent_Dashboards(), "Id", "Title"), JsonRequestBehavior.AllowGet);
            else
                return Json(new SelectList(_dashboardRepository.Get_All_Parent_Dashboards(User.Identity.GetUserId()), "Id", "Title"), JsonRequestBehavior.AllowGet);
        }

        public ActionResult Get_Group_By(string chart_type)
        {
            ChartType _chart_type;
            Enum.TryParse(chart_type, out _chart_type);
            if (!Enum.IsDefined(typeof(ChartType), chart_type)) throw new Exception(String.Format(Common.App_CommonGlobalResources.Resources.Invalid_Chart_Type + " {0}", chart_type));

            return Json(_iChartRepository.Get_GroupBy_Chart_Type(_chart_type).Select(x => new SelectListItem { Text = x, Value = x }), JsonRequestBehavior.AllowGet);
        }




        public ActionResult Events()
        {
            return View();
        }


        public ActionResult GetTreeMap1()
        {
            
            return Content(TreeMapJson1(), "application/json");
        }

        //[HttpGet]
        //public ActionResult GetTreeMap(DateTime from_date, DateTime to_date)
        //{
        //   // _dashboardRepository.Get_Aggregate_Date(TagType.department, from_date, to_date);
        //    return Json(_dashboardRepository.Get_Aggregate_Date(TagType.department, from_date, to_date), JsonRequestBehavior.AllowGet);
        //}


        private string TreeMapJson1()
        {
            try
            {
                var json = new WebClient().DownloadString("http://testanalytics.innon.co.uk:8080/Content/json/EnergyMap.json");
                return json.Replace("\r\n","");               
            }
            catch(Exception ex)
            {
                return "[No data available]";
            }           
        }

        public ActionResult GetTreeMap2()
        {
            return Content(TreeMapJson2(), "application/json");
        }


        private string TreeMapJson2()
        {
            try
            {
                var json = new WebClient().DownloadString("http://testanalytics.innon.co.uk:8080/Content/json/consumption.json");
                return json.Replace("\r\n", "");
            }
            catch (Exception ex)
            {
                return "[No data available]";
            }
        }

        public ActionResult GetTreeMap3()
        {
            return Content(TreeMapJson3(), "application/json");
        }


        private string TreeMapJson3()
        {
            try
            {
                var json = new WebClient().DownloadString("http://testanalytics.innon.co.uk:8080/Content/json/consumer.json");
                return json.Replace("\r\n", "");
            }
            catch (Exception ex)
            {
                return "[No data available]";
            }
        }



    }
}