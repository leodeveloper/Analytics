using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class Chart_Common_Properties_DTO
    {
        public TimeLine? Time_Line { get; set; }

        public DateTime? From_Date { get; set; }

        public DateTime? To_Date { get; set; }

        public Int16 Precision { get; set; }
    }

    public static class Chart_Common_Properties_Convert
    {
        public static Chart_Common_Properties_DTO Convert_Anonymous_Object_To_DTO(dynamic chart_obj)
        {
            if (chart_obj == null) throw new ArgumentNullException("Invalid Chart, This widget does not have the time line");
            Chart_Common_Properties_DTO _dto = new Chart_Common_Properties_DTO();
            try
            {
                if (chart_obj.Time_Line != null)
                    _dto.Time_Line = (TimeLine)Enums.TryParse(typeof(TimeLine), chart_obj.Time_Line);
                _dto.From_Date = chart_obj.From_Date;
                _dto.To_Date = chart_obj.To_Date;
                _dto.Precision = chart_obj.Precision;
                return _dto;
            }            
            catch (Exception ex)
            {
                throw ex;
            }

        }
    }

  
}
