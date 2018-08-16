using FluentValidation.Mvc;
using InnonAnalytics.Model.AutoMapper;
using InnonAnalytics.Service.Implementation;
using InnonAnalytics.WebUI.App_Start;
using InnonAnalytics.WebUI.Controllers;
using InnonAnalytics.WebUI.Filters;
using System;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using System.Web.Optimization;
using System.Web.Routing;

namespace InnonAnalytics.WebUI
{
    public class MvcApplication : System.Web.HttpApplication
    {
       //  [HandleError]
        protected void Application_Start()
        {

            ValueProviderFactories.Factories.Remove(ValueProviderFactories.Factories.OfType<System.Web.Mvc.JsonValueProviderFactory>().FirstOrDefault());
            ValueProviderFactories.Factories.Add(new MyJsonValueProviderFactory());

            AreaRegistration.RegisterAllAreas();
            FilterConfig.RegisterGlobalFilters(GlobalFilters.Filters);
            RouteConfig.RegisterRoutes(RouteTable.Routes);
            BundleConfig.RegisterBundles(BundleTable.Bundles);

            FluentValidationModelValidatorProvider.Configure();
            AutofacConfig.RegisterComponents();
            AutoMapperConfiguration.Configure();
            //try
            //{
            LanguageRepository.InitializeLangugae();
            UnitRepository.InitializeUnit();
            //}
            //catch (Exception ex)
            //{
            //    //HttpRuntime.UnloadAppDomain(); // Make sure we try to run Application_Start again next request

            //  //  Response.Redirect("Error/Index", true);
            //    HttpContext.Current.Response.Redirect("Error/Index", true);

            //    //  throw ex; // Rethrow whatever was caught
            //}



        }


        /// <summary>
        /// 
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        protected void Application_Error(object sender, EventArgs e)
        {
            //Before to change any thing in the application please read the article http://prideparrot.com/blog/archive/2012/5/exception_handling_in_asp_net_mvc
            var httpContext = ((MvcApplication)sender).Context;
            var currentController = " ";
            var currentAction = " ";
            var currentRouteData = RouteTable.Routes.GetRouteData(new HttpContextWrapper(httpContext));

            if (currentRouteData != null)
            {
                if (currentRouteData.Values["controller"] != null && !String.IsNullOrEmpty(currentRouteData.Values["controller"].ToString()))
                {
                    currentController = currentRouteData.Values["controller"].ToString();
                }

                if (currentRouteData.Values["action"] != null && !String.IsNullOrEmpty(currentRouteData.Values["action"].ToString()))
                {
                    currentAction = currentRouteData.Values["action"].ToString();
                }
            }

           

            var ex = Server.GetLastError();
            var controller = new ErrorController();
            var routeData = new RouteData();
            var action = "Index";

            if (ex is HttpException)
            {
                var httpEx = ex as HttpException;

                switch (httpEx.GetHttpCode())
                {
                    case 404:
                        action = "NotFound" ;
                        break;

                    case 401:
                        action = "AccessDenied";
                        break;
                }
            }

            httpContext.ClearError();
            httpContext.Response.Clear();
            httpContext.Response.StatusCode = ex is HttpException ? ((HttpException)ex).GetHttpCode() : 500;
            httpContext.Response.TrySkipIisCustomErrors = true;
            httpContext.Response.ContentType = "text/html";

            routeData.Values["controller"] = "Error";
            routeData.Values["action"] = action;

            controller.ViewData.Model = new HandleErrorInfo(ex, currentController, currentAction);
            ((IController)controller).Execute(new RequestContext(new HttpContextWrapper(httpContext), routeData));
        }

       
    }
}
