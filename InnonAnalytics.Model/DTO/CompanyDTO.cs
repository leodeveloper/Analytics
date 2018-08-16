using AutoMapper;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class CompanyDTO
    {
        public int ID { get; set; }
        public string CompanyName { get; set; }
        public string FirstName { get; set; }
        public string LastName { get; set; }
        public string Email { get; set; }
        public string AddressLine1 { get; set; }
        public string AddressLine2 { get; set; }
        public string Postcode { get; set; }
        public string ContactNumber { get; set; }
        public bool Disable { get; set; }
        public Nullable<int> ParentID { get; set; }
        public System.DateTime DateOfRegistration { get; set; }
        public string City { get; set; }
        public int CountryID_FK { get; set; }
        public string ProfilePic { get; set; }
        public string ColorScheme { get; set; }
        public string Header { get; set; }
        public string Footer { get; set; }

        //public virtual ICollection<Company> Company1 { get; set; }
        //public virtual Company Company2 { get; set; }
        public virtual CountryDTO Country { get; set; }
    }

    public static class CompanyConvert
    {
        //public static List<CompanyDTO> ConvertTableToDTO(IEnumerable<Company> tblCompany)
        //{
        //    List<CompanyDTO> ListCompanyDTO = new List<CompanyDTO>();
        //    CompanyDTO objCompanyDTO;
        //    foreach (var vCompany in tblCompany)
        //    {
        //        objCompanyDTO = new CompanyDTO();
        //        objCompanyDTO = ConvertTableToDTO(vCompany);
        //        ListCompanyDTO.Add(objCompanyDTO);
        //    }

        //    return ListCompanyDTO;
        //}

        //public static CompanyDTO ConvertTableToDTO(Company tblCompany)
        //{
        //    CompanyDTO objCompanyDTO = new CompanyDTO();
        //    objCompanyDTO = Mapper.Map<Company, CompanyDTO>(tblCompany);
        //    return objCompanyDTO;
        //}

        //public static Company ConvertDTOToTable(CompanyDTO objCompanyDTO)
        //{
        //    Company tblCompanyDTO = new Company();
        //    tblCompanyDTO = Mapper.Map<CompanyDTO, Company>(objCompanyDTO);
        //    return tblCompanyDTO;
        //}
    }
}
