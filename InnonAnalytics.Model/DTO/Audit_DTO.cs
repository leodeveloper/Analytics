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
    public class Audit_DTO
    {
        public int Id { get; set; }

        public string User_Id { get; set; }

        public string Table_Row_Id { get; set; }

        public string Table_Name { get; set; }

        public string Old_Values { get; set; }

        public string New_Values { get; set; }

        public string Comments { get; set; }

        public DateTime Last_Update { get; set; } = System.DateTime.Now;
    }


    public static class Convert_Aduit
    {
        public static List<tblAudit> Convert(IList<Audit_DTO> audits_dto)
        {
            return Mapper.Map<IList<Audit_DTO>, List<tblAudit>>(audits_dto);
        }

        public static tblAudit Convert(Audit_DTO audit_dto)
        {
            return Mapper.Map<Audit_DTO, tblAudit>(audit_dto);
        }

        public static List<Audit_DTO> Convert(IList<tblAudit> audits_tbl)
        {
            return Mapper.Map<IList<tblAudit>, List<Audit_DTO>>(audits_tbl);
        }

        public static Audit_DTO Convert(tblAudit audit_tbl)
        {
            return Mapper.Map<tblAudit, Audit_DTO>(audit_tbl);
        }
    }



    public abstract class Audit_Info_DTO
    {
        public string Last_Changes { get; set; } = " ";

        [DisplayFormat(DataFormatString = "{0:dd/MM/yyyy HH:mm:ss}")]
        public DateTime? Last_Updated { get; set; }
    }

}
