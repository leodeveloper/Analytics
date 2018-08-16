using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public abstract class LanguageDescriptionMainDTO : DescriptionTextDTO
    {
        public int ID { get; set; }
        public int DescriptionID_FK { get; set; }
        public int LanguageID_FK { get; set; }
      
    }


    public class LanguageDescriptionDTO : LanguageDescriptionMainDTO
    {
        public LanguageDTO Language { get; set; }
        public DescriptionDTO Description { get; set; }
    }

    public class DescriptionTextDTO
    {
        public string ShortDescription { get; set; }
        public string LongDescription { get; set; }
    }

    

    public static class LanguageDescriptionConvert
    {

        public static IList<tblLanguageDescription> LanguageDescriptionConvertDTOToTable(ICollection<LanguageDescriptionDTO> objLanguageDescriptionDTOList)
        {
            IList<tblLanguageDescription> tblLanguageDescription = new List<tblLanguageDescription>();
            foreach(var objLanguageDescriptionDTO in objLanguageDescriptionDTOList )
            {
               tblLanguageDescription.Add(LanguageDescriptionConvertDTOToTable(objLanguageDescriptionDTO));
            }
            return tblLanguageDescription;
        }


        public static tblLanguageDescription LanguageDescriptionConvertDTOToTable(LanguageDescriptionDTO objLanguageDescriptionDTO)
        {
            tblLanguageDescription tblLanguageDescription = new tblLanguageDescription();
            tblLanguageDescription.Description_ID = objLanguageDescriptionDTO.DescriptionID_FK;
            tblLanguageDescription.ID = objLanguageDescriptionDTO.ID;
            tblLanguageDescription.Language_ID = objLanguageDescriptionDTO.LanguageID_FK;
            tblLanguageDescription.Long_Description = objLanguageDescriptionDTO.LongDescription;
            tblLanguageDescription.Short_Desription = objLanguageDescriptionDTO.ShortDescription;
            return tblLanguageDescription;
        }

        public static void LanguageDescriptionConvertDTOToTable(ICollection<LanguageValueDTO> listLanguageValueDTO, ref ICollection<tblLanguageDescription> listtblLanguageDescription)
        {
            tblLanguageDescription objtblLanguageDescription;
            int tblCount = listtblLanguageDescription.Count;
            for(int i=0;i<listLanguageValueDTO.Count();i++)
            {

                if (tblCount == 0 || listLanguageValueDTO.ElementAt(i).DescriptionID_FK == 0)
                {
                    objtblLanguageDescription = new tblLanguageDescription();
                    objtblLanguageDescription.Description_ID = listLanguageValueDTO.ElementAt(i).DescriptionID_FK;
                    objtblLanguageDescription.Short_Desription = listLanguageValueDTO.ElementAt(i).ShortValue;
                    objtblLanguageDescription.Long_Description = listLanguageValueDTO.ElementAt(i).LongValue;
                    objtblLanguageDescription.Language_ID = listLanguageValueDTO.ElementAt(i).LanguageID_FK;
                    listtblLanguageDescription.Add(objtblLanguageDescription);

                }
                else
                {
                    listtblLanguageDescription.ElementAt(i).Description_ID = listLanguageValueDTO.ElementAt(i).DescriptionID_FK;
                    listtblLanguageDescription.ElementAt(i).Short_Desription = listLanguageValueDTO.ElementAt(i).ShortValue;
                    listtblLanguageDescription.ElementAt(i).Long_Description = listLanguageValueDTO.ElementAt(i).LongValue;
                    listtblLanguageDescription.ElementAt(i).Language_ID = listLanguageValueDTO.ElementAt(i).LanguageID_FK;
                }

               
            }
            //throw new NotImplementedException("Use DescriptionDTO Class");
        }


        //public static IList<LanguageDescriptionDTO> LanguageDescriptionConvertDTOToTable(ICollection<tblLanguageDescription> objLanguageDescriptionTBLList)
        //{
        //    IList<LanguageDescriptionDTO> LanguageDescriptionDTO = new List<LanguageDescriptionDTO>();
        //    foreach (var objLanguageDescriptionTBL in objLanguageDescriptionTBLList)
        //    {
        //        LanguageDescriptionDTO.Add(LanguageDescriptionConvertDTOToTable(objLanguageDescriptionTBL));
        //    }
        //    return LanguageDescriptionDTO;
        //}


        //public static LanguageDescriptionDTO LanguageDescriptionConvertDTOToTable(tblLanguageDescription LanguageDescriptionTBL)
        //{
        //    LanguageDescriptionDTO LanguageDescriptionDTO = new LanguageDescriptionDTO();
        //    LanguageDescriptionDTO.DescriptionID_FK = LanguageDescriptionTBL.DescriptionID_FK;
        //    LanguageDescriptionDTO.ID = LanguageDescriptionTBL.ID;
        //    LanguageDescriptionDTO.LanguageID_FK = LanguageDescriptionTBL.LanguageID_FK;
        //    LanguageDescriptionDTO.LongDescription = string.IsNullOrEmpty(LanguageDescriptionTBL.LongDes) ? Resources.ShortDescriptionNotAvailable : LanguageDescriptionTBL.LongDes; 
        //    LanguageDescriptionDTO.ShortDescription = string.IsNullOrEmpty(LanguageDescriptionTBL.ShortDes) ? Resources.ShortDescriptionNotAvailable : LanguageDescriptionTBL.ShortDes;
            
        //    return LanguageDescriptionDTO;

        //}
    }
}
