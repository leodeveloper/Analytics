using InnonAnalytics.Model.DTO;
using InnonAnalytics.Service.Exceptions;
using InnonAnalytics.Service.Implementation;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace DataSqueeze.Web.Controllers
{
      
    public class DataConnectionController : Controller
    {
        private static IConnectorRepository objConnectorRepository;
        public DataConnectionController(IConnectorRepository connectorrepository)
        {
            objConnectorRepository = connectorrepository;
            
            if (ConnectorRepository.objAllExistingConnections == null)
                GetAllExistingConnections();
        }

        private static void GetAllExistingConnections()
        {
            ConnectorRepository.GetExistingConnectionsByLanguageID(2);
        }

        // GET: Connector      
        [HandleError()]
        public ActionResult Index(string strDataConnectorType, int? id)
        {
            if(strDataConnectorType != null && id == null)
            {
                try
                {
                    objConnectorRepository = new ConnectorRepository(strDataConnectorType);
                    objConnectorRepository.GetDataConnectorVM().ExistingConnectionName = ConnectorRepository.objAllExistingConnections;
                    return View(objConnectorRepository.GetDataConnectorVM());

                }
                catch (Exception ex) { ModelState.AddModelError(string.Empty, ex.Message); }   
            }
            if (strDataConnectorType != null && id != null)
            {
                try
                {
                    objConnectorRepository = new ConnectorRepository(strDataConnectorType);
                    objConnectorRepository.GetDataConnectorVM().DataConnectors = objConnectorRepository.GetExistingConnectionsById(int.Parse(id.ToString()));
                    objConnectorRepository.GetDataConnectorVM().ExistingConnectionName = ConnectorRepository.objAllExistingConnections;
                    return View(objConnectorRepository.GetDataConnectorVM());
                }
                catch (Exception ex)
                {
                    ModelState.AddModelError(string.Empty, ex.Message);
                }
            }
            return View(ConnectorConvert.ConvertDTOtoViewModel(ConnectorRepository.objAllExistingConnections));
        }

        
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult CreateDatabaseConnector(ConnectorsDTO objDCDTO)
        {

            if(ModelState.IsValid)
            {
                try
                {
                    objDCDTO.SessionId = Session.SessionID;
                    objConnectorRepository = new ConnectorRepository(objDCDTO);

                    if (Request.Form["btnTest"] != null)
                    {
                        objConnectorRepository.TestConnection();
                        return Json(new { success = true, message = Resources.Resources.ConnectorTestMessage });
                    }
                    else
                    {
                        objConnectorRepository.SaveConnection();
                        GetAllExistingConnections();
                        return Json(new { success = true, message = Resources.Resources.ConnectorSaveMessage });
                    }              
                }
                catch(Exception ex)
                {
                    //ModelState.AddModelError("", "Unable to save changes. Try again, and if the problem persists, see your system administrator.");
                    //Response.StatusCode = 400;
                    //ModelState.AddModelError(string.Empty, ex.Message + ex.InnerException.Message);
                    //return Content(ex.Message + ex.InnerException.Message);

                    return Json(new { success = false, message = ex.Message + ex.InnerException.Message });
                }
            }
            else
                return Content(Resources.Resources.ConnectorValidationFailed);
            
        }
    }
} 

//objConnectionDatabaseDTO.ServerOrIP = "87.106.176.87";
            //objConnectionDatabaseDTO.ServerUserName = "sa";
            //objConnectionDatabaseDTO.ServerPassword = "Andyefrumos1";
            //objConnectionDatabaseDTO.strDatabaseName = "InnonAnalyticsDB_Dev";