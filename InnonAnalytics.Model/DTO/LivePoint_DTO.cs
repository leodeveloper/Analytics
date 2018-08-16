using InnonAnalytics.Common.Enums;
using InnonAnalytics.LiveVariables;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{

    /// <summary>
    /// This class is for the live point dashboard
    /// </summary>
    public class LivePoint_DTO : Audit_Info_DTO
    {

        public LivePoint_DTO()
        {
            this.Element_Parent_Child = new Element_Hierarchy_DTO();
        }

        public long Point_Id { get; set; }
        public Element_Hierarchy_DTO Element_Parent_Child { get; set; }      

        public TagType Point_Type { get; set; }
        public string Point_Type_String { get { return Point_Type.ToString(); } }
        public bool HasChildren { get; set; } = false;

        public LivePoint_ResponseDTO Current_Value { get; set; } = new LivePoint_ResponseDTO();

        public string Live_Value { get { return this.Current_Value?.dValue != null ? this.Current_Value.dValue.ToString() : this.Current_Value?.bValue != null ? this.Current_Value.bValue.ToString() : ""; }  }       

        public string Address { get; set; }

        public Unit_Of_Measurement_DTO Unit { get; set; }

        public Note_DTO_Single Last_Comment { get; set; } = new Note_DTO_Single();

        public Error_DTO Error_Info { get; set; }

        /// <summary>
        /// This proptery is for write value from the portal live point if the value true than would be able change the value from the service
        /// </summary>
        public bool IsRead_Only { get; set; }

    }


    public static class LivePoint_Conversion
    {
        public static LivePoint_DTO Convert_Tbl_Element_To_LivePoint_DTO(tblElement element) => new LivePoint_DTO()
        {
            Point_Id = element.ID,
            Element_Parent_Child = Element_Hierarchy_Convert.Get_Element_Hierarchy(element),
            Point_Type = (TagType)Enums.TryParse(typeof(TagType), element.Element_Tag_Type),
            Unit = Unit_Of_Measurement_DTO.Convert_Table_To_DTO(element.tblUnit),
           // Parent_Name = element.tblElement2?.Element_Name, //tblElement2 for parent
            HasChildren = element.tblElement1.Any(), //tblElement1 for children
            Address = element.tblElement_Extension.FirstOrDefault() != null ?   ElementExtension_Conversion.Convert_Tbl_Element_To_ElementExtension_DTO(element.tblElement_Extension.FirstOrDefault()).Complete_Address : "",
            IsRead_Only = element.IsRead_Only
        };


        //public static LivePoint_DTO Convert_Tbl_Element_To_LivePoint_DTO(Tbl_Element_Note_DTO element) => new LivePoint_DTO()
        //{
        //    Point_Id = element.tbl_Element.ID,
        //    Point_Name = element.tbl_Element.Element_Name,
        //    Point_Type = (TagType)Enums.TryParse(typeof(TagType), element.tbl_Element.Element_Tag_Type),
        //    Parent_Name = element.tbl_Element.tblElement2?.Element_Name, //tblElement2 for parent
        //    HasChildren = element.tbl_Element.tblElement1.Any(), //tblElement1 for children
        //    Address = element.tbl_Element.tblElement_Extension.FirstOrDefault() != null ? ElementExtension_Conversion.Convert_Tbl_Element_To_ElementExtension_DTO(element.tbl_Element.tblElement_Extension.FirstOrDefault()).Complete_Address : "",
           
        //};

        public static LivePoint_DTO Convert_Tbl_Element_To_LivePoint_DTO(Tbl_Element_Note_DTO element)
        {

            

            LivePoint_DTO livepoint_dto = new LivePoint_DTO();
            livepoint_dto.Point_Id = element.tbl_Element.ID;
            livepoint_dto.Element_Parent_Child = Element_Hierarchy_Convert.Get_Element_Hierarchy(element.tbl_Element);
            livepoint_dto.Point_Type = (TagType)Enums.TryParse(typeof(TagType), element.tbl_Element.Element_Tag_Type);
            livepoint_dto.Unit = Unit_Of_Measurement_DTO.Convert_Table_To_DTO(element.tbl_Element.tblUnit);
            // livepoint_dto.Parent_Name = element.tbl_Element.tblElement2?.Element_Name; //tblElement2 for parent
            livepoint_dto.HasChildren = element.tbl_Element.tblElement1.Any(); //tblElement1 for children
            livepoint_dto.Address = element.tbl_Element.tblElement_Extension.FirstOrDefault() != null ? ElementExtension_Conversion.Convert_Tbl_Element_To_ElementExtension_DTO(element.tbl_Element.tblElement_Extension.FirstOrDefault()).Complete_Address : "";
            livepoint_dto.Last_Comment.Comment = element.tbl_Single_Last_Note == null ? "No Comments" : element.tbl_Single_Last_Note?.Comments;
            livepoint_dto.Last_Comment.Last_Updated = element.tbl_Single_Last_Note?.Last_Updated;
            livepoint_dto.IsRead_Only = element.tbl_Element.IsRead_Only;
            return livepoint_dto;
        }
        public static IList<LivePoint_DTO> Convert_List_Tbl_Element_To_LivePoint_DTO(IList<Tbl_Element_Note_DTO> elements)
        {
            IList<LivePoint_DTO> livepoints = new List<LivePoint_DTO>();
            for (int i = 0; i < elements?.Count; i++)
            {
                try
                {

                    livepoints.Add(Convert_Tbl_Element_To_LivePoint_DTO(elements[i]));
                }
                catch { }
            }
            return livepoints;
        }

    }


   
    

}
