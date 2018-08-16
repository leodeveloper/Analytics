using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace InnonAnalytics.WebUI.Controllers
{
    [Authorize]
    public class AuditController : Controller
    {
        private static IElementRepository _iElementRepository;
        public AuditController(IElementRepository elementRepository)
        {
            _iElementRepository = elementRepository;
        }


        // GET: Audit
        [HttpGet]
        //[ValidateAntiForgeryToken]
        public ActionResult GetAudit(string row_id)
        {
            return PartialView("_Audit", _iElementRepository.GetElementAudit(row_id));
        }
    }
}