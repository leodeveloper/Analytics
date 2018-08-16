using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class Unit_Of_Measurement_DTO
    {
        public int ID { get; set; }
        public string Unit_Name { get; set; }
        public string Unit_Symbol { get; set; }

        public string Unit_Name_Symbol { get { return this.Unit_Name + " " + this.Unit_Symbol; } }

        public bool Is_Disabled { get; set; }


        public static IList<Unit_Of_Measurement_DTO> Unit_DTO { get; set; }

        public static Unit_Of_Measurement_DTO Convert_Table_To_DTO(tblUnit Unit)
        {
            Unit_Of_Measurement_DTO Unit_DTO = new Unit_Of_Measurement_DTO();

            if (Unit != null)
            {
                Unit_DTO.ID = Unit.ID;
                Unit_DTO.Unit_Name = Unit.UName;
                Unit_DTO.Unit_Symbol = Unit.USymbol;
                Unit_DTO.Is_Disabled = Unit.Is_Disabled;
            }
            else
            {
                Unit_DTO.Unit_Name = "";
                Unit_DTO.Unit_Symbol = "";
            }
           
            return Unit_DTO;
        }

        public static IList<Unit_Of_Measurement_DTO> Convert_List_Table_To_DTO_List(IEnumerable<tblUnit> Units)
        {

            IList<Unit_Of_Measurement_DTO> Unit_DTO = new List<Unit_Of_Measurement_DTO>();
            foreach (var unit in Units)
            {
                Unit_DTO.Add(Convert_Table_To_DTO(unit));
            }
            return Unit_DTO;
        
        }

    }

    public static class Unit_Of_Measurement_DTO_Convert
    {
        public static Unit_Of_Measurement_DTO Convert_Table_To_DTO(tblUnit Unit)
        {
            Unit_Of_Measurement_DTO Unit_DTO = new Unit_Of_Measurement_DTO();
            try
            {
                if (Unit != null)
                {
                    Unit_DTO.ID = Unit.ID;
                    Unit_DTO.Unit_Name = Unit.UName;
                    Unit_DTO.Unit_Symbol = Unit.USymbol;
                    Unit_DTO.Is_Disabled = Unit.Is_Disabled;
                }
                else
                {
                    Unit_DTO.Unit_Name = Resources.NoUnitDefined;
                    Unit_DTO.Unit_Symbol = Resources.NoUnitDefined;
                }
            }
            catch (Exception ex)
            {
                Unit_DTO.Unit_Name = Resources.NoUnitDefined + " - " + ex.Message;
                Unit_DTO.Unit_Symbol = Resources.NoUnitDefined;
            }


            return Unit_DTO;
        }

        public static IList<Unit_Of_Measurement_DTO> Convert_List_Table_To_DTO_List(IEnumerable<tblUnit> Units)
        {

            IList<Unit_Of_Measurement_DTO> Unit_DTO = new List<Unit_Of_Measurement_DTO>();
            foreach (var unit in Units)
            {
                Unit_DTO.Add(Convert_Table_To_DTO(unit));
            }
            return Unit_DTO;

        }
    }

    

   
}
