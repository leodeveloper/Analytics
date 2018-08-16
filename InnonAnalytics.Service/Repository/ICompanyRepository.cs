using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using InnonAnalytics.Model.DTO;

namespace InnonAnalytics.Service.Repository
{
    public interface ICompanyRepository
    {

        List<CompanyDTO> GetAllCompanies();
        List<CompanyDTO> GetCompanies(int ParentID);
        List<CompanyDTO> GetCompaniesByParentID(int ParentID);
        CompanyDTO GetCompanyByID(int ID);
        List<CompanyDTO> GetParentCompanies();

        int SaveCompany(CompanyDTO Company);
    }
}
