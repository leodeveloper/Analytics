using InnonAnalytics.Model.DTO;
using InnonAnalytics.Service.Repository;
using InnonAnalytics.WebUI.Filters;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using System.Web;
using System.Web.Mvc;

namespace InnonAnalytics.WebUI.Controllers
{
    [Authorize]
    public class PointController : Controller
    {

        private IElementRepository _elementRepository;


        public PointController(IElementRepository elementRepository)
        {
            _elementRepository = elementRepository;
        }


        // GET: Point
        public ActionResult Index()
        {
            return View();
        }


        [CustomAuthorize("DataPointPremissionView")]
        public async Task<ActionResult> GetAllElement()
        {

            IList<ElementDTO_Limited_Properties> element_dto = await Task.Run(() => _elementRepository.GetElementLimitedProperties());           

            return new JsonResult()
            {
                Data = element_dto,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };
        }

        [CustomAuthorize("DataPointPremissionView")]
        [ValidateJsonAntiForgeryTokenAttribute]
        [HttpGet]
        public async Task<ActionResult> GetRawData(long ID)
        {

            IList<RawDataDTO> raw_dto = await Task.Run(() => _elementRepository.Get_Raw_Data_By_Element_Id(ID));

            return new CustomJsonResult()
            {
                Data = raw_dto,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };
        }
    }
}