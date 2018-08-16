using System;
using InnonAnalytics.Model.DTO;
using System.Collections.Generic;
using InnonAnalytics.Common.Enums;
namespace InnonAnalytics.Service.Repository
{
    public interface ITagRepository
    {
        void Insert(TagDTO tagDTO);
        void Update(long Id, TagDTO tagDTO);
        void Save();
       
        IList<TagDTO> SelectAllBy_IsDisable(bool isdisable);

        IList<TagDTO> Get_Tags_By_Element_Tag_Type(string element_tag_type);

        IList<TagDTO> SelectAll();

        TagDTO SelectByID(long Id);

        IList<TagDTO> SelectAll_By_User_Define_Tags();
        IList<TagDTO> SelectAll_By_Container_Id(int? container_id);

        IList<Tag_Type_DTO> Get_Tag_Type();
        IList<TagDTO> SelectAll_Tag_By_TagIDs(IList<Tag> tags);

        Tag_Type_Mapping_DTO Get_Tag_Type_Mapping_By_Tag_Type(TagType tag_type);
        IList<Tag_Type_Mapping_DTO> Get_Tag_Type_Mapping(bool Is_Deleted);
    }
}
