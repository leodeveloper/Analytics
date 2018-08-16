using Autofac;
using Autofac.Integration.Mvc;
using InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel;
using InnonAnalytics.DataWareHouseService.Repository;
using InnonAnalytics.DataWareHouseService.Service;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Implementation;
using InnonAnalytics.Service.Repository;
using System.Web.Mvc;

namespace InnonAnalytics.WebUI.App_Start
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

            builder.RegisterType<ElementRepository>().As<IElementRepository>();
            builder.RegisterType<ElementRepository>();

            builder.RegisterType<RawTableRepository>().As<IRawTableRepository>();
            builder.RegisterType<RawTableRepository>();

            builder.RegisterType<UnitRepository>().As<IUnitRepository>();
            builder.RegisterType<UnitRepository>();

            builder.RegisterType<TagRepository>().As<ITagRepository>();
            builder.RegisterType<TagRepository>();

            builder.RegisterType<DashboardRepository>().As<IDashboardRepository>();
            builder.RegisterType<DashboardRepository>();

            builder.RegisterType<HomePageWidgetRepository>().As<IHomePageWidgetRepository>();
            builder.RegisterType<HomePageWidgetRepository>();

            builder.RegisterType<ChartRepository>().As<IChartRepository>();
            builder.RegisterType<ChartRepository>();

            builder.RegisterType<MetricRepository>().As<IMetricRepository>();
            builder.RegisterType<MetricRepository>();

            builder.RegisterType<TagElementRepository>().As<ITagElementRepository>();
            builder.RegisterType<TagElementRepository>();

            builder.RegisterType<AggregateRepository>().As<IAggregateRepository>();
            builder.RegisterType<AggregateRepository>();

            builder.RegisterType<WareHouse_Data>().As<IWareHouse_Data>();
            builder.RegisterType<WareHouse_Data>();

            builder.RegisterType<NoteRepository>().As<INoteRepository>();
            builder.RegisterType<NoteRepository>();

            builder.RegisterType<InnonAnalyticsEngineEntities>().As<IInnonAnalyticsEngineEntities>();

            builder.RegisterType<InnonAnalyticsWarehouseEntities>().As<IInnonAnalyticsWarehouseEntities>();



            builder.RegisterType<Aggregate_Data>().As<IAggregate_Data>();
            builder.RegisterType<Aggregate_Data>();

            var container = builder.Build();

            DependencyResolver.SetResolver(new AutofacDependencyResolver(container));

        }
    }
}