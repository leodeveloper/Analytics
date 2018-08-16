using InnonAnalytics.Model.DTO;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Repository
{
    public interface ITagElementRepository
    {
        IList<TagElementDTO> Get_Tag_Element_By_Tag_ID(long tag_id);
        IList<TagElementDTO> Get_Tag_Element_By_Tag_ID(IEnumerable<long> tag_id);

        IEnumerable<long> Get_Element_ID_By_Tag_ID(IEnumerable<long> tag_id);

        IList<TagElementDTO> Get_Tag_Element_By_Element_ID_Tag_ID(IEnumerable<long> element_id, IEnumerable<long> tag_id);
    }
}
