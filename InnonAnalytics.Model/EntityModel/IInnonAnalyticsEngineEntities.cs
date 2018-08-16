using System;
namespace InnonAnalytics.Model.EntityModel
{
    public interface IInnonAnalyticsEngineEntities
    {
        System.Data.Entity.Core.Objects.ObjectResult<tblPoint> GetTableName(string serverName, string userName, string password, string dataBaseName);
        System.Data.Entity.Core.Objects.ObjectResult<tblPoint> GetTableName(string serverName, string userName, string password, string dataBaseName, System.Data.Entity.Core.Objects.MergeOption mergeOption);

      //  System.Data.Entity.Core.Objects.ObjectResult<object> GetRawData(string serverName, string userName, string password, string dataBaseName, string tableName);

        System.Data.Entity.DbSet<sysdiagram> sysdiagrams { get; set; }
        System.Data.Entity.DbSet<tblConnector> tblConnectors { get; set; }

        System.Data.Entity.DbSet<tblChart_Gauge> tblChart_Gauge { get; set; }

        System.Data.Entity.DbSet<tblChart_TreeMap> tblChart_TreeMap { get; set; }

        System.Data.Entity.DbSet<tblChart_Bar> tblChart_Bar { get; set; }

        System.Data.Entity.DbSet<tblDatabaseLog> tblDatabaseLogs { get; set; }
        System.Data.Entity.DbSet<tblDescription> tblDescriptions { get; set; }
        System.Data.Entity.DbSet<tblElement> tblElements { get; set; }
        System.Data.Entity.DbSet<tblLanguageDescription> tblLanguageDescriptions { get; set; }
        System.Data.Entity.DbSet<tblLanguage> tblLanguages { get; set; }
        System.Data.Entity.DbSet<tblPoint> tblPoints { get; set; }
        System.Data.Entity.DbSet<tblTagElement> tblTagElements { get; set; }
        System.Data.Entity.DbSet<tblTag> tblTags { get; set; }

        System.Data.Entity.DbSet<tblContainer> tblContainers { get; set; }

        System.Data.Entity.DbSet<tblUnit> tblUnits { get; set; }
        System.Data.Entity.DbSet<tblDashboard> tblDashboards { get; set; }

       

        System.Data.Entity.DbSet<tblDashboard_Widget> tblDashboard_Widget { get; set; }

        System.Data.Entity.DbSet<tblMetric> tblMetrics { get; set; }

        System.Data.Entity.DbSet<tblDatawareHouseMigrationLog> tblDatawareHouseMigrationLogs { get; set; }

        System.Data.Entity.DbSet<tblTag_Type_Mapping> tblTag_Type_Mapping { get; set; }


        System.Data.Entity.DbSet<tblChart_Metric> tblChart_Metric { get; set; }
        System.Data.Entity.DbSet<tblChart_Pie> tblChart_Pie { get; set; }

        System.Data.Entity.DbSet<tblChart_Heatmap> tblChart_Heatmap { get; set; }

        System.Data.Entity.DbSet<tblChart_Stacked> tblChart_Stacked { get; set; }

        System.Data.Entity.DbSet<tblChart_Donut> tblChart_Donut { get; set; }
        System.Data.Entity.DbSet<tblChart_Counter> tblChart_Counter { get; set; }

        System.Data.Entity.DbSet<tblChart_Line> tblChart_Line { get; set; }

        System.Data.Entity.DbSet<tblHomePage_Widget> tblHomePage_Widget { get; set; }


        System.Data.Entity.DbSet<AspNetUserDashboard> AspNetUserDashboards { get; set; }

        System.Data.Entity.DbSet<AspNetUserMetric> AspNetUserMetrics { get; set; }

        System.Data.Entity.DbSet<AspNetUserElement> AspNetUserElements { get; set; }

        System.Data.Entity.DbSet<tblElement_Extension> tblElement_Extension { get; set; }

        System.Data.Entity.DbSet<tblAudit> tblAudits { get; set; }
        System.Data.Entity.DbSet<tblNote> tblNotes { get; set; }
    int SaveChanges();

        System.Data.Entity.Infrastructure.DbEntityEntry Entry(object entity);
    }
}
