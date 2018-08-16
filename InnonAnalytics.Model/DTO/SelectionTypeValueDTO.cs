using AutoMapper;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{

    // Selection Type is for the Dropdownlist values
    public class SelectionTypeValueDTO
    {
        public int ID { get; set; }

        //public SelectionTypeDTO SelectionType { get; set; }

        public int SelectionTypeID { get; set; }

       // public string SelectionTypeName { get; set; }

        public string SelectionValue { get; set; }
        public string SelectionText { get; set; }
    }


    public static class SelectionTypeValueDTOConvert
    {
        //public static SelectionTypeValueDTO SelectionTypeTableConvertToDTO(SelectionTypeValue tblSelectionType)
        //{
        //    SelectionTypeValueDTO objSelectionTypeValue = new SelectionTypeValueDTO();
        //    objSelectionTypeValue = Mapper.Map<SelectionTypeValue, SelectionTypeValueDTO>(tblSelectionType);
        //    return objSelectionTypeValue;
        //}

        //public static List<SelectionTypeValueDTO> SelectionTypeTableConvertToDTO(IEnumerable<SelectionTypeValue> tblSelectionTypeValue)
        //{
        //    List<SelectionTypeValueDTO> listofSelectionTypeValueDTO = new List<SelectionTypeValueDTO>();
        //    foreach (var vobjSelectionTypeValue in tblSelectionTypeValue)
        //    {
        //        listofSelectionTypeValueDTO.Add(Mapper.Map<SelectionTypeValue, SelectionTypeValueDTO>(vobjSelectionTypeValue));
        //    }
        //    return listofSelectionTypeValueDTO;
        //}

    }
}
