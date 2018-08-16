using InnonAnalytics.Common.Enums;
using InnonAnalytics.DataWareHouseService.Model;
using InnonAnalytics.DataWareHouseService.Repository;
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
    public class AggregateRepository : IAggregateRepository
    {

      //  private IInnonAnalyticsEngineEntities _dbcontext;
         private IMetricRepository _metric_rep;
         private IAggregate_Data _aggregare_data;
         private IChartRepository _chart_rep;
         private ITagRepository _tag_rep;
        private IWareHouse_Data _warehouse_data;


         public AggregateRepository(IMetricRepository metric_rep, IAggregate_Data aggregare_data, IChartRepository chart_rep, ITagRepository tag_rep, IWareHouse_Data warehouse_data)
         {
            // _dbcontext = db;
             _metric_rep = metric_rep;
             _aggregare_data = aggregare_data;
             _chart_rep = chart_rep;
             _tag_rep = tag_rep;
            _warehouse_data = warehouse_data;
         }

         public IList<ChartRawDataDTO> Get_Raw_Data(ChartType chart_type, int chart_id, DateTime from_date, DateTime to_date)
         {
            IList<ChartRawDataDTO> raw_data = _chart_rep.Get_Raw_Data_By_Chart(chart_type, chart_id);



            //_aggregare_data.Get_Aggregate(raw_data.Select(r=>r.Metric_ID), 
            //    null,
            //    raw_data[0].Metric_Unit, 
            //    AggerationType.Day, from_date, to_date);

            return raw_data;
         }

         public Aggregate_DTO_Group_By_Aggregation_Type Get_Aggregate_Data(ChartType chart_type, int chart_id, DateTime from_date, DateTime to_date)
         {
             Combine_Enum_Tag_Aggregation Group_By = _chart_rep.Get_Group_By(chart_type, chart_id);             

             Aggregate_Element_Ids ElementIds = _chart_rep.Get_Data_Points_By_Chart(chart_type, chart_id);

             Aggregate_DTO_Group_By_Aggregation_Type aggregate_dto = new Aggregate_DTO_Group_By_Aggregation_Type();
             aggregate_dto.Metric_Name = ElementIds.Metric_Name;
             aggregate_dto.Target_Metric_Name = ElementIds.Target_Metric_Name;

             aggregate_dto.Mertric_Unit = ElementIds.Mertric_Unit;
             aggregate_dto.Target_Mertric_Unit = ElementIds.Target_Mertric_Unit;

             //If there is no group by than default group by is day
             if (Group_By.Tage_Type != 0)
             {
                 Tag_Type_Mapping_DTO tag_type_mapping = _tag_rep.Get_Tag_Type_Mapping_By_Tag_Type(Group_By.Tage_Type);

                 aggregate_dto.Aggregate_Value = _aggregare_data.Get_Aggregate(ElementIds.Element_Ids, ElementIds.Mertric_Rollup_Function, ElementIds.Mertric_Unit, tag_type_mapping.Point_Dim_Mapping, from_date, to_date);
                 aggregate_dto.Aggregate_Target_Value = _aggregare_data.Get_Aggregate(ElementIds.Target_Element_Ids, ElementIds.Mertric_Target_Rollup_Function, ElementIds.Target_Mertric_Unit, tag_type_mapping.Point_Dim_Mapping, from_date, to_date);

                 return aggregate_dto;
             }
             else if (Group_By.Aggregation_Type != 0)
             {
                 aggregate_dto.Aggregate_Value = _aggregare_data.Get_Aggregate(ElementIds.Element_Ids, ElementIds.Mertric_Rollup_Function, ElementIds.Mertric_Unit, Group_By.Aggregation_Type, from_date, to_date);
                 aggregate_dto.Aggregate_Target_Value = _aggregare_data.Get_Aggregate(ElementIds.Target_Element_Ids, ElementIds.Mertric_Target_Rollup_Function, ElementIds.Target_Mertric_Unit, Group_By.Aggregation_Type, from_date, to_date);
                 return aggregate_dto;
             }
             else
             {
                 aggregate_dto.Aggregate_Value = _aggregare_data.Get_Aggregate(ElementIds.Element_Ids, ElementIds.Mertric_Rollup_Function, ElementIds.Mertric_Unit, AggerationType.Day, from_date, to_date);
                 aggregate_dto.Aggregate_Target_Value = _aggregare_data.Get_Aggregate(ElementIds.Target_Element_Ids, ElementIds.Mertric_Target_Rollup_Function, ElementIds.Target_Mertric_Unit, AggerationType.Day, from_date, to_date);
                 return aggregate_dto;
             }
           
         }

        /// <summary>
        /// This function for the single metric and target metric controls like guage and counter
        /// </summary>
        /// <param name="chart_type"></param>
        /// <param name="chart_id"></param>
        /// <param name="from_date"></param>
        /// <param name="to_date"></param>
        /// <returns></returns>
         public Aggregate_DTO_Metric Get_Aggregate_Data_Signle_Metric(ChartType chart_type, int chart_id, DateTime from_date, DateTime to_date)
        {
            try
            {
                Aggregate_Element_Ids ElementIDs = new Aggregate_Element_Ids();
                double value = 0.0;
                double target_value = 0.0;
                ElementIDs = _chart_rep.Get_Data_Points_By_Chart(chart_type, chart_id);
               // IEnumerable<long> Target_Element_Ids = _chart_rep.Get_Target_Data_Points_By_Chart(ChartType.Gauge, chart_id);

                value = _aggregare_data.Get_Aggregate(ElementIDs.Element_Ids, ElementIDs.Mertric_Rollup_Function, ElementIDs.Mertric_Unit, from_date, to_date);

                //For counter chart we do not have a target metric thats why we need this condtion
                 if (ElementIDs.Target_Element_Ids!= null)
                     target_value = _aggregare_data.Get_Aggregate(ElementIDs.Target_Element_Ids, ElementIDs.Mertric_Target_Rollup_Function, ElementIDs.Target_Mertric_Unit, from_date, to_date);

                Aggregate_DTO_Metric aggregate_dto_metric = new Aggregate_DTO_Metric();
                aggregate_dto_metric.Aggregate_Target_Value = target_value;
                aggregate_dto_metric.Aggregate_Value = value;
                aggregate_dto_metric.Mertric_Unit = ElementIDs.Mertric_Unit;
                aggregate_dto_metric.Metric_Name = ElementIDs.Metric_Name;
                aggregate_dto_metric.Rollup_Function = ElementIDs.Mertric_Rollup_Function;
                aggregate_dto_metric.Target_Mertric_Unit = ElementIDs.Target_Mertric_Unit;
                aggregate_dto_metric.Target_Metric_Name = ElementIDs.Target_Metric_Name;       

                return aggregate_dto_metric;           
            }
            catch(Exception ex)
            {
                throw ex;
            }            
        }


        /// <summary>
        /// this is temporary solution for the heat map. generate proper method for group by hour
        /// </summary>
        /// <param name="chart_id"></param>
        /// <param name="from_date"></param>
        /// <param name="to_date"></param>
        /// <returns></returns>
        public Aggregate_DTO_Group_By_Aggregation_Type Get_Aggregate_Data_Raw(int chart_id, DateTime from_date, DateTime to_date)
        {
            try
            {
                Aggregate_Element_Ids ElementIDs = new Aggregate_Element_Ids();

                ElementIDs = _chart_rep.Get_Data_Points_By_Chart(ChartType.HeatMap, chart_id);
                List<Aggregate_DTO_Group_By_Aggregation_Type_Value> _raw_aggregate_data = _aggregare_data.Get_Aggregate(ElementIDs.Element_Ids, ElementIDs.Mertric_Rollup_Function, ElementIDs.Mertric_Unit, AggerationType.Hour, from_date, to_date);

                Aggregate_DTO_Group_By_Aggregation_Type aggregate_data = new Aggregate_DTO_Group_By_Aggregation_Type();
                aggregate_data.Aggregate_Value = _raw_aggregate_data;
                aggregate_data.Metric_Name = ElementIDs.Metric_Name;
                aggregate_data.Mertric_Unit = ElementIDs.Mertric_Unit;
                
                aggregate_data.Rollup_Function = ElementIDs.Mertric_Rollup_Function;
                return aggregate_data;
            }
            catch (Exception ex)
            {
                throw ex;
            } 
        }
        public List<Aggregate_Metric_Elements_Value> Get_Aggregate_Data_By_Metrics(ICollection<tblMetric> metrics, DateTime from_date, DateTime to_date)
        {

            List<Aggregate_Metric_Elements_Value> metric_dto = new List<Aggregate_Metric_Elements_Value>();

            try
            {
                foreach (tblMetric metric in metrics)
                {
                    Aggregate_Metric_Elements Metric_ElementIds = _chart_rep.Get_Data_Points_By_Metric(metric);
                    double aggregate_value = _aggregare_data.Get_Aggregate(Metric_ElementIds.Elements.Element_Ids, Metric_ElementIds.Mertric_Rollup_Function, Metric_ElementIds.Mertric_Unit, from_date, to_date);

                    metric_dto.Add(new Aggregate_Metric_Elements_Value() { Metric = Metric_ElementIds, Value = aggregate_value });
                }
            }
            catch { }

            return metric_dto;
        }

        public List<Aggregate_Metric_Elements_Value> Get_Aggregate_Data_By_Metrics(ChartType chart_type, int chart_id, DateTime from_date, DateTime to_date)
        {
            List<Aggregate_Metric_Elements_Value> metric_dto = new List<Aggregate_Metric_Elements_Value>();
            ICollection<tblMetric> chart_metrics = _chart_rep.Get_Metric_By_Chart(chart_type, chart_id);

            metric_dto = Get_Aggregate_Data_By_Metrics(chart_metrics, from_date, to_date);
            return metric_dto;
        }



        public IList<Aggregate_DTO_Group_By_Aggregation_Type> Get_Aggregate_Data_By_Metric_GroupBy(ChartType chart_type, int chart_id, DateTime from_date, DateTime to_date)
        {
            Combine_Enum_Tag_Aggregation Group_By = _chart_rep.Get_Group_By(chart_type, chart_id);


            ICollection<tblMetric> chart_metrics = _chart_rep.Get_Metric_By_Chart(chart_type, chart_id);

            IList<Aggregate_DTO_Group_By_Aggregation_Type> aggregate_dtos = new List<Aggregate_DTO_Group_By_Aggregation_Type>();
            Aggregate_DTO_Group_By_Aggregation_Type aggregate_dto;// = new Aggregate_DTO_Group_By_Aggregation_Type();
            Aggregate_Metric_Elements Metric_ElementIds;



            if (Group_By.Tage_Type != 0)
            {
                Tag_Type_Mapping_DTO tag_type_mapping = _tag_rep.Get_Tag_Type_Mapping_By_Tag_Type(Group_By.Tage_Type);
                foreach (tblMetric metric in chart_metrics)
                {
                    Metric_ElementIds = _chart_rep.Get_Data_Points_By_Metric(metric);
                    aggregate_dto = new Aggregate_DTO_Group_By_Aggregation_Type();

                    aggregate_dto.Metric_Name = Metric_ElementIds.Metric_Name;
                    aggregate_dto.Mertric_Unit = Metric_ElementIds.Mertric_Unit;
                    aggregate_dto.Rollup_Function = Metric_ElementIds.Mertric_Rollup_Function;

                    if (Metric_ElementIds.Elements.Element_Ids.Count() > 0)
                    {
                        aggregate_dto.Aggregate_Value = _aggregare_data.Get_Aggregate(Metric_ElementIds.Elements.Element_Ids, Metric_ElementIds.Mertric_Rollup_Function, Metric_ElementIds.Mertric_Unit, tag_type_mapping.Point_Dim_Mapping, from_date, to_date);                       
                    }
                    aggregate_dtos.Add(aggregate_dto);                    
                }
            }
            else
            {
                foreach (tblMetric metric in chart_metrics)
                {
                    Metric_ElementIds = _chart_rep.Get_Data_Points_By_Metric(metric);
                    aggregate_dto = new Aggregate_DTO_Group_By_Aggregation_Type();
                    aggregate_dto.Metric_Name = Metric_ElementIds.Metric_Name;
                    aggregate_dto.Mertric_Unit = Metric_ElementIds.Mertric_Unit;
                    aggregate_dto.Rollup_Function = Metric_ElementIds.Mertric_Rollup_Function;
                    if (Metric_ElementIds.Elements.Element_Ids.Count() > 0)
                    {
                        if (Group_By.Aggregation_Type != 0)
                            aggregate_dto.Aggregate_Value = _aggregare_data.Get_Aggregate(Metric_ElementIds.Elements.Element_Ids, Metric_ElementIds.Mertric_Rollup_Function, Metric_ElementIds.Mertric_Unit, Group_By.Aggregation_Type, from_date, to_date);
                        else
                            aggregate_dto.Aggregate_Value = _aggregare_data.Get_Aggregate(Metric_ElementIds.Elements.Element_Ids, Metric_ElementIds.Mertric_Rollup_Function, Metric_ElementIds.Mertric_Unit, AggerationType.Day, from_date, to_date);

                    }
                    aggregate_dtos.Add(aggregate_dto);
                }
            }

            return aggregate_dtos;
        }


        public IList<Warehouse_DTO> Get_WareHouse_Raw_Data(AggerationType aggregation_type, int point_id, DateTime from_date, DateTime to_date)
        {
            return _warehouse_data.Get_Data_From(point_id, from_date, to_date, aggregation_type);
        }

        public Tree_Map_Aggregate_DTO Get_Aggregate_Data(TagType groupby, DateTime from_date, DateTime to_date)
        {

            return _aggregare_data.Get_Aggregate(groupby, from_date, to_date);
        }

    }
}
