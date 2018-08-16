using AutoMapper;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{


    // Selection Type is for the Dropdownlist
    public class SelectionTypeDTO
    {
        public int ID { get; set; }
        public string Default { get; set; }

        public DescriptionDTO Description { get; set; }

        public bool Disable { get; set; }

        public virtual ICollection<SelectionTypeValueDTO> SelectionValues { get; set; }
    }

    public static class SelectionTypeDTOConvert
    {
        //public static SelectionTypeDTO SelectionTypeTableConvertToDTO(SelectionType tblSelectionType)
        //{
        //    SelectionTypeDTO objSelectionType = new SelectionTypeDTO();
        //    objSelectionType = Mapper.Map<SelectionType, SelectionTypeDTO>(tblSelectionType);
        //    return objSelectionType;
        //}

        //public static List<SelectionTypeDTO> SelectionTypeTableConvertToDTO(IEnumerable<SelectionType> tblSelectionType)
        //{
        //    List<SelectionTypeDTO> listofSelectionTypeDTO = new List<SelectionTypeDTO>();
        //    foreach (var vSelectionType in tblSelectionType)
        //    {
        //        listofSelectionTypeDTO.Add(Mapper.Map<SelectionType, SelectionTypeDTO>(vSelectionType));
        //    }
        //    return listofSelectionTypeDTO;
        //}

    }
}
