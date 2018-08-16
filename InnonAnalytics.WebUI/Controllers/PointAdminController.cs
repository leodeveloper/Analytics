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
    public class PointAdminController : Controller
    {
        private static IElementRepository _iElementRepository;
        public PointAdminController(IElementRepository iElementRepository)
        {
            _iElementRepository = iElementRepository;
        }

        // GET: UserDataAdmin
        public ActionResult Index()
        {
            return View();
        }


        public ActionResult Point_Select([DataSourceRequest]DataSourceRequest request, int? id)
        {
            IList<ElementDTO> element_dto = _iElementRepository.GetElement();
            DataSourceResult result = element_dto.ToDataSourceResult(request);
            return new JsonResult()
            {
                Data = result,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };
        }

        [ValidateJsonAntiForgeryTokenAttribute]
        public ActionResult Update_User_Element(Bulk_Update_Element_User_Rights Element_user_rights)
        {

            _iElementRepository.User_Element_Update(Element_user_rights.elementdto, Element_user_rights.userdto.Select(user_ids => user_ids.Id));

            return new JsonResult()
            {
                Data = Element_user_rights,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };
        }

        [ValidateJsonAntiForgeryTokenAttribute]
        public ActionResult Get_User_Elements(Bulk_Update_Element_User_Rights Element_user_rights)
        {
            IList<ElementDTO> Element_dto = _iElementRepository.Get_All_Parent_Child_Element_By_User_Id(Element_user_rights.userdto.Select(user_ids => user_ids.Id));
            return new JsonResult()
            {
                Data = Element_dto,//Element_user_dto,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };
        }
    }
}