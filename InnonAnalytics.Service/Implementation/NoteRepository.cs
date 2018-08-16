using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
    public class NoteRepository : INoteRepository
    {

        private IInnonAnalyticsEngineEntities _dbcontext;

        public NoteRepository(IInnonAnalyticsEngineEntities _db)
        {
            _dbcontext = _db;
        }

        public bool Save(string row_id, string table_name, string note, string user_id)
        {
            tblNote tblnote = new tblNote { Table_Name=table_name, Table_Row_Id = row_id, Comments = note, User_Id = user_id, Last_Updated = System.DateTime.Now };
            _dbcontext.tblNotes.Add(tblnote);
            _dbcontext.SaveChanges();
            return true;
        }

        public bool Save(Note_DTO note_dto)
        {
            tblNote note = Convert_Note.Convert(note_dto);
            _dbcontext.tblNotes.Add(note);
            _dbcontext.SaveChanges();
            return true;
        }

        public Note_DTO Get(int id)
        {
            tblNote tbl_note = _dbcontext.tblNotes.SingleOrDefault(note => note.Id == id);
            return Convert_Note.Convert(tbl_note);
        }

        public IList<Note_DTO> Get(string row_id, string table_name)
        {
            IQueryable<tblNote> tbl_notes = _dbcontext.tblNotes.Where(notes => notes.Table_Row_Id == row_id && notes.Table_Name == table_name);
            return Convert_Note.Convert(tbl_notes.OrderByDescending(order => order.Last_Updated).ToList());
        }


        public Note_DTO GetLastNote(int id)
        {
            tblNote tbl_note = _dbcontext.tblNotes.Where(note => note.Id == id).OrderByDescending(order=>order.Last_Updated).SingleOrDefault();
            return Convert_Note.Convert(tbl_note);
        }



        public IList<Note_DTO> GetAll()
        {
            IQueryable<tblNote> tbl_notes = _dbcontext.tblNotes;
            return Convert_Note.Convert(tbl_notes.ToList());
        }

    }
}
