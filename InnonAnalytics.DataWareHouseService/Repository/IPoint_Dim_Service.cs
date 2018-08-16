using InnonAnalytics.Model.DTO;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.DataWareHouseService.Repository
{
    public interface IPoint_Dim_Service
    {
        void Update_Point_Dim(IList<ElementDTO> list_element_dto, IList<Tag_Type_Mapping_DTO> list_tag_type_dto);
    }
}
