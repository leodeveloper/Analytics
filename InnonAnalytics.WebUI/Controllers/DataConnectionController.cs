using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using InnonAnalytics.Model;
using InnonAnalytics.Model.EntityModel;
using Kendo.Mvc.UI;
using Kendo.Mvc.Extensions;
using System.Collections;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Service.Repository;
using InnonAnalytics.Service.Implementation;
using InnonAnalytics.WebUI.Filters;

namespace InnonAnalytics.WebUI.Controllers
{

    [Authorize]
    public class DataConnectionController : Controller
    {


        private static IConnectorRepository objConnectorRepository;
        public DataConnectionController(IConnectorRepository connectorrepository)
        {
            objConnectorRepository = connectorrepository;

            //if (ConnectorRepository.objAllExistingConnections == null)
            //    GetAllExistingConnections();
        }

        // GET: DataConnection
        public ActionResult Index()
        {
            return View();
        }

        [CustomAuthorize("ConnectionPermissionView")]
        public ActionResult DataConnection_Select([DataSourceRequest]DataSourceRequest request)
        {
            IEnumerable<ConnectorDTO> obj = objConnectorRepository.GetExistingConnections();
            DataSourceResult result = obj.ToDataSourceResult(request);

            return Json(result, JsonRequestBehavior.AllowGet);
        }

        [AcceptVerbs(HttpVerbs.Post)]
        [CustomAuthorize("ConnectionPermissionEdit")]
        public ActionResult DataConnection_Update([DataSourceRequest]DataSourceRequest request, ConnectorDTO _dtoConnector)
        {
            if (_dtoConnector != null && ModelState.IsValid)
            {
                _dtoConnector.SessionId = Session.SessionID;
                objConnectorRepository = new ConnectorRepository(_dtoConnector);
                objConnectorRepository.SaveConnection();
            }

            return Json(new[] { _dtoConnector }.ToDataSourceResult(request, ModelState), JsonRequestBehavior.AllowGet);
        }

        [AcceptVerbs(HttpVerbs.Post)]
        [CustomAuthorize("ConnectionPermissionAdd")]
        public ActionResult DataConnection_Insert([DataSourceRequest]DataSourceRequest request, ConnectorDTO _dtoConnector)
        {
            try
            {
                if (_dtoConnector != null && ModelState.IsValid)
                {
                    _dtoConnector.SessionId = Session.SessionID;
                    objConnectorRepository = new ConnectorRepository(_dtoConnector);
                    objConnectorRepository.SaveConnection();
                }

                return Json(new[] { _dtoConnector }.ToDataSourceResult(request, ModelState), JsonRequestBehavior.AllowGet);
            }
            catch(Exception ex)
            {
                ModelState.AddModelError(string.Empty, ex.Message);
                return Content(ex.Message + ex.InnerException.Message);
            }
        }

        [AcceptVerbs(HttpVerbs.Post)]
        [ValidateAntiForgeryToken]
        [CustomAuthorize("ConnectionPermissionEdit")]
        public ActionResult DataConnection_TestConnection(ConnectorDTO _dtoConnector)
        {
            try
            {
                objConnectorRepository = new ConnectorRepository(_dtoConnector);
                objConnectorRepository.TestConnection();

                return Json(new { success = true, message = Resources.Resources.ConnectorTestMessage });
            }
            catch(Exception ex)
            {
                return Json(new { success = false, message = ex.Message + " " + ex.InnerException.Message });
            }
           
           

            
        }

    }
}