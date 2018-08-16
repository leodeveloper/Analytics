using InnonAnalytics.Service.Repository;
using Microsoft.AspNet.Identity;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Web;
using System.Web.Mvc;

namespace InnonAnalytics.WebUI.Controllers
{
    public class WidgetController : Controller
    {

        private IHomePageWidgetRepository _home_page_widget_rep;
        public WidgetController(IHomePageWidgetRepository home_page_widget_rep)
        {
            _home_page_widget_rep = home_page_widget_rep;
        }

        public async Task<ActionResult> Widget_UnPin_Pin_To_Home_Page(int widget_id)
        {
            try
            {
                return new JsonResult()
                {
                    Data = await Task.Run(() => new { Error = "null", Message = _home_page_widget_rep.Widget_Pin_UnPin_To_HomePage(widget_id, User.Identity.GetUserId()) }),
                    JsonRequestBehavior = JsonRequestBehavior.AllowGet
                };
            }
            catch (Exception ex)
            {
                return new JsonResult()
                {
                    Data = new { Error = ex.Message },
                    JsonRequestBehavior = JsonRequestBehavior.AllowGet
                };
            }

        }


        // GET: Widget
        [HttpPost]
        public async Task<ActionResult> Widget_Pin_To_Home_Page(int widget_id)
        {
            try
            {
                return new JsonResult()
                {
                    Data = await Task.Run(() => new { Error = "null", Message = _home_page_widget_rep.Widget_Pin_To_HomePage(widget_id, User.Identity.GetUserId()) }),
                    JsonRequestBehavior = JsonRequestBehavior.AllowGet
                };
            }
            catch (Exception ex)
            {
                return new JsonResult()
                {
                    Data = new { Error = ex.Message },
                    JsonRequestBehavior = JsonRequestBehavior.AllowGet
                };
            }

        }

        [HttpPost]
        public async Task<ActionResult> Widget_UnPin_From_Home_Page(int widget_id)
        {           

            try
            {
                return new JsonResult()
                {
                    Data = await Task.Run(() => _home_page_widget_rep.Widget_UnPin_To_HomePage(widget_id, User.Identity.GetUserId())),
                    JsonRequestBehavior = JsonRequestBehavior.AllowGet
                };
            }
            catch (Exception ex)
            {
                return new JsonResult()
                {
                    Data = ex.Message,
                    JsonRequestBehavior = JsonRequestBehavior.AllowGet
                };
            }
        }
    }
}