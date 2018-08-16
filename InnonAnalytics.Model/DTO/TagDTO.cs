using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.EntityModel;
using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{

    //public interface iTagDTO
    //{
    //   public TagDTO Tags { get; set; } 
    //}

    //public interface iElementDTO
    //{
    //   public ElementDTO Element { get; set; }
    //}





    public class TagDTO
    {
        /// <summary>
        /// Base TagDTO
        /// </summary>
        public TagDTO()
        {
            this.TagName = new List<LanguageValueDTO>();
        }

        public long ID { get; set; }
        public virtual IList<LanguageValueDTO> TagName { get; set; }

        public TagKind Tag_Kind { get; set; }

        public TagType Tag_Type { get; set; }

        [JsonProperty(PropertyName = "Tag_Type")]
        public string Tag_Type_String { get { return Tag_Type.ToString(); } }

        public string Tag_Value { get; set; }

        /// <summary>
        /// This Tag_Type_Value is for dropdown and other controls where we need to show the tag with tag type "department | Day Care"
        /// </summary>
        public string Tag_Type_Value { get { return this.Tag_Type_String + " | " + this.Tag_Value; } }

        public bool Is_Disabled { get; set; }

        #region Convert Region DTO to Database Table
        /// <summary>
        /// list Convertion of DTO to Database Table
        /// </summary>
        /// <param name="taglistDTO"></param>
        /// <returns type="IList<tblTag>" ></returns>
        public static IList<tblTag> ConvertDTOtoTable(IEnumerable<TagDTO> taglistDTO)
        {
            try
            {
                IList<tblTag> tagsTable = new List<tblTag>();
                foreach (var tagDTO in taglistDTO)
                {
                    tagsTable.Add(ConvertDTOtoTable(tagDTO));
                }

                return tagsTable;
            }
            catch (Exception ex)
            {
                throw ex;
            }
        }

        /// <summary>
        /// Single Convertion of DTO to Database Table
        /// </summary>
        /// <param name="tagDTO"></param>
        /// <returns type ="tblTag" ></returns>
        public static tblTag ConvertDTOtoTable(TagDTO tagDTO)
        {
            try
            {
                tblTag tagsTable = new tblTag();
                tagsTable.ID = tagDTO.ID;
                tagsTable.Tag_Kind = tagDTO.Tag_Kind.ToString();
                tagsTable.Tag_Type = tagDTO.Tag_Type.ToString();
                tagsTable.Tag_Value = tagDTO.Tag_Value;
                tagsTable.Is_Disabled = tagDTO.Is_Disabled;
                tagsTable.tblDescription = DescriptionConvert.DescriptionConvertDTOToTbl(tagDTO.TagName);
                return tagsTable;
            }
            catch (Exception ex)
            {
                throw ex;
            }
        }

        /// <summary>
        /// Single Convertion of DTO to Database Table, this is used normally for when update the record in database
        /// </summary>
        /// <param name="tagDTO"></param>
        /// <param name="tagsTable"></param>
        public static void ConvertDTOtoTable(TagDTO tagDTO, ref tblTag tagsTable)
        {
            try
            {
                tagsTable.ID = tagDTO.ID;
                tagsTable.Tag_Kind = tagDTO.Tag_Kind.ToString();
                tagsTable.Tag_Type = tagDTO.Tag_Type.ToString();
                tagsTable.Tag_Value = tagDTO.Tag_Value;
                tagsTable.Is_Disabled = tagDTO.Is_Disabled;
                tagsTable.tblDescription = DescriptionConvert.DescriptionConvertDTOToTbl(tagDTO.TagName);

            }
            catch (Exception ex)
            {
                throw ex;
            }
        }

        #endregion

        #region Convert Region Database Table To DTO
        /// <summary>
        /// list Convertion of Database Table to DTO
        /// </summary>
        /// <param name="taglistTbl"></param>
        /// <returns type="IList<TagDTO>" ></returns>
        public static IList<TagDTO> ConvertTableToDTO(IEnumerable<tblTag> taglistTbl)
        {
            try
            {
                IList<TagDTO> tagsDTO = new List<TagDTO>();
                foreach (tblTag tagTbl in taglistTbl)
                {
                    tagsDTO.Add(ConvertTableToDTO(tagTbl));
                }

                return tagsDTO;
            }
            catch (Exception ex)
            {
                throw ex;
            }
        }

        /// <summary>
        /// Single Convertion of Database Table to DTO
        /// </summary>
        /// <param name="tagTbl"></param>
        /// <returns type ="TagDTO" ></returns>
        public static TagDTO ConvertTableToDTO(tblTag tagTbl)
        {
            TagDTO tagsDTO = new TagDTO();
            try
            {

                tagsDTO.ID = tagTbl.ID;
                tagsDTO.Tag_Kind = (TagKind)Enums.TryParse(typeof(TagKind), tagTbl.Tag_Kind);
                tagsDTO.Tag_Type = (TagType)Enums.TryParse(typeof(TagType), tagTbl.Tag_Type);
                tagsDTO.Tag_Value = tagTbl.Tag_Value;
                tagsDTO.Is_Disabled = tagTbl.Is_Disabled;
                if (tagTbl.tblDescription != null)
                    tagsDTO.TagName = DescriptionConvert.DescriptionConvertDTOToTbl(tagTbl.tblDescription);

                return tagsDTO;
            }
            catch (Exception ex)
            {
                throw ex;
            }
        }


        public static IList<TagDTO> ConvertTableToDTO(IEnumerable<tblTagElement> tagElementsTbl)
        {
            try
            {
                IList<TagDTO> tagsDTO = new List<TagDTO>();
                foreach (var tagElement in tagElementsTbl)
                {
                    if (tagElement.tblTag != null)
                        tagsDTO.Add(ConvertTableToDTO(tagElement.tblTag));
                }

                return tagsDTO;
            }
            catch (Exception ex)
            {
                throw ex;
            }
        }


        #endregion



    }

    #region tag type dto

    public class Tag_Type_DTO
    {
        public string Tag_Type { get; set; }


        public static IList<Tag_Type_DTO> Convert_Tag_Type_DTO(List<IGrouping<string, tblTag>> tag_type_group_by)
        {

            IList<Tag_Type_DTO> list_tag_type = new List<Tag_Type_DTO>();

            foreach(var tag_type in tag_type_group_by)
            {
                try
                {
                    list_tag_type.Add(new Tag_Type_DTO { Tag_Type = tag_type.Key });
                }
                catch { }
                
            }

            return list_tag_type;
        }
    }

    #endregion



}
