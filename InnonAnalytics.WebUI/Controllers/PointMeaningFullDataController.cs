using InnonAnalytics.Model.DTO;
using InnonAnalytics.Service.Repository;
using Kendo.Mvc.UI;
using Kendo.Mvc.Extensions;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using InnonAnalytics.Model;
using InnonAnalytics.WebUI.Filters;
using InnonAnalytics.Common.Enums;

namespace InnonAnalytics.WebUI.Controllers
{

    [Authorize]
    public class PointMeaningFullDataController : Controller
    {

        
        IConnectorRepository objConnectorRepository;
        IElementRepository objElementRepository;
        ITagRepository objTagRepository;

       

        public PointMeaningFullDataController(IConnectorRepository connectorrep, IElementRepository elementrep, ITagRepository tagrep)
        {
           
            objConnectorRepository = connectorrep;
            objElementRepository = elementrep;
            objTagRepository = tagrep;

           

        }


        // GET: PointMeaningFullData
        public ActionResult Index()
        {
           
           ViewData["unit"] = new SelectList(Unit_Of_Measurement_DTO.Unit_DTO.ToList(), "ID", "Unit_Name_Symbol");
           return View();
        }

        public ActionResult Element_Select([DataSourceRequest]DataSourceRequest request, long? id)
        {
            IList<ElementDTO> obj = objElementRepository.GetElement();
            DataSourceResult result = obj.ToDataSourceResult(request);
            return new JsonResult()
            {
                Data = result,
                JsonRequestBehavior = JsonRequestBehavior.AllowGet,
                MaxJsonLength = Int32.MaxValue
            };
        }

        public JsonResult Element_Update([DataSourceRequest] DataSourceRequest request, ElementDTO element)
        {

            element = objElementRepository.UpdateElement(element);

            if (ModelState.IsValid)
            {
                //employeeDirectory.Update(employee, ModelState);
            }

            return Json(new[] { element }.ToTreeDataSourceResult(request, ModelState));
        }

        public ActionResult GetUnits()
        {
           return Json(Unit_Of_Measurement_DTO.Unit_DTO, JsonRequestBehavior.AllowGet);
        }

        [HttpPost]
        [ValidateJsonAntiForgeryTokenAttribute]
        public ActionResult Update_Point_Properties(PropertiesDTO propertyModel)
        {
            objElementRepository.Update_Element_Properties(propertyModel);            
            return Json(true, JsonRequestBehavior.AllowGet);
        }

        public ActionResult Tag_Select([DataSourceRequest]DataSourceRequest request)
        {
            try
            {
                IList<TagDTO> obj = objTagRepository.SelectAllBy_IsDisable(false).OrderBy(t => t.Tag_Value).OrderBy(tag => tag.Tag_Type_String).ToList();
                DataSourceResult result = obj.ToDataSourceResult(request);

                return Json(obj, JsonRequestBehavior.AllowGet);
            }
            catch
            {
                return Json(null, JsonRequestBehavior.AllowGet);
            }
           
        }


        public ActionResult Tag_Select_By_Point(string element_tag_type)
        {
            try
            {
                IList<TagDTO> obj = objTagRepository.Get_Tags_By_Element_Tag_Type(element_tag_type)
                    .OrderBy(t => t.Tag_Value).OrderBy(tag => tag.Tag_Type_String).ToList();

                return Json(obj, JsonRequestBehavior.AllowGet);
            }
            catch
            {
                return Json(false, JsonRequestBehavior.AllowGet);
            }

        }

        //public ActionResult Tag_Select()
        //{
        //    try
        //    {
        //        IList<TagDTO> obj = objTagRepository.SelectAllBy_IsDisable(false)
        //            .OrderBy(t => t.Tag_Value).OrderBy(tag => tag.Tag_Type_String).ToList();

        //        return Json(obj, JsonRequestBehavior.AllowGet);
        //    }
        //    catch
        //    {
        //        return Json(false, JsonRequestBehavior.AllowGet);
        //    }

        //}

        [HttpPost]
        [ValidateJsonAntiForgeryTokenAttribute]
        public ActionResult Add_tagging(Bulk_Tagging_Add_DTO tagging_elements)
        {
            try
            {
                objElementRepository.Add_Element_Tagging(tagging_elements);
                return Json(true, JsonRequestBehavior.AllowGet);
            }
            catch(Exception ex)
            {
                return Json(false, JsonRequestBehavior.AllowGet);
            }
        }

        [HttpPost]
        [ValidateJsonAntiForgeryTokenAttribute]
        public ActionResult Update_tagging(Bulk_Tagging_Update_DTO tagging_elements)
        {
            try
            {
                objElementRepository.Update_Element_Tagging(tagging_elements);
                return Json(true, JsonRequestBehavior.AllowGet);
            }
            catch (Exception ex)
            {
                return Json(false, JsonRequestBehavior.AllowGet);
            }
        }

      

    }
}