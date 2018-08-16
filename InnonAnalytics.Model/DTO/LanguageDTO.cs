using AutoMapper;
using FluentValidation.Attributes;
using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Model.DTOValidators;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class LanguageDTO
    {
        public int ID { get; set; }
        public string Name { get; set; }
        public string CultureValue { get; set; }
        public bool IsDisable { get; set; }

     //   public virtual ICollection<DescriptionDTO> Description { get; set; }
    }  

    public static class LanguageDTOConvert
    {
        public static LanguageDTO ConvertTableToDTO(tblLanguage objtblLanguage)
        {
            LanguageDTO objLanguageDTO = new LanguageDTO();
            objLanguageDTO = Mapper.Map<tblLanguage, LanguageDTO>(objtblLanguage);
            return objLanguageDTO;
        }

        public static List<LanguageDTO> ConvertTableToDTO(IEnumerable<tblLanguage> tblLanguages)
        {
            List<LanguageDTO> listofLanguagesDTO = new List<LanguageDTO>();
            foreach (var vlanguage in tblLanguages)
            {
                listofLanguagesDTO.Add(Mapper.Map<tblLanguage, LanguageDTO>(vlanguage));
            }
            return listofLanguagesDTO;
        }

      
    }

     [Validator(typeof(LanguageValueDTOValidator))]
    public class LanguageValueDTO
    {

         public long DescriptionID_FK { get; set; }

        public int LanguageID_FK { get; set; }

        public string CultureValue { get; set; }

        public string ShortValue { get; set; }

        public string LongValue { get; set; }
    }

    public static class LanguageValueDTOConvert
    {

      

        public static IList<LanguageValueDTO> listLanguageValueDTO { get; set; }

        public static LanguageValueDTO ConvertTableToDTO(tblLanguage objtblLanguage)
        {
            LanguageValueDTO objLanguageValueDTO = new LanguageValueDTO();
            objLanguageValueDTO.LanguageID_FK = objtblLanguage.ID;
            objLanguageValueDTO.CultureValue = objtblLanguage.Culture_Value;
            objLanguageValueDTO.ShortValue = string.Empty;
            objLanguageValueDTO.LongValue = string.Empty;
            return objLanguageValueDTO;
        }

        public static LanguageValueDTO ConvertTableToDTO(tblLanguageDescription objtblLanguageDescription)
        {
            LanguageValueDTO objLanguageValueDTO = new LanguageValueDTO();
            objLanguageValueDTO.LanguageID_FK = objtblLanguageDescription.Language_ID;
            objLanguageValueDTO.CultureValue = objtblLanguageDescription.tblLanguage.Culture_Value;
            objLanguageValueDTO.ShortValue = objtblLanguageDescription.Short_Desription;
            objLanguageValueDTO.LongValue = objtblLanguageDescription.Long_Description;
            objLanguageValueDTO.DescriptionID_FK = objtblLanguageDescription.Description_ID;
            return objLanguageValueDTO;
        }

        public static IList<LanguageValueDTO> ConvertTableToDTO(IEnumerable<tblLanguageDescription> listtblLanguageDescription)
        {
            IList<LanguageValueDTO> listofLanguageValueDTO = new List<LanguageValueDTO>();
            foreach(var tblLanguageDescription in  listtblLanguageDescription)
            {
               listofLanguageValueDTO.Add(ConvertTableToDTO(tblLanguageDescription));
            }

            // languageValueDTO.ShortValue = string.IsNullOrEmpty(languageValueDTO.ShortValue) ? Resources.ShortDescriptionNotAvailable : languageValueDTO.ShortValue; //objtblLanguageDescription.ShortDes;
//            languageValueDTO.LongValue = string.IsNullOrEmpty(languageValueDTO.LongValue) ? Resources.ShortDescriptionNotAvailable : languageValueDTO.LongValue; //objtblLanguageDescription.LongDes;

  
            //This is the very special logic for multi langugae, let suppose initial system save data only in one language(English), add another language(Romainion) than the following line of code create an empty object for this language
            //so at the time of editing the empty box will apear with out any error
            foreach (var languageValueDTO in LanguageValueDTOConvert.listLanguageValueDTO.Where(y => !listofLanguageValueDTO.Any(z => z.CultureValue == y.CultureValue)))
            {               
                listofLanguageValueDTO.Add(languageValueDTO);
            }
            //End
            
            return listofLanguageValueDTO;
        }

        public static List<LanguageValueDTO> ConvertTableToDTO(IEnumerable<tblLanguage> tblLanguages)
        {

          //  InnonAnalytics.Model.Filters.getTestEncryDecrypt.get("", "");

            List<LanguageValueDTO> listofLanguagesDTO = new List<LanguageValueDTO>();
            foreach (var vlanguage in tblLanguages)
            {
                listofLanguagesDTO.Add(ConvertTableToDTO(vlanguage));
            }
            return listofLanguagesDTO;
        }
    }

}
