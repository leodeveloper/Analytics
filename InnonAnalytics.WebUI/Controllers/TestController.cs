using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace InnonAnalytics.WebUI.Controllers
{
    public class TestController : Controller
    {


        private static IMetricRepository _iMetricRepository;
        private static IDashboardRepository _dashboardRepository;
        private static ITagRepository _iTagRepository;

        public TestController(IDashboardRepository dashboard_repository, IMetricRepository metricRepository, ITagRepository tagRepository)
        {
            _dashboardRepository = dashboard_repository;
             _iMetricRepository = metricRepository;
             _iTagRepository =  tagRepository;
        }

        // GET: Test
        public ActionResult Index()
        {
            return View();
        }

        public ActionResult TestMultiSelect()
        {
            ChartType _chart_type;

            Enum.TryParse("Pie", out _chart_type);
            Dashboard_Widget_DTO dashboard_widget_dto = _dashboardRepository.Get_Dashboard_Widget_Chart_Type(_chart_type);
            dashboard_widget_dto.Widget_Title = "test";
            dashboard_widget_dto.Dashboard_Id = 17;


            return View(dashboard_widget_dto);
        }

        public ActionResult Get_Metric()
        {
            IList<MetricDTO> list_metric_dto = _iMetricRepository.GetMetrics();
            return Json(list_metric_dto, JsonRequestBehavior.AllowGet);
        }

        public ActionResult Grid_Stack()
        {
            return View();
        }


        [HttpPost]
        public ActionResult TestMultiSelect(Dashboard_Widget_DTO dashboard_widget_dto)
        {
            try
            {
                if (dashboard_widget_dto.Id > 0)
                {
                   // _dashboardRepository.Edit_Dashboard_Widget(dashboard_widget_dto);
                    return Json(new { success = true, message = Resources.Resources.Widget_Edit_Success }, JsonRequestBehavior.AllowGet);
                }
                else
                {
                   // _dashboardRepository.Add_Dashboard_Widget(dashboard_widget_dto);
                    return Json(new { success = true, message = Resources.Resources.Widget_Add_Success }, JsonRequestBehavior.AllowGet);
                }

            }
            catch (Exception ex)
            {
                throw ex;
            }



        }

    }
}