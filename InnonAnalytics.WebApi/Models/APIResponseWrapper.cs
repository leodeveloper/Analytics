using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace InnonAnalytics.WebApi.Models
{
    public class APIResponseWrapper
    {
        public string Message { get; set; }
        public object Data { get; set; }
        public object Errors { get; set; }
    }
}