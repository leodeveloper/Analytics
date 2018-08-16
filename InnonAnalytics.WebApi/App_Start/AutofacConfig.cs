using Autofac;
using Autofac.Integration.Mvc;
using Autofac.Integration.WebApi;
using InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel;
using InnonAnalytics.DataWareHouseService.Repository;
using InnonAnalytics.DataWareHouseService.Service;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Implementation;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Web;
using System.Web.Http;
using System.Web.Mvc;


namespace InnonAnalytics.WebApi.App_Start
{
    public class AutofacConfig
    {
        public static void RegisterComponents()
        {
            //var builder = new ContainerBuilder();
            //// Register dependencies in controllers
            //builder.RegisterControllers(typeof(WebApiApplication).Assembly);           

            //builder.RegisterType<DiscoveryRepository>().As<IDiscoveryRepository>();
            //builder.RegisterType<DiscoveryRepository>();

            //builder.RegisterType<ConnectorRepository>().As<IConnectorRepository>();
            //builder.RegisterType<ConnectorRepository>();

            //builder.RegisterType<ElementRepository>().As<IElementRepository>();
            //builder.RegisterType<ElementRepository>();

            //builder.RegisterType<RawTableRepository>().As<IRawTableRepository>();
            //builder.RegisterType<RawTableRepository>();

            //builder.RegisterType<UnitRepository>().As<IUnitRepository>();
            //builder.RegisterType<UnitRepository>();

            //builder.RegisterType<TagRepository>().As<ITagRepository>();
            //builder.RegisterType<TagRepository>();

            //builder.RegisterType<AggregateRepository>().As<IAggregateRepository>();
            //builder.RegisterType<AggregateRepository>();

            //builder.RegisterType<MetricRepository>().As<IMetricRepository>();
            //builder.RegisterType<MetricRepository>();

            //builder.RegisterType<InnonAnalyticsEngineEntities>().As<IInnonAnalyticsEngineEntities>();


            //builder.RegisterType<InnonAnalyticsWarehouseEntities>().As<InnonAnalyticsWarehouseEntities>();

            //builder.RegisterType<Aggregate_Data>().As<IAggregate_Data>();
            //builder.RegisterType<Aggregate_Data>();

            //var container = builder.Build();

            //DependencyResolver.SetResolver(new AutofacDependencyResolver(container));


            var builder = new ContainerBuilder();
            builder.RegisterControllers(Assembly.GetExecutingAssembly()); //Register MVC Controllers
            builder.RegisterApiControllers(Assembly.GetExecutingAssembly()); //Register WebApi Controllers
            //Register any other components required by your code....


            builder.RegisterType<DiscoveryRepository>().As<IDiscoveryRepository>();
            builder.RegisterType<DiscoveryRepository>();

            builder.RegisterType<ConnectorRepository>().As<IConnectorRepository>();
            builder.RegisterType<ConnectorRepository>();

            builder.RegisterType<ElementRepository>().As<IElementRepository>();
            builder.RegisterType<ElementRepository>();

            builder.RegisterType<RawTableRepository>().As<IRawTableRepository>();
            builder.RegisterType<RawTableRepository>();

            builder.RegisterType<UnitRepository>().As<IUnitRepository>();
            builder.RegisterType<UnitRepository>();

            builder.RegisterType<TagRepository>().As<ITagRepository>();
            builder.RegisterType<TagRepository>();

            builder.RegisterType<AggregateRepository>().As<IAggregateRepository>();
            builder.RegisterType<AggregateRepository>();

            builder.RegisterType<MetricRepository>().As<IMetricRepository>();
            builder.RegisterType<MetricRepository>();

            builder.RegisterType<DashboardRepository>().As<IDashboardRepository>();
            builder.RegisterType<DashboardRepository>();

            builder.RegisterType<ChartRepository>().As<IChartRepository>();
            builder.RegisterType<ChartRepository>();

            builder.RegisterType<TagElementRepository>().As<ITagElementRepository>();
            builder.RegisterType<TagElementRepository>();

            builder.RegisterType<DashboardRepository>().As<IDashboardRepository>();
            builder.RegisterType<DashboardRepository>();

            builder.RegisterType<WareHouse_Data>().As<IWareHouse_Data>();
            builder.RegisterType<WareHouse_Data>();

            builder.RegisterType<InnonAnalyticsEngineEntities>().As<IInnonAnalyticsEngineEntities>();


            builder.RegisterType<InnonAnalyticsWarehouseEntities>().As<IInnonAnalyticsWarehouseEntities>();
            
           

            builder.RegisterType<Aggregate_Data>().As<IAggregate_Data>();
            builder.RegisterType<Aggregate_Data>();

            var container = builder.Build();

            DependencyResolver.SetResolver(new AutofacDependencyResolver(container)); //Set the MVC DependencyResolver
            GlobalConfiguration.Configuration.DependencyResolver = new AutofacWebApiDependencyResolver((IContainer)container); //Set the WebApi DependencyResolver

        }
    }
}