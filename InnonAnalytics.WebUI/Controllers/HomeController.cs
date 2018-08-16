using InnonAnalytics.Service.Repository;
using InnonAnalytics.WebUI.Models;
using Microsoft.AspNet.Identity;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace InnonAnalytics.WebUI.Controllers
{
    [Authorize]
    public class HomeController : Controller
    {
        private static IDashboardRepository _dashboardRepository;

        public HomeController(IDashboardRepository dashboardRepository)
        {
            _dashboardRepository = dashboardRepository;
        }

        public ActionResult Index()
        {          
            HomePageViewModel homepage_vm = new HomePageViewModel();
            homepage_vm.homepage_widgets = _dashboardRepository.Get_Dashboard_Widget_For_Home_Page_By_User_ID(User.Identity.GetUserId());
            return View(homepage_vm);
        }

        public ActionResult About()
        {
            ViewBag.Message = "Your app description page.";

            return View();
        }

        public ActionResult Contact()
        {
            ViewBag.Message = "Your contact page.";

            return View();
        }

        public ActionResult ExportExcel(string contentType, string base64, string fileName)
        {
            var fileContents = Convert.FromBase64String(base64);

            return File(fileContents, contentType, fileName);
        }

        public ActionResult ExportPdf(string contentType, string base64, string fileName)
        {
            var fileContents = Convert.FromBase64String(base64);

            return File(fileContents, contentType, fileName);
        }
    }
}
