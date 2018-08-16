using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;
using System.Web.Optimization;
using System.Web.Routing;
using InnonAnalytics.Model.AutoMapper;
using FluentValidation.Mvc;
using InnonAnalytics.Service.Implementation;
using InnonAnalytics.Web.App_Start;


namespace InnonAnalytics.Web
{
    public class MvcApplication : System.Web.HttpApplication
    {
        protected void Application_Start()
        {

            
            
            AreaRegistration.RegisterAllAreas();
            FilterConfig.RegisterGlobalFilters(GlobalFilters.Filters);
            RouteConfig.RegisterRoutes(RouteTable.Routes);
            BundleConfig.RegisterBundles(BundleTable.Bundles);
            AutoMapperConfiguration.Configure();
            FluentValidationModelValidatorProvider.Configure();
            AutofacConfig.RegisterComponents();
            LanguageRepository.InitializeLangugae();
        }

      
    }
}
