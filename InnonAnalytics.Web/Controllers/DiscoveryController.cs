using InnonAnalytics.Common;
using InnonAnalytics.Service.Implementation;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace DataSqueeze.Web.Controllers
{
    public class DiscoveryController : Controller
    {
        IDiscoveryRepository objDiscoveryRep;

        public DiscoveryController(IDiscoveryRepository discoveryrep)
        {

            objDiscoveryRep = discoveryrep;

            if (ConnectorRepository.objAllExistingConnections == null)
                GetAllExistingConnections();
        }

        private static void GetAllExistingConnections()
        {
            ConnectorRepository.GetExistingConnectionsByLanguageID(2);
        }
        
        /// <summary>
        /// 
        /// </summary>
        /// <param name="strDataConnectorType"></param>
        /// <param name="id"></param> Connector ID
        /// <returns></returns>
        public ActionResult Index(string strDataConnectorType, int? id)
        {     

            if (strDataConnectorType != null && id != null)
            {
                try
                {
                                        
                    return Json(objDiscoveryRep.GetNonDiscoverElementByConnectorID(strDataConnectorType, int.Parse(id.ToString())), JsonRequestBehavior.AllowGet);

                   // Json()
                  //  return PartialView("_Points", objDiscoveryRep.GetNonDiscoverElementByConnectorID(strDataConnectorType, int.Parse(id.ToString())));
                }
                catch (Exception ex)
                {
                    //ModelState.AddModelError(string.Empty, ex.Message);
                   // return PartialView("_Points", null);
                    return new HttpStatusCodeResult(400, ex.Message);
                    //return Json(new { Error= "", Message= ex.Message }, JsonRequestBehavior.AllowGet);
                }
            }
            else
            {
                return View(objDiscoveryRep.GetDiscoveryViewModel());
            }
        }

        public ActionResult Index2()
        {
            return this.Json(objDiscoveryRep.GetDiscoveryViewModel().ExistingConnectionAndElements, JsonRequestBehavior.AllowGet);
        }
    }
}