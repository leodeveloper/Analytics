using InnonAnalytics.Model.DTO;
using InnonAnalytics.Service.Repository;
using InnonAnalytics.WebApi.Filters;
using InnonAnalytics.WebApi.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;

namespace InnonAnalytics.WebApi.Controllers
{



    public class DiagramController : ApiController
    {
        private static IAggregateRepository _aggregateRepository;

        public DiagramController(IAggregateRepository aggregate_repository)
        {
            _aggregateRepository = aggregate_repository;
        }


        [AllowCrossDomainRequests]
        [HttpGet]
        public IHttpActionResult Get(DateTime from_date, DateTime to_date)
        {
            try
            {
                List<Aggregate_Metric_Elements_Value> metric_element_values = _aggregateRepository.Get_Aggregate_Data_By_Metrics(Common.Enums.ChartType.Diagram,0, from_date, to_date);           

                return Ok(new APIResponseWrapper()
                {
                    Data =  Chart_Diagram_Aggregate_DTO_Convert.Convert_Aggregate_Metric_List_To_Diagram(metric_element_values),
                    Errors = null,
                    Message = null
                });
            }
            catch(Exception ex)
            {
                return Ok(new APIResponseWrapper()
                {
                    Data = null,
                    Errors = ex,
                    Message = ex.Message
                });
            }
           
        }

        [Authorize]
        [AllowCrossDomainRequests]
        [HttpGet]
        public HttpResponseMessage GetResponse()
        {
            return Request.CreateResponse(HttpStatusCode.OK, new APIResponseWrapper()
            {
                Data = "Nothing",
                Message = null,
                Errors = null

            });
        }
    

    }
}
