using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;

namespace InnonAnalytics.Service.Implementation
{
    public abstract class AuditRepository
    {

        private InnonAnalyticsEngineEntities _dbcontext;

        protected void SaveAduit(string user_id, string row_id, string table_name, string old_values, string new_values, string comments)
        {
            try
            {
                _dbcontext = new InnonAnalyticsEngineEntities();
                Audit_DTO audit_dto = new Audit_DTO();
                audit_dto.Comments = comments;
                audit_dto.New_Values = new_values;
                audit_dto.Old_Values = old_values;
                audit_dto.Table_Name = table_name;
                audit_dto.Table_Row_Id = row_id;
                audit_dto.User_Id = user_id;

                tblAudit tbl_audit = Convert_Aduit.Convert(audit_dto);

                _dbcontext.tblAudits.Add(tbl_audit);
                _dbcontext.SaveChanges();
                _dbcontext.Dispose();
            }
            catch(Exception ex)
            {

            }
        }

        protected IList<Audit_DTO> GetAudit(string row_id, string table_name)
        {
            _dbcontext = new InnonAnalyticsEngineEntities();
            IQueryable<tblAudit> audits = _dbcontext.tblAudits.Where(audit => audit.Table_Row_Id == row_id && audit.Table_Name == table_name).OrderByDescending(order => order.Last_Update);
            return Convert_Aduit.Convert(audits.ToList());
        }

        protected IList<Audit_DTO> GetAudit(IEnumerable<string> row_ids, string table_name)
        {
            //_dbcontext = new InnonAnalyticsEngineEntities();
            //IQueryable<tblAudit> audits = _dbcontext.tblAudits.Where(audit => audit.Table_Row_Id == row_id && audit.Table_Name == table_name);
            //return Convert_Aduit.Convert(audits.ToList());
            throw new NotImplementedException();
        }

        protected Audit_DTO GetLastAudit(string row_id, string table_name)
        {
            _dbcontext = new InnonAnalyticsEngineEntities();
            tblAudit _audit = _dbcontext.tblAudits.Where(audit => audit.Table_Row_Id == row_id && audit.Table_Name == table_name).OrderByDescending(order=>order.Last_Update).FirstOrDefault();
            return Convert_Aduit.Convert(_audit);
        }

        protected Audit_DTO GetLastAudit(string row_id, string table_name, LivePoint_DTO livepoint_dto)
        {
            _dbcontext = new InnonAnalyticsEngineEntities();
            tblAudit _audit = _dbcontext.tblAudits.Where(audit => audit.Table_Row_Id == row_id && audit.Table_Name == table_name).OrderByDescending(order => order.Last_Update).FirstOrDefault();
            if(_audit != null)
            {
                livepoint_dto.Last_Changes = $"Previous value {_audit.Old_Values}, Change by {_audit.User_Id}";
                livepoint_dto.Last_Updated = _audit.Last_Update;
            }
           
            return Convert_Aduit.Convert(_audit);
        }


    }
}
