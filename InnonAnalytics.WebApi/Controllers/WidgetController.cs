using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Service.Repository;
using InnonAnalytics.WebApi.Filters;
using InnonAnalytics.WebApi.Models;
using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Threading;
using System.Threading.Tasks;
using System.Web.Http;


namespace InnonAnalytics.WebApi.Controllers
{
    public class WidgetController : ApiController
    {


        private static IAggregateRepository _aggregateRepository;

        public WidgetController(IAggregateRepository aggregate_repository)
        {
            _aggregateRepository = aggregate_repository;
        }

        public IHttpActionResult Get(int id)
        {

            return Ok(new APIResponseWrapper() { Data = new { ID = id, Name = "suleman" }, Errors = null, Message = null });
        }

   //     [AllowCrossDomainRequests]
        [HttpGet]
        [LogRequest]
        public IHttpActionResult GetWidgetData(DateTime from_date, DateTime to_date, long dashboard_widget_id)
        {
            //Gauge_Aggregate_DTO dto = new Gauge_Aggregate_DTO();// = _aggregateRepository.Get_Aggregate_Date(dashboard_widget_id, from_date, to_date);
            //    return Json(dto, JsonRequestBehavior.AllowGet);   
            return Ok(new APIResponseWrapper() { Data = null, Errors = null, Message = null });
        }

    //    [AllowCrossDomainRequests]
        [HttpGet]
        public IHttpActionResult GetTreeMap(DateTime from_date, DateTime to_date)
        {
            //Tree_Map_Aggregate_DTO dto = _aggregateRepository.Get_Aggregate_Data(TagType.department, from_date, to_date);
            //    return Json(dto, JsonRequestBehavior.AllowGet);   
            return Ok(new APIResponseWrapper() { Data = null, Errors = null, Message = null });
        }



        [AllowCrossDomainRequests]
        [HttpOptions]
        [HttpGet]
        public  async Task<IHttpActionResult> Get_Data_By_Chart(string chart_type, int chart_id, DateTime from_date, DateTime to_date)
        {
            if (Request.Method != HttpMethod.Options)
            {
                try
                {
                    ChartType _chart_type;
                    if (!Enum.TryParse(chart_type, out _chart_type))
                        return BadRequest(string.Format(Resources.Invalid_Chart_Type + " {0}", chart_type));

                    if (_chart_type == ChartType.Gauge)
                    {
                        Aggregate_DTO_Metric aggregate_dto = _aggregateRepository.Get_Aggregate_Data_Signle_Metric(ChartType.Gauge, chart_id, from_date, to_date);
                        return Ok(new APIResponseWrapper()
                        {
                            Data = await Task.Factory.StartNew(() => Gauge_Chart_Convert.Convert_Aggregate_To_Gauge_Chart(aggregate_dto)),
                            Errors = null,
                            Message = null
                        });
                    }
                    else if (_chart_type == ChartType.Counter)
                    {
                        Aggregate_DTO_Metric aggregate_dto = _aggregateRepository.Get_Aggregate_Data_Signle_Metric(ChartType.Counter, chart_id, from_date, to_date);
                        return Ok(new APIResponseWrapper()
                        {
                            Data = await Task.Factory.StartNew(() => Counter_Chart_Convert.Convert_Aggregate_To_Counter_Chart(aggregate_dto)),
                            Errors = null,
                            Message = null
                        });
                    }
                    else if (_chart_type == ChartType.Pie)
                    {
                        List<Aggregate_Metric_Elements_Value> list_metric_value = _aggregateRepository.Get_Aggregate_Data_By_Metrics(_chart_type, chart_id, from_date, to_date);
                        return Ok(new APIResponseWrapper()
                        {
                            Data = await Task.Factory.StartNew(() => Pie_Chart_Convert.Pie_Chart_Convert_Aggregate_Metric_To_Pie_Chart_DTO(list_metric_value)),
                            Errors = null,
                            Message = null
                        });
                    }
                    else if (_chart_type == ChartType.Donut)
                    {
                        List<Aggregate_Metric_Elements_Value> list_metric_value = _aggregateRepository.Get_Aggregate_Data_By_Metrics(_chart_type, chart_id, from_date, to_date);
                        return Ok(new APIResponseWrapper()
                        {
                            Data = await Task.Factory.StartNew(() => Pie_Chart_Convert.Pie_Chart_Convert_Aggregate_Metric_To_Pie_Chart_DTO(list_metric_value)),
                            Errors = null,
                            Message = null
                        });
                    }
                    else if (_chart_type == ChartType.Stacked)
                    {
                        IList<Aggregate_DTO_Group_By_Aggregation_Type> agre = _aggregateRepository.Get_Aggregate_Data_By_Metric_GroupBy(_chart_type, chart_id, from_date, to_date);


                        return Ok(new APIResponseWrapper()
                        {
                            Data = await Task.Factory.StartNew(() => Stacked_Column_Chart_Convert.Aggregate_Convert_To_Stacked_Chart(agre)),
                            Errors = null,
                            Message = null
                        });

                    }
                    else if (_chart_type == ChartType.Line)
                    {
                        IList<Aggregate_DTO_Group_By_Aggregation_Type> agre = _aggregateRepository.Get_Aggregate_Data_By_Metric_GroupBy(_chart_type, chart_id, from_date, to_date);


                        return Ok(new APIResponseWrapper()
                        {
                            Data = await Task.Factory.StartNew(() => Line_Column_Chart_Convert.Aggregate_Convert_To_Line_Chart(agre)),
                            Errors = null,
                            Message = null
                        });

                    }
                    else if (_chart_type == ChartType.HeatMap)
                    {
                        Aggregate_DTO_Group_By_Aggregation_Type aggregate = _aggregateRepository.Get_Aggregate_Data_Raw(chart_id, from_date, to_date);

                        return Ok(new APIResponseWrapper()
                        {
                            Data = await Task.Factory.StartNew(() => Aggregate_DTO_Group_By_Aggregation_Type_Value_Convert.Aggregate_DTO_Group_By_Aggregation_Type_Value_Heatmap_Chart(aggregate, from_date, to_date)),
                            Errors = null,
                            Message = null
                        });

                    }
                    else if (_chart_type == ChartType.TreeMap)
                    {
                        Aggregate_DTO_Group_By_Aggregation_Type aggregate_dto_Group_By = _aggregateRepository.Get_Aggregate_Data(_chart_type, chart_id, from_date, to_date);

                        return Ok(new APIResponseWrapper()
                        {
                            Data = await Task.Factory.StartNew(() => Convert_Aggregate_DTO_Group_By_To_Tree_Map_Aggregate_DTO.Convert(aggregate_dto_Group_By)),
                            Errors = null,
                            Message = null
                        });
                    }
                    else if (_chart_type == ChartType.Bar || _chart_type == ChartType.BarFixedPlacement)
                    {
                        Aggregate_DTO_Group_By_Aggregation_Type agre = _aggregateRepository.Get_Aggregate_Data(_chart_type, chart_id, from_date, to_date);

                        if (_chart_type == ChartType.Bar)
                        {
                            return Ok(new APIResponseWrapper()
                                                              {
                                                                  Data = await Task.Factory.StartNew(() => Basic_Column_Chart_Convert.Basic_Column_Chart_Convert_To_Column_Basic(agre)),
                                                                  Errors = null,
                                                                  Message = null
                                                              });
                        }
                        else if (_chart_type == ChartType.BarFixedPlacement)
                        {
                            return Ok(new APIResponseWrapper()
                            {
                                Data = await Task.Factory.StartNew(() => Fixed_Placement_Chart_Convert.Fixed_Placement_Chart_Convert_To_Fixed_Placement(agre)),
                                Errors = null,
                                Message = null
                            });
                        }
                        else
                        {
                            return Ok(new APIResponseWrapper()
                            {
                                Data = null,
                                Errors = "Invalid Chart Type",
                                Message = null
                            });
                        }
                    }
                    else
                    {
                        return Ok(new APIResponseWrapper()
                        {
                            Data = null,
                            Errors = "Invalid Chart Type",
                            Message = null
                        });
                    }
                }
                catch (ArgumentNullException argEx)
                {
                    return BadRequest(argEx.Message);
                }
                catch (Exception ex)
                {
                    return BadRequest(ex.Message);
                }
            }
            return Ok(HttpStatusCode.OK);          
        }

       
      
    }
}
