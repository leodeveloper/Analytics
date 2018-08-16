using Autofac;
using Autofac.Integration.Mvc;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Implementation;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Mvc;

namespace InnonAnalytics.Web.App_Start
{

    //http://www.codeproject.com/Articles/842869/Repository-Pattern-using-Dependency-Injection-Auto?msg=4951145#xx4951145xx
    public static class AutofacConfig
    {
        public static void RegisterComponents()
        {
            var builder = new ContainerBuilder();
            // Register dependencies in controllers
            builder.RegisterControllers(typeof(MvcApplication).Assembly);
            
            builder.RegisterType<DiscoveryRepository>().As<IDiscoveryRepository>();
            builder.RegisterType<DiscoveryRepository>();


            builder.RegisterType<ConnectorRepository>().As<IConnectorRepository>();
            builder.RegisterType<ConnectorRepository>();

            builder.RegisterType<RawTableRepository>().As<IRawTableRepository>();
            builder.RegisterType<RawTableRepository>();

        
            builder.RegisterType<InnonAnalyticsEngineEntities>().As<IInnonAnalyticsEngineEntities>();
            var container = builder.Build();
            
            DependencyResolver.SetResolver(new AutofacDependencyResolver(container));
        }
    }
}