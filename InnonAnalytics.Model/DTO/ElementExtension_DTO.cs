using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class ElementExtension_DTO
    {
        public int ID { get; set; }
        public long Element_ID { get; set; }
        public string Element_Name { get; set; }
        public string Address_1 { get; set; }
        public string Address_2 { get; set; }
        public string Contact_Number_1 { get; set; }
        public string  Contact_Number_2 { get; set; }

        public string Complete_Address { get { return $"{Address_1}, { Address_2 }, {Contact_Number_1}  {Contact_Number_2} "; } }
    }


    public static class ElementExtension_Conversion
    {
        public static ElementExtension_DTO Convert_Tbl_Element_To_ElementExtension_DTO(tblElement_Extension element) =>
            new ElementExtension_DTO()
            {
                ID = element.Id,
                Element_ID = element.tblElement.ID,
                Element_Name = element.tblElement.Element_Name,
                Address_1 = element.Address1,
                Address_2 = element.Address2,
                Contact_Number_1 = element.Contact_Number1,
                Contact_Number_2 = element.Conatct_Number2
            };

        public static IList<ElementExtension_DTO> Convert_List_Tbl_Element_To_ElementExtension_DTO(IList<tblElement_Extension> elements)
        {
            IList<ElementExtension_DTO> ElementExtensions = new List<ElementExtension_DTO>();
            for (int i = 0; i < elements?.Count; i++)
            {
                try
                {
                    ElementExtensions.Add(Convert_Tbl_Element_To_ElementExtension_DTO(elements[i]));
                }
                catch { }
            }
            return ElementExtensions;
        }

    }
}
