using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class TagElementBaseDTO
    {
        public long ID { get; set; }
        public TagDTO Tag { get; set; }
        public string TagValue { get; set; }


        #region Convert table to DTO

        /// <summary>
        /// 
        /// </summary>
        /// <param name="TagElementsTbl"></param>
        /// <returns></returns>
        public static IList<TagElementDTO> ConvertTableToDTO(ICollection<tblTagElement> TagElementsTbl)
        {
            IList<TagElementDTO> objTagElementsDTO = new List<TagElementDTO>();

            foreach(var TagElementTbl in TagElementsTbl)
            {
                objTagElementsDTO.Add(ConvertTableToDTO(TagElementTbl));
            }
            return objTagElementsDTO;
        } 

        /// <summary>
        /// 
        /// </summary>
        /// <param name="TagElementTbl"></param>
        /// <returns></returns>
        public static TagElementDTO ConvertTableToDTO(tblTagElement TagElementTbl)
        {
            TagElementDTO objTagElementDTO = new TagElementDTO();
            objTagElementDTO.ID = TagElementTbl.ID;
            objTagElementDTO.TagValue = TagElementTbl.Value;
            objTagElementDTO.Tag = TagDTO.ConvertTableToDTO(TagElementTbl.tblTag);
            objTagElementDTO.Element = ElementDTO.ConvertTableToDTO(TagElementTbl.tblElement);
            return objTagElementDTO;
        }
        #endregion

        #region Convert DTO To Table

        /// <summary>
        /// 
        /// </summary>
        /// <param name="TagElementsTbl"></param>
        /// <returns></returns>
        public static IList<tblTagElement> ConvertDTOToTbl(ICollection<TagElementBaseDTO> objTagElementsDTO)
        {
            IList<tblTagElement> TagElementsTbl = new List<tblTagElement>();

            foreach (var objTagElementDTO in objTagElementsDTO)
            {
                TagElementsTbl.Add(ConvertDTOToTbl(objTagElementDTO));
            }
            return TagElementsTbl;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="TagElementTbl"></param>
        /// <returns></returns>
        public static tblTagElement ConvertDTOToTbl(TagElementBaseDTO TagElementDTO)
        {
            tblTagElement TagElementTbl = new tblTagElement();
            TagElementTbl.ID = TagElementDTO.ID;
            TagElementTbl.Value = TagElementDTO.TagValue;
            if (TagElementDTO.Tag != null)
                TagElementTbl.tblTag = TagDTO.ConvertDTOtoTable(TagElementDTO.Tag);
            return TagElementTbl;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="TagElementDTO"></param>
        /// <returns></returns>
        public static tblTagElement ConvertDTOToTbl(long element_id, long tag_id)
        {
            tblTagElement TagElementTbl = new tblTagElement();
            TagElementTbl.Element_ID = element_id;
            TagElementTbl.Tag_ID = tag_id;
            TagElementTbl.Is_Deleted = false;
            return TagElementTbl;
        }

        /// <summary>
        /// This method is for update the elementtag table, tblElement and tblTagElement many to many relation between them, for updating the tagging
        /// </summary>
        /// <param name="tag_dtos"></param>
        /// <param name="tbl_tag_elements"></param>
        /// <returns></returns>
        public static IList<tblTagElement> ConvertDTOToTbl(ICollection<TagDTO> tag_dtos, ref ICollection<tblTagElement> tbl_tag_elements, long element_id)
        {


            IList<tblTagElement> obj_tbl_tag_elements = new List<tblTagElement>();
          
            tblTagElement obj_tbl_tag_element;

            foreach (TagDTO tag_dto in tag_dtos)
            {
                //Assign new tag
                if(!tbl_tag_elements.Any(t=>t.Tag_ID == tag_dto.ID))
                {
                    obj_tbl_tag_element = new tblTagElement();
                    obj_tbl_tag_element.Element_ID = element_id;
                    obj_tbl_tag_element.Tag_ID = tag_dto.ID;
                    obj_tbl_tag_element.Value = null;
                    obj_tbl_tag_element.Is_Deleted = false;
                    tbl_tag_elements.Add(obj_tbl_tag_element);
                }
                else
                { 
                    //Restore tag
                    obj_tbl_tag_element = tbl_tag_elements.SingleOrDefault(t => t.Tag_ID == tag_dto.ID && t.Is_Deleted == true);
                    if (obj_tbl_tag_element != null)
                        obj_tbl_tag_element.Is_Deleted = false;
                }
            }

            foreach (tblTagElement tbl_tag_element in tbl_tag_elements)
            {
                if(!tag_dtos.Any(t=>t.ID == tbl_tag_element.Tag_ID))
                {
                    tbl_tag_element.Is_Deleted = true;
                }
            }



            return tbl_tag_elements.ToList();
        }

        #endregion

    }


    public class BulkElementTaggingDTO
    {
        public BulkElementTaggingDTO()
        {
            this.Tags = new HashSet<TagDTO>();
            this.Elements = new HashSet<ElementDTO>();
        }

        public ICollection<ElementDTO> Elements { get; set; }
        public ICollection<TagDTO> Tags { get; set; } 
    }

    public class TagElementDTO : TagElementBaseDTO
    {
        public ElementDTO Element { get; set; }
    }

}
