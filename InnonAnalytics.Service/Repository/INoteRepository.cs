using System.Collections.Generic;
using InnonAnalytics.Model.DTO;

namespace InnonAnalytics.Service.Repository
{
    public interface INoteRepository
    {
        Note_DTO Get(int id);
        IList<Note_DTO> Get(string row_id, string table_name);
        IList<Note_DTO> GetAll();
        Note_DTO GetLastNote(int id);
        bool Save(Note_DTO note_dto);
        bool Save(string row_id, string table_name, string note, string user_id);
    }
}