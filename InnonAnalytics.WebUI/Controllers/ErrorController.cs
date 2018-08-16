using System.Web.Mvc;

namespace InnonAnalytics.WebUI.Controllers
{
    public class ErrorController : Controller
    {
        // GET: Error
        public ActionResult Index()
        {
            return View();
        }

        public ActionResult NotFound()
        {
            return View();
        }

        public ActionResult UnAuthorize()
        {
            return View();
        }
    }
}