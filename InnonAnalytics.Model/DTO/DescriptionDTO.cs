using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class DescriptionDTO
    {
        public DescriptionDTO()
        {
            this.LanguageDescriptions = new HashSet<LanguageDescriptionDTO>();
        }
        public int ID { get; set; }
        public virtual ICollection<LanguageDescriptionDTO> LanguageDescriptions { get; set; }
    }

  

    public static class DescriptionConvert
    {
        public static tblDescription DescriptionConvertDTOToTbl(DescriptionDTO objDescriptionDTO)
        {
            try
            {
                tblDescription tblDescription = new tblDescription();
                tblDescription.ID = objDescriptionDTO.ID;
                tblDescription.tblLanguageDescriptions = LanguageDescriptionConvert.LanguageDescriptionConvertDTOToTable(objDescriptionDTO.LanguageDescriptions);
                return tblDescription;
            }
            catch
            {
                throw;
            }
        }

        public static void DescriptionConvertDTOToTbl(ICollection<LanguageValueDTO> listLanguageValueDTO, ref tblDescription objtblDescription)
        {
            try
            {
                if (objtblDescription == null)
                    objtblDescription = new tblDescription();

                ICollection<tblLanguageDescription> objtblLanguageDescription = objtblDescription.tblLanguageDescriptions;
                LanguageDescriptionConvert.LanguageDescriptionConvertDTOToTable(listLanguageValueDTO, ref objtblLanguageDescription);
            }
            catch
            {
                throw;
            }
        }

        public static tblDescription DescriptionConvertDTOToTbl(ICollection<LanguageValueDTO> listLanguageValueDTO)
        {
            try
            {
                tblDescription objtblDescription = new tblDescription();

                ICollection<tblLanguageDescription> objtblLanguageDescription = objtblDescription.tblLanguageDescriptions;
                LanguageDescriptionConvert.LanguageDescriptionConvertDTOToTable(listLanguageValueDTO, ref objtblLanguageDescription);
                return objtblDescription;
            }
            catch
            {
                throw;
            }
        }

        public static IList<LanguageValueDTO> DescriptionConvertDTOToTbl(tblDescription objDescriptiontbl)
        {
            try
            {
                return  LanguageValueDTOConvert.ConvertTableToDTO(objDescriptiontbl.tblLanguageDescriptions);              
            }
            catch
            {
                throw;
            }
        }
    }
}
