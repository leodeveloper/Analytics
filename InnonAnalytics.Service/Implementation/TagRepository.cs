using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Exceptions;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
    public class TagRepository : InnonAnalytics.Service.Repository.ITagRepository
    {

        static IInnonAnalyticsEngineEntities _dbcontext;
        public TagRepository(IInnonAnalyticsEngineEntities db)
        {
            _dbcontext = db;
        }

        /// <summary>
        /// This method for insertion of Tags into DB. After Calling this function must call the "Save()"
        /// </summary>
        /// <param name="tagDTO"></param>
        public void Insert(TagDTO tagDTO)
        {
            _dbcontext.tblTags.Add(TagDTO.ConvertDTOtoTable(tagDTO));
        }

        public void Update(long Id, TagDTO tagDTO)
        {
            tblTag tagTbl = _dbcontext.tblTags.SingleOrDefault(t => t.ID == Id);
            if(tagTbl != null)
                 TagDTO.ConvertDTOtoTable(tagDTO, ref tagTbl);
            else
                throw new TagException(Resources.TagNullException);
        }

        public IList<TagDTO> SelectAll()
        {
            try
            {
                return TagDTO.ConvertTableToDTO(_dbcontext.tblTags);
            }
            catch(Exception ex)
            {
                throw ex;
            }
           
        }

        /// <summary>
        /// Get Tag Type is for get the all distinct tag_type from tblTag
        /// </summary>
        /// <returns></returns>
        public IList<Tag_Type_DTO> Get_Tag_Type()
        {
            List<IGrouping<string, tblTag>> tag_type_group_by = _dbcontext.tblTags.GroupBy(tagtype => tagtype.Tag_Type).ToList();
            return Tag_Type_DTO.Convert_Tag_Type_DTO(tag_type_group_by);
        }

        /// <summary>
        /// If Is_Deleted false return all the tag_type_mapping where Is_Deleted==false
        /// Reutrn all non deleted tag_type_mapping
        /// </summary>
        /// <param name="Is_Deleted"></param>
        public IList<Tag_Type_Mapping_DTO> Get_Tag_Type_Mapping(bool Is_Deleted)
        {
           IEnumerable<tblTag_Type_Mapping> tbl_Tag_Type_Mapping = _dbcontext.tblTag_Type_Mapping.Where(d => d.Is_Deleted == Is_Deleted);
           return Tag_Type_Mapping_Convert.Convert_Tag_Type_Table_TO_DTO(tbl_Tag_Type_Mapping);
        }

        public Tag_Type_Mapping_DTO Get_Tag_Type_Mapping_By_Tag_Type(TagType tag_type)
        {
            tblTag_Type_Mapping tbl_Tag_Type_Mapping = _dbcontext.tblTag_Type_Mapping.Single(d => d.Tag_Type == tag_type.ToString());
            return Tag_Type_Mapping_Convert.Convert_Tag_Type_Table_TO_DTO(tbl_Tag_Type_Mapping);
        }

        /// <summary>
        /// its mean return all the tags where container id is not null
        /// </summary>
        /// <param name=""></param>
        /// <returns></returns>
        public IList<TagDTO> SelectAll_By_User_Define_Tags()
        {
            return TagDTO.ConvertTableToDTO(_dbcontext.tblTags.Where(tags=>tags.Container_ID != null));
        }

        /// <summary>
        /// Return all the tag filerter by container id,
        /// container_id can be null, when container_id null its mean return all the where container_id == null
        /// </summary>
        /// <param name="container_id"></param>
        /// <returns></returns>
        public IList<TagDTO> SelectAll_By_Container_Id(int? container_id)
        {
            return TagDTO.ConvertTableToDTO(_dbcontext.tblTags.Where(tags => tags.Container_ID == container_id));
        }

        public IList<TagDTO> SelectAllBy_IsDisable(bool isdisable)
        {
            return TagDTO.ConvertTableToDTO(_dbcontext.tblTags.Where(tag => tag.Is_Disabled == isdisable && tag.Tag_Value != null));
        }



        /// <summary>
        /// Get the Tags where IList<Tag> in tblTag
        /// </summary>
        /// <param name="tags"></param>
        /// <returns></returns>
        public IList<TagDTO> SelectAll_Tag_By_TagIDs(IList<Tag> tags)
        {
            IEnumerable<long> tagIDs = tags.Select(n => n.TagID);
            List<tblTag> result = _dbcontext.tblTags.Where(c => tagIDs.Contains(c.ID)).ToList();
            return TagDTO.ConvertTableToDTO(result);
        }

        public IList<TagDTO> Get_Tags_By_Element_Tag_Type(string element_tag_type)
        {

            TagType tag_type;
            if(Enum.TryParse(element_tag_type, out tag_type))
            {
                switch (tag_type)
                {
                    case TagType.site:
                        return TagDTO.ConvertTableToDTO(_dbcontext.tblTags.Where(tag => tag.Is_Disabled == false  && tag.Tag_Type != TagType.equip.ToString() && tag.Tag_Type != TagType.point.ToString()));
                    case TagType.equip:
                        return TagDTO.ConvertTableToDTO(_dbcontext.tblTags.Where(tag => tag.Is_Disabled == false  && tag.Tag_Type != TagType.site.ToString() && tag.Tag_Type != TagType.point.ToString()));
                    case TagType.point:
                        return TagDTO.ConvertTableToDTO(_dbcontext.tblTags.Where(tag => tag.Is_Disabled == false  && tag.Tag_Type != TagType.site.ToString() && tag.Tag_Type != TagType.equip.ToString()));
                    default:
                        return null;
                }
            }
            else
                return null;
        }

        public TagDTO SelectByID(long Id)
        {
            return TagDTO.ConvertTableToDTO(_dbcontext.tblTags.Find(Id));
        }

        public void Save()
        {
            _dbcontext.SaveChanges();
        }



   
    }
}
