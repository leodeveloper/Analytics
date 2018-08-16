using InnonAnalytics.Common;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
    public class TagElementRepository : ITagElementRepository
    {
        static IInnonAnalyticsEngineEntities _dbcontext;
        public TagElementRepository(IInnonAnalyticsEngineEntities dbcontext)
        {
            _dbcontext = dbcontext;
        }


        public IList<TagElementDTO> Get_Tag_Element_By_Tag_ID(long tag_id)
        {
           ICollection<tblTagElement> tbl_tag_elements =  _dbcontext.tblTagElements.Where(tagelement => tagelement.Tag_ID == tag_id).ToList();
           IList<TagElementDTO> tag_elements = TagElementBaseDTO.ConvertTableToDTO(tbl_tag_elements);
           return tag_elements;
        }


        public IList<TagElementDTO> Get_Tag_Element_By_Tag_ID(IEnumerable<long> tag_id)
        {
            ICollection<tblTagElement> tbl_tag_elements = _dbcontext.tblTagElements.Where(tagelement => tag_id.Contains(tagelement.Tag_ID)).ToList();
            IList<TagElementDTO> tag_elements = TagElementBaseDTO.ConvertTableToDTO(tbl_tag_elements);
            return tag_elements;
        }


        public IList<TagElementDTO> Get_Tag_Element_By_Element_ID(IEnumerable<long> element_id)
        {
            ICollection<tblTagElement> tbl_tag_elements = _dbcontext.tblTagElements.Where(tagelement => element_id.Contains(tagelement.Element_ID)).ToList();
            IList<TagElementDTO> tag_elements = TagElementBaseDTO.ConvertTableToDTO(tbl_tag_elements);
            return tag_elements;
        }

        public IEnumerable<long> Get_Element_ID_By_Tag_ID(IEnumerable<long> tag_id)
        {
            InnonAnalyticsEngineEntities _context = new InnonAnalyticsEngineEntities();
            if (tag_id.Count() > 0)
            {
                //Please must check the store procedure (GetElementIDsByTagIDs) for database name before dbo in the query 
                IEnumerable<long> point_IDs = _context.Database.SqlQuery<long>("EXEC  GetElementIDsByTagIDs '" + Helper.ConvertIEnumerableToString(tag_id, ",") + "'");
                return point_IDs;
            }
            else
               return null;
                
        }

        public IList<TagElementDTO> Get_Tag_Element_By_Element_ID_Tag_ID(IEnumerable<long> element_id , IEnumerable<long> tag_id)
        {
            ICollection<tblTagElement> tbl_tag_elements = _dbcontext.tblTagElements.Where(tagelement => element_id.Contains(tagelement.Element_ID) && tag_id.Contains(tagelement.Tag_ID)).ToList();
            IList<TagElementDTO> tag_elements = TagElementBaseDTO.ConvertTableToDTO(tbl_tag_elements);
            return tag_elements;
        }
    }
}
