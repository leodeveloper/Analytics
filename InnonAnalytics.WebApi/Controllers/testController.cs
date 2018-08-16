using InnonAnalytics.Service.Implementation;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;

namespace InnonAnalytics.API.Controllers
{
    public class testController : ApiController
    {

        public string Get()
        {
            IObixRepository obj = new ObixRepository("http://192.168.1.69:81/obix", "admin", "Andyefrumos1");
            return "";
        }
    }
}
