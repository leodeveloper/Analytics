using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Service.Repository;
using InnonAnalytics.WebApi.Filters;
using InnonAnalytics.WebApi.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Threading.Tasks;
using System.Web.Http;

namespace InnonAnalytics.WebApi.Controllers
{

    [AllowCrossDomainRequests]
    public class ChartRawDataController : ApiController
    {
        private static IAggregateRepository _aggregateRepository;

        public ChartRawDataController(IAggregateRepository aggregateRepository)
        {
            _aggregateRepository = aggregateRepository;
        }

        
        [HttpOptions]
        [HttpGet]
        public async Task<IHttpActionResult> Get_Raw_Data_By_Chart(string chart_type, int chart_id, DateTime from_date, DateTime to_date)
        {
            if (Request.Method != HttpMethod.Options)
            {
                try
                {
                    ChartType _chart_type;
                    if (!Enum.TryParse(chart_type, out _chart_type))
                        return BadRequest(string.Format(Resources.Invalid_Chart_Type + " {0}", chart_type));
                    return Ok(new APIResponseWrapper() {
                        Data = await Task.Factory.StartNew(() => _aggregateRepository.Get_Raw_Data(_chart_type, chart_id, from_date, to_date)), 
                        Errors = null, 
                        Message = null });
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
