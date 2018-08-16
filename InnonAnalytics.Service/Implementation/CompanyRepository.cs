using InnonAnalytics.Common;
using InnonAnalytics.Common.Enums;
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
    public class CompanyRepository : ICompanyRepository
    {

        private InnonAnalyticsEngineEntities context;  
        public CompanyRepository()
        {
            context = new InnonAnalyticsEngineEntities();
        }

        public List<CompanyDTO> GetAllCompanies()
        {
            
          //  var Companies = context.Companies.AsEnumerable();
            List<CompanyDTO> listofCompanies = new List<CompanyDTO>();
        //    listofCompanies = CompanyConvert.ConvertTableToDTO(Companies);
           // DBLogSave.logging(context, 3433, "Company", 0, "", "", LoggingActions.Warning);
            return listofCompanies;
        }

        public List<CompanyDTO> GetParentCompanies()
        {
         //   var Companies = context.Companies.Where(d => d.ParentID == null);
            List<CompanyDTO> listofCompanies = new List<CompanyDTO>();
        //    listofCompanies = CompanyConvert.ConvertTableToDTO(Companies);

            return listofCompanies;
        }


        public List<CompanyDTO> GetCompanies(int ParentID)
        {
           // var Companies = context.Companies.Where(c => c.ParentID == ParentID);
            List<CompanyDTO> listofCompanies = new List<CompanyDTO>();
         //   listofCompanies = CompanyConvert.ConvertTableToDTO(Companies);

            return listofCompanies;
        }

        public List<CompanyDTO> GetCompaniesByParentID(int ParentID)
        {
          //  var Companies = context.Companies.Where(c => c.ParentID == ParentID);
            List<CompanyDTO> listofCompanies = new List<CompanyDTO>();
         //   listofCompanies = CompanyConvert.ConvertTableToDTO(Companies);

            return listofCompanies;
        }

        public CompanyDTO GetCompanyByID(int ID)
        {
           // var Companies = context.Companies.SingleOrDefault(d => d.ID == ID);
            CompanyDTO ObjCompany = new CompanyDTO();
          //  ObjCompany = CompanyConvert.ConvertTableToDTO(Companies);

            return ObjCompany;
        }

        public int SaveCompany(CompanyDTO Company)
        {
          //  Company objCompany = new Company();
           // bool finished = false;
            try
            {
              //  objCompany = CompanyConvert.ConvertDTOToTable(Company);
              //  context.Companies.Add(objCompany);
              //  context.SaveChanges();
              //  finished = true;
                return 0; //objCompany.ID;
            }
            catch (Exception ex)
            {
              //  DBLogSave.logging(context, 3433, "Company", 0, "", ex.Message, LoggingActions.Error);
                throw new Exception(ex.Message);
            }
            finally
            {
                //if (finished)
                //    DBLogSave.logging(context, 3433, "Company", objCompany.ID, string.Format("Add new {0} company", objCompany.CompanyName), "Add Company", LoggingActions.Save);
            }

        }
    }
}
