
using InnonAnalytics.Service.Implementation;
using InnonAnalytics.Service.Repository;
using InnonAnalytics.WebApi.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;

namespace InnonAnalytics.WebApi.Controllers
{
    public class LanguageController : ApiController
    {
       // private ILanguageRepository objLanguageRepository;

      //  [Authorize]
        public HttpResponseMessage GetAllAlanguage()
        {
            try
            {

              // objLanguageRepository = new LanguageRepository();
                return Request.CreateResponse(HttpStatusCode.OK, new APIResponseWrapper()
                {
                    //Data = objLanguageRepository.GetAllLanguage()
                });
            }
            catch (Exception ex)
            {
                return Request.CreateResponse(HttpStatusCode.BadRequest, new APIResponseWrapper()
                {
                    Message = ex.Message,
                    Errors = ex.InnerException != null ? ex.InnerException.Message: null

                });
            }          
        }

    }
}
