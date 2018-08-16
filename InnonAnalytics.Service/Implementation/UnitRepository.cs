using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Exceptions;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
    public class UnitRepository : IUnitRepository
    {
        //private static IList<Unit_Of_Measurement_DTO> Unit_DTO;
         static IInnonAnalyticsEngineEntities context;
        //static LanguageRepository()
        //{
        //    getAllActiveLanguage();
        //}

         public UnitRepository(IInnonAnalyticsEngineEntities db)
         {
             context = db;

            
         }

        public static void InitializeUnit()
        {
            if (context == null)
                context = new InnonAnalyticsEngineEntities();

            if (Unit_Of_Measurement_DTO.Unit_DTO == null)
            {
                Unit_Of_Measurement_DTO.Unit_DTO =  GetAllActiveUnits();
            }           
        }

        private static IList<Unit_Of_Measurement_DTO> GetAllActiveUnits()
        {
            IEnumerable<tblUnit> Units = context.tblUnits.Where(u => u.Is_Disabled == false); 
            if(Units.Count() > 0)
            {
                return Unit_Of_Measurement_DTO.Convert_List_Table_To_DTO_List(Units);
            }
            else
            {
               throw new UnitException(Resources.UnitNotFound);
            }

        }
    }

    public interface IUnitRepository
    {

    }
}
