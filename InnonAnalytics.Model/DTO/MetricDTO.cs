using FluentValidation.Attributes;
using InnonAnalytics.Common;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.Common.Static_Resources;
using InnonAnalytics.Model.DTOValidators;
using InnonAnalytics.Model.EntityModel;
using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
     [Validator(typeof(MetricDTOValidator))]
    public class MetricDTO
    {

         public MetricDTO()
         {
             this.Tags = new HashSet<TagDTO>();
             //this.Unit = new Unit_Of_Measurement_DTO();
         }

        public int Id { get; set; }

        public string Metric_Name { get; set; }

        public string Metric_Type { get; private set; }

        /// <summary>
        /// source json { Tags:[{TagID: 1},{TagID: 2}], Points: [{ElementId:1},{ElementId:1}] }
        /// </summary>
        public Source_Json Source { get; set; }

        public Unit_Of_Measurement_DTO Unit { get; set; }

        public int Unit_Id { get; set; }

        public ICollection<TagDTO> Tags { get; set; }

        public ICollection<ElementDTO> Elements { get; set; }

        public Rollup_Function_Option Rollup_Function { get; set; }
        /// <summary>
        /// In json response to client Rollup_Function return the enum value instead of text, the following property returns the text of enum
        /// </summary>
        public string Rollup_Function_Text { get { return this.Rollup_Function.ToString(); } } 

       

        public static tblMetric Convert_DTO_To_Table(MetricDTO metric_dto, ref tblMetric tbl_Metric)
        {

            try
            {
                tbl_Metric.Id = metric_dto.Id;
                tbl_Metric.Metric_Name = metric_dto.Metric_Name;
               
                //This is speical method to convert the class object into json.
                //Convert_Object_To_Json In the database source save in json structure we have to convert the class object (TAG_DTO) to json object
                tbl_Metric.Source = Helper.Convert_Object_To_Json( new Source_Json{ Tags =  metric_dto.Tags.Select(tag => new Tag { TagID = tag.ID }).ToList()});                
                tbl_Metric.Rollup_Function = metric_dto.Rollup_Function.ToString();
                tbl_Metric.Unit_Id = metric_dto.Unit_Id;
            }
            catch { }
            return tbl_Metric;
        }


         /// <summary>
         /// This converstion method is use for the noraml user generated metric
         /// </summary>
         /// <param name="metric_dto"></param>
         /// <returns></returns>

        public static tblMetric Convert_DTO_To_Table(MetricDTO metric_dto)
        {           
           tblMetric tbl_Metric = new tblMetric();
            try
            {
                tbl_Metric.Id = metric_dto.Id;
                tbl_Metric.Metric_Name = metric_dto.Metric_Name;

                //This is speical method to convert the class object into json.
                //Convert_Object_To_Json In the database source save in json structure we have to convert the class object (TAG_DTO) to json object
                tbl_Metric.Source = Helper.Convert_Object_To_Json(new Source_Json { Tags = metric_dto.Tags.Select(tag => new Tag { TagID = tag.ID }).ToList() });
                tbl_Metric.Rollup_Function = metric_dto.Rollup_Function.ToString();
                tbl_Metric.Unit_Id = metric_dto.Unit_Id;

               
            }
            catch { }
            return tbl_Metric;
        }

         /// <summary>
         /// This is the special Converstion method for when needs create a metric from the element
         /// </summary>
         /// <param name="Element_ID"></param>
         /// <param name="Element_Name"></param>
         /// <returns></returns>
        public static tblMetric Convert_DTO_To_Table(long Element_ID, string Element_Name, int? Unit_Id ,Rollup_Function_Option rollup_function_option)
        {
            tblMetric tbl_Metric = new tblMetric();
            try
            {
                
                tbl_Metric.Metric_Name = Element_Name + " - " + rollup_function_option.ToString();

                //This is speical method to convert the class object into json.
                //Convert_Object_To_Json In the database source save in json structure we have to convert the class object (TAG_DTO) to json object
                tbl_Metric.Source = Helper.Convert_Object_To_Json(new Source_Json { Points = new List<Point>() { new Point() { ElementId = Element_ID } } });
                tbl_Metric.Rollup_Function = rollup_function_option.ToString();
                if(Unit_Id == null)
                    tbl_Metric.Unit_Id = 121;
                else
                    tbl_Metric.Unit_Id = Convert.ToInt32(Unit_Id);
            }
            catch { }
            return tbl_Metric;
        }

        //public static IList<MetricDTO> Convert_List_Table_To_List_DTO(IEnumerable<tblMetric> tbl_Metrics)
        //{
        //    IList<MetricDTO> list_metric_dto = new List<MetricDTO>();
        //    foreach(tblMetric tbl_Metric in tbl_Metrics)
        //    {
        //        //list_metric_dto.Add(Convert_Table_To_DTO(tbl_Metric));
        //    }
        //    return list_metric_dto;
        //}

         /// <summary>
         /// 
         /// </summary>
         /// <param name="tbl_Metric"></param>
         /// <returns></returns>

        private static MetricDTO Convert_Table_To_DTO(tblMetric tbl_Metric, IList<TagDTO> tag_dto, IList<ElementDTO> element_dto)
        {
            MetricDTO dto_metric = new MetricDTO();
            try
            {
                dto_metric.Id = tbl_Metric.Id;
                dto_metric.Metric_Name = tbl_Metric.Metric_Name;
                dto_metric.Metric_Type = MetricType.User.ToString();
                dto_metric.Source = Source_Json.Convert_Json_To_Source_Json(tbl_Metric.Source) ;
                dto_metric.Tags = tag_dto;
                dto_metric.Elements = element_dto;
                dto_metric.Rollup_Function = (Rollup_Function_Option)Enums.TryParse(typeof(Rollup_Function_Option), tbl_Metric.Rollup_Function.ToString());
                dto_metric.Unit = Unit_Of_Measurement_DTO_Convert.Convert_Table_To_DTO(tbl_Metric.tblUnit);
                dto_metric.Unit_Id = tbl_Metric.Unit_Id;
              
            }
            catch { }
           
            
            return dto_metric;
        }

        public static IList<MetricDTO> Convert_List_Table_To_List_DTO(IEnumerable<Tbl_Metric_DTO> tbl_Metrics_dto)
        {
            IList<MetricDTO> list_metric_dto = new List<MetricDTO>();

            foreach (Tbl_Metric_DTO tbl_Metric_dto in tbl_Metrics_dto)
            {
                list_metric_dto.Add(Convert_Table_To_DTO(tbl_Metric_dto.tbl_Metric, tbl_Metric_dto.tag_dto, tbl_Metric_dto.element_dto));  
            }            
            return list_metric_dto;
        }

        public static MetricDTO Convert_Table_To_DTO(Tbl_Metric_DTO tbl_Metric_dto)
        {
            return Convert_Table_To_DTO(tbl_Metric_dto.tbl_Metric, tbl_Metric_dto.tag_dto, tbl_Metric_dto.element_dto);
        }


        #region Virtual Metric Conversion (System Define)

        //why we need metric_id = -1; the reason for initialize metric_id=-1 becuase this is virtual metric does not exist in the metric table it is based on-
        //-the tags from tbl_tag_element table thats the reason we need the unique metric_id for this virtual metric.
        //if use metric_id=0 for this virtual metrics on the kendo grid it will consider as a new metric.
        private static int metric_id = -1;


        /// <summary>
         /// this convert function specially for the convertion of the list of tags to list of metric
         /// these are the list of virtual metric on the bases of element tags
         /// </summary>
         /// <param name="tbl_tag_elements"></param>
         /// <returns></returns>
        public static List<MetricDTO> Convert_Tag_Element_Table_To_DTO(IEnumerable<tblTagElement> tbl_tag_elements)
        {        

            //IList<IGrouping<long, tblTagElement>> distinct_list_of_element_tags = tbl_tag_elements.GroupBy(tag_element => tag_element.Tag_ID).ToList();

            List<MetricDTO> list_dto_metric = new List<MetricDTO>();
            //Temporary close of virtual metrics
            //foreach (IGrouping<long, tblTagElement> distinct_list_of_element_tag in distinct_list_of_element_tags)
            //{
            //    try
            //    {
            //        list_dto_metric.AddRange(Convert_Tag_Element_Table_To_DTO(distinct_list_of_element_tag.FirstOrDefault()));
            //    }
            //    catch { }   
            //}
            return list_dto_metric;
        }


         /// <summary>
        /// this convert function specially for the convertion of the element tags to metric
        /// these are the virtual metrics on the bases of tags
        /// 
         /// </summary>
         /// <param name="tbl_tag_element"></param>
         /// <returns></returns>
        public static IList<MetricDTO> Convert_Tag_Element_Table_To_DTO(tblTagElement tbl_tag_element)
        {
            IList<MetricDTO> list_dto_metric = new List<MetricDTO>();
            try
            {
                MetricDTO dto_metric;

                IList < TagDTO > element_tags =  new List<TagDTO> { TagDTO.ConvertTableToDTO(tbl_tag_element.tblTag) };
                
                foreach (Rollup_Function_Option rollup_function in Enum.GetValues(typeof(Rollup_Function_Option)))
                {
                    try
                    {
                        dto_metric = new MetricDTO();
                        dto_metric.Id = metric_id;
                        dto_metric.Metric_Name = string.Concat(rollup_function.ToString(), " " , element_tags.First().Tag_Type_Value);
                        dto_metric.Metric_Type = MetricType.System.ToString();
                        dto_metric.Source = null;
                        dto_metric.Tags = element_tags;
                        dto_metric.Rollup_Function = rollup_function;
                        
                    

                        list_dto_metric.Add(dto_metric);
                        metric_id--;
                    }
                    catch { }                   
                }               
            }
            catch { }
            return list_dto_metric;
        }

        #endregion virtualMetric
    }

    public class Tag
    {
        public long TagID { get; set; }
    }

    public class Point
    {
        public long ElementId { get; set; }
    }

    public class Source_Json
    {

        public Source_Json()
        {
            this.Tags = new List<Tag>();
            this.Points = new List<Point>();
        }

        public IList<Tag> Tags { get; set; }
        public IList<Point> Points { get; set; }


        public static Source_Json Convert_Json_To_Source_Json(string json_source)
        {
            try
            {
                Source_Json source = new Source_Json();
                source = JsonConvert.DeserializeObject<Source_Json>(json_source);
                return source;
            }
            catch(Exception ex)
            {
                Helper.WriteToFile(string.Format("Invalid Json. please check the provided Json {0}, Detail Error:- {1}", json_source, ex));
                return null;
            }
           

        }
    }



    public class Tbl_Metric_DTO
    {

        public Tbl_Metric_DTO()
         {
             this.tag_dto = new List<TagDTO>();
         }

        public tblMetric tbl_Metric { get; set; }
        public IList<TagDTO> tag_dto { get; set; }

        public IList<ElementDTO> element_dto { get; set; }
    }
}
