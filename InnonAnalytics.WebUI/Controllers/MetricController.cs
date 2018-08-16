using InnonAnalytics.Model.DTO;
using InnonAnalytics.Service.Repository;
using Kendo.Mvc.UI;
using Kendo.Mvc.Extensions;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web.Mvc;
using InnonAnalytics.Common.Enums;
using System.Threading.Tasks;
using InnonAnalytics.DataWareHouseService.Model;
using InnonAnalytics.WebUI.Models;

namespace InnonAnalytics.WebUI.Controllers
{
    [HandleError]
    [Authorize]
    public class MetricController : Controller
    {

        private static IMetricRepository _iMetricRepository;
        private static ITagRepository _iTagRepository;
        private static IAggregateRepository _iAggregateRepository;
        
        public MetricController(IMetricRepository metricRepository, ITagRepository tagRepository, IAggregateRepository aggregateRepository)
        {
            _iMetricRepository = metricRepository;
            _iTagRepository = tagRepository;
            _iAggregateRepository = aggregateRepository;
        }

        // GET: Matric
        public ActionResult Index()
        {
           // ViewData["tag_group_by"] = new SelectList(_iTagRepository.Get_Tag_Type(), "Tag_Type", "Tag_Type");
            ViewData["all_tags"] = _iTagRepository.SelectAll(); // new SelectList(_iTagRepository.SelectAll(), "ID", "Tag_Type_Value");

            ViewData["unit"] = new SelectList(Unit_Of_Measurement_DTO.Unit_DTO.ToList(), "ID", "Unit_Name_Symbol");

            return View();
        }

        public ActionResult Metric_Select([DataSourceRequest] DataSourceRequest request)
        {
            IList<MetricDTO> list_metric_dto = _iMetricRepository.GetMetrics();
            DataSourceResult result = list_metric_dto.ToDataSourceResult(request);

            return new JsonResult()
            {
                Data = result,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };

         //   return Json(result, JsonRequestBehavior.AllowGet);           
        }

        public ActionResult Get_Metric_By_Chart()
        {
            return View();
        }

        public ActionResult Metric_Insert([DataSourceRequest] DataSourceRequest request, MetricDTO metric)
        {
            
            try
            {
                if (ModelState.IsValid)
                {
                    _iMetricRepository.Save_Metric(metric);

                    return Json(new[] { metric }.ToDataSourceResult(request, ModelState), JsonRequestBehavior.AllowGet);
                }
                else
                {
                    return Json(null, JsonRequestBehavior.AllowGet);
                }
            }
            catch(Exception ex)
            {
                return Json(null, JsonRequestBehavior.AllowGet); 
            }
            

            
        }

        public ActionResult Metric_Update([DataSourceRequest] DataSourceRequest request, MetricDTO metric)
        {

            try
            {
                if (ModelState.IsValid)
                {
                    _iMetricRepository.Update_Metric(metric);

                    return Json(new[] { metric }.ToDataSourceResult(request, ModelState), JsonRequestBehavior.AllowGet);
                }
                else
                {
                    return Json(null, JsonRequestBehavior.AllowGet);
                }
            }
            catch (Exception ex)
            {
                return Json(null, JsonRequestBehavior.AllowGet);
            }
        }

        public ActionResult GetUnits()
        {
            return Json(Unit_Of_Measurement_DTO.Unit_DTO, JsonRequestBehavior.AllowGet);
        }

        public async Task<ActionResult> Get_Raw_Data(string chart_type, int chart_id, DateTime from_date, DateTime to_date)
        {
            ChartType _chart_type;
            if (!Enum.TryParse(chart_type, out _chart_type))
                throw new ArgumentException(string.Format(InnonAnalytics.Common.App_CommonGlobalResources.Resources.Invalid_Chart_Type + " {0}", chart_type));

            ViewBag.From_Date = from_date.ToString("yyyy-MM-dd HH:mm:ss");
            ViewBag.To_Date = to_date.ToString("yyyy-MM-dd HH:mm:ss");
            IList<ChartRawDataDTO> chartrawdata = await Task.Run(() => _iAggregateRepository.Get_Raw_Data(_chart_type, chart_id, from_date, to_date));

            return PartialView("_GetMetricByChart", chartrawdata);
        }

        public async Task<ActionResult> Get_Warehouse_Raw_Data([DataSourceRequest] DataSourceRequest request, int point_id, DateTime from_date, DateTime to_date)
        {
            IList<Warehouse_DTO> chartrawdata = await Task.Run(() => _iAggregateRepository.Get_WareHouse_Raw_Data(AggerationType.Hour,point_id,from_date,to_date));
            DataSourceResult result = chartrawdata.ToDataSourceResult(request);
            return new JsonResult()
            {
                Data = result,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };
        }

        /// <summary>
        /// Used in the UserDataAdmin/Index
        /// </summary>
        /// <returns></returns>
        public async Task<ActionResult> Get_Metric([DataSourceRequest]DataSourceRequest request)
        {
            IList<MetricDTO> _list_metric = await Task.Run(() => _iMetricRepository.GetMetricForDropdownList());
            IList<MetricUserUIDTO> _list_user_data_admin_dto = Convert_UserDataAdmin.Convert(_list_metric);
            DataSourceResult result = _list_user_data_admin_dto.ToDataSourceResult(request);
            return new JsonResult()
            {
                Data = result,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };
        }
    }
}