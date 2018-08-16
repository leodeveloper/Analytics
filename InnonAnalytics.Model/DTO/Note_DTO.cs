using AutoMapper;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{


    public class Note_DTO
    {
        public int Id { get; set; }
        public string User_Id { get; set; }
        public string Table_Row_Id { get; set; }
        public string Table_Name { get; set; }
        public string Comments { get; set; }
        public DateTime Last_Updated { get; set; } = System.DateTime.Now;
    }


    public class Note_DTO_Single
    {
        public string Comment { get; set; }

        [DisplayFormat(DataFormatString = "{0:dd/MM/yyyy HH:mm:ss}")]
        public DateTime? Last_Updated { get; set; }
    }



    public static class Convert_Note
    {
        public static List<tblNote> Convert(IList<Note_DTO> notes_dto)
        {
            return Mapper.Map<IList<Note_DTO>, List<tblNote>>(notes_dto);
        }

        public static tblNote Convert(Note_DTO note_dto)
        {
            return Mapper.Map<Note_DTO, tblNote>(note_dto);
        }

        public static List<Note_DTO> Convert(IList<tblNote> notes_tbl)
        {
            return Mapper.Map<IList<tblNote>, List<Note_DTO>>(notes_tbl);
        }

        public static Note_DTO Convert(tblNote note_tbl)
        {
            return Mapper.Map<tblNote, Note_DTO>(note_tbl);
        }
    }
}
