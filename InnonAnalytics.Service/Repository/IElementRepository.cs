using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.DTO;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Repository
{
    public interface IElementRepository
    {
    //    void GetElement();
        IList<ElementDTO> GetElement();
        IList<ElementDTO> Get_Element_By_Element_Tag_Type(TagType element_tag_type, bool Is_Disabled);
        IList<ElementDTO> GetElementsByID(long? elementID);

        ElementDTO GetElementByID(long elementID);

        IList<RawDataDTO> Get_Raw_Data_By_Element_Id(long element_id);
        IList<ElementDTO_Limited_Properties> GetElementLimitedProperties();
        IList<ElementDTO_WareHouse> GetElementsDTOWareHouse(List<long> elementIDs);
        IList<ElementDTO> GetElements(List<long> elementIDs);
      // void Dispose();
        IList<ElementDTO> GetElementByConnectionID(int connectionID);
        void SaveElement(long? parentId, string node, long tagId);
        void SaveElement(long parentId, IEnumerable<DiscoveryPoint_DTO> elementDto, long tagId);
        void Updat_Parent_Element(long sourceId, long destinationId);

        ElementDTO UpdateElement(ElementDTO elementDto);

        void Update_Element_Properties(PropertiesDTO element_properties);
        void Update_Element_Tagging(Bulk_Tagging_Update_DTO element_tagging);
        void Add_Element_Tagging(Bulk_Tagging_Add_DTO element_tagging);

        IList<LivePoint_DTO> GetLivePoints();

        IList<LivePoint_DTO> GetLivePoints(string user_id);

        LivePoint_DTO GetLivePoint(long Id);
        bool UpdateLivePoint(LivePoint_DTO livepoint, string user_id);

        bool User_Element_Update(IList<ElementDTO> Elementdtos, IEnumerable<string> user_ids);

        IList<Audit_DTO> GetElementAudit(string row_id);

        IList<ElementDTO> Get_All_Parent_Child_Element_By_User_Id(IEnumerable<string> user_ids);

        IList<ElementDTO> GetElements_By_User_Id(string user_id);
    }
}
