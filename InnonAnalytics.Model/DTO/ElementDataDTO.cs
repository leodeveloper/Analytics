using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class ElementDataDTO
    {
      //  public int ID { get; set; }
        public DateTime TimeStamp { get; set; }

    //    public int? Status { get; set; }

        public double? Value { get; set; }

   //     public string Status_Tag { get; set; }
   //     public string Flag_Tag { get; set; }
        
    }


    public static class ElementDataDTOConvert
    {
        //public static List<ElementDataDTO> ElementDataConvertTableToDto(IEnumerable<DATASCHEMA> tblDataSchema)
        //{
        //    List<ElementDataDTO> listElementDataDTO = new List<ElementDataDTO>();
        //    ElementDataDTO ElementDataDTO;
        //    foreach(var DataSchema in tblDataSchema)
        //    {
        //        ElementDataDTO = new ElementDataDTO();
        //      //  ElementDataDTO.ID = DataSchema.ID;
        //     //   ElementDataDTO.Status = DataSchema.STATUS;
        //     //   ElementDataDTO.Status_Tag = DataSchema.STATUS_TAG;
        //        ElementDataDTO.TimeStamp = DataSchema.Timestamp;
        //        ElementDataDTO.Value = DataSchema.VALUE;
        //    //    ElementDataDTO.Flag_Tag = DataSchema.TRENDFLAGS_TAG;
        //        listElementDataDTO.Add(ElementDataDTO);
        //    }
        //    return listElementDataDTO;
        //}
    }

    //Start Date, End Date, Rollup Function, Rollup, Interval, Schedule

    public class ElementDataSearchParameters
    {
        public DateTime StartDate { get; set; }
        public DateTime EndDate { get; set; }

        public string RollupFunction { get; set; } //Sum, Avg, Min, Max, Sum, Cum
        public int Rollup { get; set; } // 1 sec, 1 min and son on to 1 day

        public string Interval { get; set; }

        public string Schedule { get; set; }
    }
}
