using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class Tag_Type_Mapping_DTO
    {
        public string Tag_Type { get; set; }
        public string Point_Dim_Mapping { get; set; }
    }

    public static class Tag_Type_Mapping_Convert
    {
        public static Tag_Type_Mapping_DTO Convert_Tag_Type_Table_TO_DTO(tblTag_Type_Mapping tbl_Tag_Type_Mapping)
        {
            Tag_Type_Mapping_DTO dto_tag_type_mapping = new Tag_Type_Mapping_DTO();
            dto_tag_type_mapping.Point_Dim_Mapping = tbl_Tag_Type_Mapping.Point_Dim_Mapping;
            dto_tag_type_mapping.Tag_Type = tbl_Tag_Type_Mapping.Tag_Type;
            return dto_tag_type_mapping;
        }

        public static IList<Tag_Type_Mapping_DTO> Convert_Tag_Type_Table_TO_DTO(IEnumerable<tblTag_Type_Mapping> list_tbl_Tag_Type_Mapping)
        {
            IList<Tag_Type_Mapping_DTO> dto_tag_type_mapping = new List<Tag_Type_Mapping_DTO>();

            foreach (tblTag_Type_Mapping tbl_Tag_Type_Mapping in list_tbl_Tag_Type_Mapping)
            {
                dto_tag_type_mapping.Add(Convert_Tag_Type_Table_TO_DTO(tbl_Tag_Type_Mapping));
            }

           
            return dto_tag_type_mapping;
        }
    }
}
