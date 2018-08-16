using InnonAnalytics.Common;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Service.Implementation;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace InnonAnalytics.Web.Controllers
{
    public class AttributeTypeController : Controller
    {

       // private static ILanguageRepository objLanguageRepository;
        // GET: AttributeType
        public ActionResult Index()
        {
            return View();
        }


        public ActionResult AddNewAttribute()
        {
           // IEnumerable<LanguageDTO> objLanguageDTO;
            
            //objLanguageRepository = new LanguageRepository();
            //objLanguageDTO = objLanguageRepository.GetAllActiveLanguage();
            //ViewData["languageDTO"] = objLanguageDTO;
            ViewBag.DataType = new SelectList(Helper.GetTypeCodes());
            ViewBag.ValueType = new SelectList(Enum.GetValues(typeof(ValueTypeForAttribute))
                                                       .Cast<ValueTypeForAttribute>());

            return View();
        }

        public ActionResult SaveAttribute()
        {

            return View();
        }

        // GET: AttributeType/Details/5
        public ActionResult Details(int id)
        {
            return View();
        }

        // GET: AttributeType/Create
        public ActionResult Create()
        {
            return View();
        }

        // POST: AttributeType/Create
        [HttpPost]
        public ActionResult Create(FormCollection collection)
        {
            try
            {
                // TODO: Add insert logic here

                return RedirectToAction("Index");
            }
            catch
            {
                return View();
            }
        }

        // GET: AttributeType/Edit/5
        public ActionResult Edit(int id)
        {
            return View();
        }

        // POST: AttributeType/Edit/5
        [HttpPost]
        public ActionResult Edit(int id, FormCollection collection)
        {
            try
            {
                // TODO: Add update logic here

                return RedirectToAction("Index");
            }
            catch
            {
                return View();
            }
        }

        // GET: AttributeType/Delete/5
        public ActionResult Delete(int id)
        {
            return View();
        }

        // POST: AttributeType/Delete/5
        [HttpPost]
        public ActionResult Delete(int id, FormCollection collection)
        {
            try
            {
                // TODO: Add delete logic here

                return RedirectToAction("Index");
            }
            catch
            {
                return View();
            }
        }
    }
}
