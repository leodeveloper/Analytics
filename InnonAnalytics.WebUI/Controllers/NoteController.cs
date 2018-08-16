using InnonAnalytics.Model.DTO;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace InnonAnalytics.WebUI.Controllers
{

    [Authorize]
    public class NoteController : Controller
    {


        private static INoteRepository _iNoteRepository;

        public NoteController(INoteRepository iNoteRepository)
        {
            _iNoteRepository = iNoteRepository;
        }


        // GET: Note
        public ActionResult Index()
        {
            return View();
        }


        [HttpGet]
        public ActionResult GetNotes(string row_id, string table_name)
        {
            IList<Note_DTO> notes = _iNoteRepository.Get(row_id, table_name);
            return PartialView("_ShowNotes", notes);
        }


        [AcceptVerbs(HttpVerbs.Post)]
        //[ValidateAntiForgeryToken]
        public ActionResult SaveNote(string row_id, string table_name, string note)
        {
            bool result = _iNoteRepository.Save(row_id, table_name, note, User.Identity.Name);
            return Json(result, JsonRequestBehavior.AllowGet);
        }
    }
}