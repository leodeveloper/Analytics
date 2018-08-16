using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Exceptions;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
   
    public class LanguageRepository : ILanguageRepository
    {
        private static IEnumerable<tblLanguage> tblLanguages;
        private  static IList<LanguageValueDTO> objLangugaeValueDTO;
        static IInnonAnalyticsEngineEntities context;
        //static LanguageRepository()
        //{
        //    getAllActiveLanguage();
        //}

        public LanguageRepository(IInnonAnalyticsEngineEntities db)
        {
            context = db;
        }

        //In Global.asx it will initailize, If want to reinitailze please restart the application pool and run the application
        public static void InitializeLangugae()
        {

            if (context == null)
                context = new InnonAnalyticsEngineEntities();

            objLangugaeValueDTO = LanguageValueDTOConvert.ConvertTableToDTO(getAllActiveLanguage());
            LanguageValueDTOConvert.listLanguageValueDTO = objLangugaeValueDTO;
            if (objLangugaeValueDTO.Count() == 0)
                        throw new LanguageException(Resources.LanguageNotFound);
        }

        public static IList<LanguageValueDTO> GetAllActiveLanguageValue()
        {

            if (objLangugaeValueDTO == null)
                InitializeLangugae();

            return objLangugaeValueDTO;
        }

        public static IList<LanguageValueDTO> GetExceptValue(IList<LanguageValueDTO> listofLanguageValueDTO)
        {

            if (objLangugaeValueDTO == null)
                InitializeLangugae();

            return objLangugaeValueDTO.Except(listofLanguageValueDTO).ToList();
        }

        public List<LanguageDTO> GetAllLanguage()
        {
          
            List<LanguageDTO> objListOfLanguages = new List<LanguageDTO>();
            objListOfLanguages = LanguageDTOConvert.ConvertTableToDTO(context.tblLanguages.AsEnumerable());
            return objListOfLanguages;
        }


        /// <summary>
        /// 
        /// </summary>
        /// <returns>List<LanguageDTO></returns>
        public static List<LanguageDTO> GetAllActiveLanguage()
        {
            try
            {
                List<LanguageDTO> objListOfActiveLanguages = new List<LanguageDTO>();
                if (tblLanguages == null)
                {
                   objListOfActiveLanguages = LanguageDTOConvert.ConvertTableToDTO(getAllActiveLanguage());
                }

                return objListOfActiveLanguages;
            }
            catch (LanguageException lex)
            {
                throw lex;
            }
            catch (Exception ex)
            {
                throw ex;
            }
           
        }

        //public static List<LanguageValueDTO> GetAllActiveLanguageValue()        
        //{
        //    try
        //    {
        //        List<LanguageValueDTO> objListOfActiveLanguagesValues = new List<LanguageValueDTO>();
        //        objListOfActiveLanguagesValues = LanguageValueDTOConvert.ConvertTableToDTO(getAllActiveLanguage());

        //        if (objListOfActiveLanguagesValues.Count() == 0)
        //            throw new LanguageException("There is no language available in Database or All languages are disabled");

        //        return objListOfActiveLanguagesValues;
        //    }
        //    catch
        //    {
        //        throw;
        //    }

        //}

        private static IEnumerable<tblLanguage> getAllActiveLanguage()
        {

            if (tblLanguages == null)
            {
                
                
                tblLanguages = context.tblLanguages.Where(l => !l.Is_Disabled).AsEnumerable();
            }
           
            return tblLanguages;
        }
    }

    //public class Employee
    //{
    //    string FirstName;
    //    string LastName;
    //    int Age;

    //    public Employee() { }
    //    public Employee(string fName, string lName, int Age)
    //    {
    //        this.Age = Age;
    //        this.FirstName = fName;
    //        this.LastName = lName;
    //    }
    //    public override string ToString()
    //    {
    //        return String.Format("{0} {1} is {2} years old", FirstName, LastName, Age);
    //    }
    //}

    //public class EmployeesCollection : IEnumerable
    //{
    //    ArrayList alEmployees = new ArrayList();
    //    public EmployeesCollection() { }

    //    //Insert Employee type
    //    public void AddEmployee(Employee e)
    //    {
    //        //boxing
    //        alEmployees.Add(e);
    //    }

    //    //get the employee type
    //    public Employee GetEmployee(int index)
    //    {
    //        //unboxing
    //        return (Employee)alEmployees[index];
    //    }

    //    //to use foreach
    //    IEnumerator IEnumerable.GetEnumerator()
    //    {
    //        return alEmployees.GetEnumerator();
    //    }
    //}

}
