using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Web;
using System.Web.Http.Controllers;
using System.Web.Http.Filters;
using System.Web.Routing;

namespace InnonAnalytics.WebApi.Filters
{



    public class LogRequest : ActionFilterAttribute
    {

        public override void OnActionExecuting(HttpActionContext actionContext)
        {
           
            string requeststring = HttpRequestExtensions.ToRaw(HttpContext.Current.Request);
            // pre-processing
            base.OnActionExecuting(actionContext);
        }

      

       
    }


    public static class HttpRequestExtensions
    {
        /// <summary>
        /// Dump the raw http request to a string. 
        /// </summary>
        /// <param name="request">The <see cref="HttpRequest"/> that should be dumped.       </param>
        /// <returns>The raw HTTP request.</returns>
        public static string ToRaw(this HttpRequest request)
        {
            StringWriter writer = new StringWriter();

            WriteStartLine(request, writer);
            WriteHeaders(request, writer);
            WriteBody(request, writer);

            return writer.ToString();
        }

        private static void WriteStartLine(HttpRequest request, StringWriter writer)
        {
            const string SPACE = " ";

            writer.Write(request.HttpMethod);
            writer.Write(SPACE + request.Url);
            writer.WriteLine(SPACE + request.ServerVariables["SERVER_PROTOCOL"]);
        }

        private static void WriteHeaders(HttpRequest request, StringWriter writer)
        {
            foreach (string key in request.Headers.AllKeys)
            {
                writer.WriteLine(string.Format("{0}: {1}", key, request.Headers[key]));
            }

            writer.WriteLine();
        }

        private static void WriteBody(HttpRequest request, StringWriter writer)
        {
            StreamReader reader = new StreamReader(request.InputStream);

            try
            {
                string body = reader.ReadToEnd();
                writer.WriteLine(body);
            }
            finally
            {
                reader.BaseStream.Position = 0;
            }
        }
    }
}