using InnonAnalytics.Service.Implementation;
using InnonAnalytics.Service.Repository;
using Kendo.Mvc.UI;
using Kendo.Mvc.Extensions;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Common.Enums;

namespace InnonAnalytics.WebUI.Controllers
{

    [System.Web.Mvc.OutputCache(NoStore = true, Duration = 0, VaryByParam = "*")]
    [Authorize]
    public class DiscoveryController : Controller
    {

        IDiscoveryRepository objDiscoveryRep;
        IConnectorRepository objConnectorRepository;
        IElementRepository objElementRepository;

        public DiscoveryController(IDiscoveryRepository discoveryrep, IConnectorRepository connectorrep, IElementRepository elementrep)
        {
            objDiscoveryRep = discoveryrep;
            objConnectorRepository = connectorrep;
            objElementRepository = elementrep;
        }

        // GET: Discovery
        public ActionResult Index()
        {
            return View();           
        }


        /// <summary>
        /// This action is used for treelist for the connection and its child point/element
        /// </summary>
        /// <param name="request"></param>
        /// <param name="id"></param>
        /// <returns></returns>
        public JsonResult Connection_Point_Select([DataSourceRequest] DataSourceRequest request, int? id, string row_type, string element_source_id, int? connector_id)
        {
            IList<DiscoveryPoint_DTO> list_discovery_point = new List<DiscoveryPoint_DTO>();
            DiscoverPoint_Type discoverypoint_type;

            if (id == null)
                list_discovery_point = objDiscoveryRep.Get_Connection_Points(id);
            else if (Enum.TryParse(row_type, out discoverypoint_type))
            {
                if(discoverypoint_type == DiscoverPoint_Type.Connection)
                    list_discovery_point = objDiscoveryRep.GetNonDiscoverElementByConnectorID((int)id);
                else
                    list_discovery_point = objDiscoveryRep.GetNonDiscoverElementByConnectorID((int)connector_id, element_source_id, (int)id);
            }
            else
                list_discovery_point = objDiscoveryRep.GetNonDiscoverElementByConnectorID((int)id);

            DataSourceResult result = list_discovery_point.ToDataSourceResult(request);
            return new JsonResult()
            {
                Data = result,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };
        }

        public ActionResult DataConnection_Select([DataSourceRequest]DataSourceRequest request)
        {
           // IEnumerable<ExistingConnectionNameDTO> obj = objConnectorRepository.GetExistingConnectionsBy_Is_Active(true);
           // DataSourceResult result = obj.ToDataSourceResult(request);

            return Json(null, JsonRequestBehavior.AllowGet);
        }

      

        public ActionResult Discovery_Select(int connectionID, [DataSourceRequest] DataSourceRequest request)
        {
           // IList<DiscoveryElementDTO> obj = objDiscoveryRep.GetNonDiscoverElementByConnectorID(connectionID);
          //  DataSourceResult result = obj.ToDataSourceResult(request);

            return Json(null, JsonRequestBehavior.AllowGet);
        }


        /// <summary>
        /// This method is for save the points from database
        /// </summary>
        /// <param name="parentID"></param>
        /// <param name="elementDto"></param>
        /// <returns></returns>
     //   [ValidateAntiForgeryToken]
        [HttpPost]
        public ActionResult Element_Point_Save(long parentID, [Bind(Prefix = "datamodel")]IEnumerable<DiscoveryPoint_DTO> elementDto, long tagId)
        {

            objElementRepository.SaveElement(parentID, elementDto, tagId );
            return Json(true, JsonRequestBehavior.AllowGet);
        }
        /// <summary>
        /// this method is for to change parent_element_id, when drag and drop the tree nodes
        /// </summary>
        /// <param name="sourceId"></param>
        /// <param name="destinationId"></param>
        /// <returns></returns>
        [ValidateAntiForgeryToken]
        [HttpPost]
        public ActionResult Element_Point_Update(long sourceId, long destinationId)
        {

            objElementRepository.Updat_Parent_Element(sourceId,destinationId);
            return Json(true, JsonRequestBehavior.AllowGet);
        }


        /// <summary>
        /// This method is for saving the Structure items (Site, Equip) http://stackoverflow.com/questions/14473597/include-antiforgerytoken-in-ajax-post-asp-net-mvc
        /// </summary>
        /// <param name="parentID"></param>
        /// <param name="childName"></param>
        /// <returns></returns>
        [HttpPost]
        [ValidateAntiForgeryToken]
        public ActionResult Element_Structure_Save(long? parentID, string childName, int tagId)
        {

            objElementRepository.SaveElement(parentID, childName, tagId);
            return Json(true, JsonRequestBehavior.AllowGet);
        }

        [HttpGet]        
        public ActionResult Element_Select(long? ID)
        {
            IList<ElementDTO> obj = objElementRepository.GetElementsByID(ID);


            var structure_list = from e in obj
                                 select new
                                 {
                                     ID = e.ID,
                                     Element_Name = e.Element_Name,
                                     Tag = e.Element_Tag_Type.ToString(),
                                     ImgUrl = "../Content/images/" + e.Element_Tag_Type + ".png",

                                     //(e.Element_Tag_Type == TagType.site) ? "../Content/images/site.png" : (e.Element_Tag_Type == TagType.equip) ? "../Content/images/equip.png" : (e.Element_Tag_Type == TagType.point) ? "../Content/images/point.png" : "", //"../Content/images/site.png",
                                     hasChildren = e.HasChildren
                                 };

            return Json(structure_list, JsonRequestBehavior.AllowGet);

         //   return Json(obj, JsonRequestBehavior.AllowGet);
        }
      
    }
}