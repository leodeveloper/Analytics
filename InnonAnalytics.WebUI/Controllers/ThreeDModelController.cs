using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace InnonAnalytics.WebUI.Controllers
{
    public class ThreeDModelController : Controller
    {
        // GET: ThreeDModel
        public ActionResult Index()
        {
            return PartialView("_Map");
        }

        public ActionResult GetHtmlPage(string path)
        {
            return new FilePathResult(path, "text/html");
        }
    }
}