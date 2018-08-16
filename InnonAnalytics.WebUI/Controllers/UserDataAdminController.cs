using InnonAnalytics.Model.DTO;
using InnonAnalytics.Service.Repository;
using InnonAnalytics.WebUI.Filters;
using InnonAnalytics.WebUI.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace InnonAnalytics.WebUI.Controllers
{
    [Authorize(Roles = "Admin")]
    public class UserDataAdminController : Controller
    {

        private static IMetricRepository _iMetricRepository;
        public UserDataAdminController(IMetricRepository iMetricRepository)
        {
            _iMetricRepository = iMetricRepository;
        }

        // GET: UserDataAdmin
        public ActionResult Index()
        {
            return View();
        }

        [ValidateJsonAntiForgeryTokenAttribute]
        public ActionResult Update_User_Metric(Bulk_Update_Metric_User_Rights metric_user_rights)
        {

            _iMetricRepository.User_Metric_Update(
               Convert_UserDataAdmin.Convert(metric_user_rights.metricdto),
                metric_user_rights.userdto.Select(user_ids => user_ids.Id));

            return new JsonResult()
            {
                Data = metric_user_rights,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };
        }

        [ValidateJsonAntiForgeryTokenAttribute]
        public ActionResult Get_User_Metrics(Bulk_Update_Metric_User_Rights metric_user_rights)
        {
            IList<MetricDTO> metric_dto = _iMetricRepository.Get_All_Metric_By_User_Id(metric_user_rights.userdto.Select(user_ids => user_ids.Id));
            IList<MetricUserUIDTO> metric_user_dto = new List<MetricUserUIDTO>(); 
            if(metric_dto.Count > 0) metric_user_dto = Convert_UserDataAdmin.Convert(metric_dto);
            return new JsonResult()
            {
                Data = metric_user_dto,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };
        }
    }
}