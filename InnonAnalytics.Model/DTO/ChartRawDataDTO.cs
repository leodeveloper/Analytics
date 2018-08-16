using InnonAnalytics.Common;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class ChartRawDataDTO
    {
        public int Metric_ID { get; set; }
        public string Metric { get; set; }
        public string Metric_Unit { get; set; }
        public string Tag { get; set; }      

        public string Point { get; set; }

        public long Element_Id { get; set; }

        public string  Element_Name { get; set; }

        public string  Element_Unit { get; set; }
        public DateTime Timestamp { get; set; }
        public double Value { get; set; }
    }

    public class ChartRawDataDTOConvert
    {


        /// <summary>
        /// Each metric can have Element and tags and tags have also element
        /// </summary>
        /// <param name="tbl_metric"></param>
        /// <param name="tag_dtos"></param>
        /// <param name="element_dtos"></param>
        /// <returns></returns>
        public static IList<ChartRawDataDTO> ConvertList(MetricDTO metric_dto, IList<ElementDTO> tag_element_dtos, IList<ElementDTO> element_dtos)
        {
            IList<ChartRawDataDTO> chart_raw_data_dto = new List<ChartRawDataDTO>();


            //Mapping Metric and tags and element related with the tags
            foreach (ElementDTO tag_element_dto in tag_element_dtos)
            {
                chart_raw_data_dto.Add(Convert(metric_dto, tag_element_dto));
            }

            //Mapping Metric and Elements
            foreach (ElementDTO element_dto in element_dtos)
            {
                chart_raw_data_dto.Add(Convert(metric_dto, element_dto));
            }

            return chart_raw_data_dto;
        }


        /// <summary>
        /// Element realted with tags
        /// </summary>
        /// <param name="tbl_Metric"></param>
        /// <param name="tag_dto"></param>
        /// <returns></returns>
        public static ChartRawDataDTO Convert(MetricDTO metric_dto, ElementDTO tag_element_dto)
        {
            ChartRawDataDTO chart_raw_data_dto = new ChartRawDataDTO();
            chart_raw_data_dto.Metric_ID = metric_dto.Id;
            chart_raw_data_dto.Metric = metric_dto.Metric_Name;
            chart_raw_data_dto.Metric_Unit = metric_dto.Unit.Unit_Name;
            chart_raw_data_dto.Tag = Helper.ConvertIEnumerableToString(metric_dto.Tags.Select(tag => tag.Tag_Type_Value), ",");
            chart_raw_data_dto.Element_Id = tag_element_dto.ID;
            chart_raw_data_dto.Element_Name = tag_element_dto.Element_Name;
            chart_raw_data_dto.Element_Unit = tag_element_dto.Unit.Unit_Name;

            return chart_raw_data_dto;
        }        
    }
}
