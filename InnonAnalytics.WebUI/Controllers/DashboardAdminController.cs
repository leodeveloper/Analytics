using InnonAnalytics.Model.DTO;
using InnonAnalytics.Service.Repository;
using InnonAnalytics.WebUI.Filters;
using InnonAnalytics.WebUI.Models;
using Kendo.Mvc.Extensions;
using Kendo.Mvc.UI;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace InnonAnalytics.WebUI.Controllers
{
    [Authorize(Roles = "Admin")]
    public class DashboardAdminController : Controller
    {

        private static IDashboardRepository _dashboardRepository;
        public DashboardAdminController(IDashboardRepository dashboardRepository)
        {
            _dashboardRepository = dashboardRepository;
        }

        // GET: DashboardAdmin
        public ActionResult Index()
        {
            return View();
        }

        public ActionResult Dashboard_Select([DataSourceRequest]DataSourceRequest request, int? id)
        {
            IList<Dashboard_Menu_DTO> dashboardmenu_dto = _dashboardRepository.Get_All_Parent_Child_Dashboards();            
            DataSourceResult result = dashboardmenu_dto.ToDataSourceResult(request);
            return new JsonResult()
            {
                Data = result,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };
        }

        [ValidateJsonAntiForgeryTokenAttribute]
        public ActionResult Update_Dashboard(Bulk_Update_Dashboard_User_Rights dashboard_user_rights)
        {

            _dashboardRepository.User_Dashboard_Update(
                dashboard_user_rights.dashboarddto, 
                dashboard_user_rights.userdto.Select(user_ids=>user_ids.Id));

            return new JsonResult()
            {
                Data = dashboard_user_rights,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };
        }
        [ValidateJsonAntiForgeryTokenAttribute]
        public ActionResult Get_User_Dashboards(Bulk_Update_Dashboard_User_Rights dashboard_user_rights)
        {
            IList<Dashboard_Menu_DTO> dashboardmenu_dto = _dashboardRepository.Get_All_Parent_Child_Dashboards_By_User_Id(dashboard_user_rights.userdto.Select(user_ids => user_ids.Id));
            return new JsonResult()
            {
                Data = dashboardmenu_dto,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };
        }

    }
}