using System;
using System.Data.Entity;
namespace InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel
{
    public interface IInnonAnalyticsWarehouseEntities
    {
        System.Data.Entity.DbSet<Date_Dim> Date_Dim { get; set; }
        System.Data.Entity.DbSet<Point_Agg_Day> Point_Agg_Day { get; set; }
        System.Data.Entity.DbSet<Point_Agg_Hour> Point_Agg_Hour { get; set; }
        System.Data.Entity.DbSet<Point_Agg_Month> Point_Agg_Month { get; set; }
        System.Data.Entity.DbSet<Point_Agg_Week> Point_Agg_Week { get; set; }
        System.Data.Entity.DbSet<Point_Agg_Year> Point_Agg_Year { get; set; }
        System.Data.Entity.DbSet<Point_Dim> Point_Dim { get; set; }
        System.Data.Entity.DbSet<Point_Measure_Fact> Point_Measure_Fact { get; set; }
        System.Data.Entity.DbSet<FactsRestatementAudit> FactsRestatementAudits { get; set; }


        int SaveChanges();

        System.Data.Entity.Infrastructure.DbEntityEntry Entry(object entity);

        Database Database { get; }
    }
}
