using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.EntityModel;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{

    /// <summary>
    /// This class is for update the bulk propties of the element/point site equip
    /// </summary>
    public class PropertiesDTO
    {
        [System.ComponentModel.DefaultValue("")]
        public string Point_Name { get; set; }

        [System.ComponentModel.DefaultValue("")]
        public string Point_Name_New { get; set; }

        public int? Unit { get; set; }

        public double? Min_Value { get; set; }

        public double? Max_Value { get; set; }

        public long? Freq { get; set; }

        public Time_Unit Freq_Unit { get; set; }
        public long? Recorded_Freq { get; set; }
        public Time_Unit Recorded_Freq_Unit { get; set; }

        public Data_Formate Data_Type { get; set; }

        public List<ElementDTO> elementDto { get; set; }




        //public void PropertiesModel_Convert(Properties propertyModel)
        //{

        //    IList<ElementDTO> elements = new List<ElementDTO>();
        //    ElementDTO newElement;

        //    foreach (ElementDTO element in propertyModel.elementDto)
        //    {
        //        newElement = new ElementDTO();
        //        switch (element.Element_Tag_Type)
        //        {
        //            case TagType.site:                    
        //                newElement.Element_Name = element.Element_Name;
        //                break;  
        //            case TagType.equip:
        //                newElement.Element_Name = element.Element_Name;
        //                break;
        //            case TagType.point:
        //                newElement.Element_Name = element.Element_Name;
        //                break;
        //            default: throw new Exception(); 


        //        }


        //    }

        //}
    }



    /// <summary>
    /// This DTO perperties is used for the add bulk tagging
    /// </summary>
    public class Bulk_Tagging_Add_DTO
    {

        /// <summary>
        /// site_tag Contains TagID
        /// </summary>
        public long[] site_tag { get; set; }

        /// <summary>
        /// equip_tag Contains TagID
        /// </summary>
        public long[] equip_tag { get; set; }

        /// <summary>
        /// point_tag Contains TagID
        /// </summary>
        public long[] point_tag { get; set; }

        public List<ElementDTO> elementDto { get; set; }
    }

     /// <summary>
    /// This DTO perperties is used for the update bulk tagging, For eaxample "Zone|Z1 assign_tags already assign to 100 points, if want to replace the Zone|Z1 to Zone|Z2 new_tags has the TagID of Z2 and assign_tag has TagId of Z1" 
    /// </summary>
    public class Bulk_Tagging_Update_DTO
    {
        /// <summary>
        /// assign tag are the tag which already assigned
        /// </summary>
        public long assign_tag { get; set; }


        /// <summary>
        /// new_tag are which replace the assign_tag with new_tag. 
        /// </summary>
        public long new_tag { get; set; }

        public List<ElementDTO> elementDto { get; set; }
    }


    
}