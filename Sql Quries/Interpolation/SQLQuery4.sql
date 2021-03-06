/****** Script for SelectTopNRows command from SSMS  ******/
SELECT  *  FROM [InnonAnalyticsEngine_Dev].[dbo].[tblElement]

  --update [InnonAnalyticsEngine_Dev].[dbo].[tblElement]
  set Value_Type = 'Instant'
  where ID = 3575

  exec [InnonAnalyticsEngine_Dev].[dbo].[sp_DeletePointIDFromWarehouse] 3575


  DELETE FROM InnonAnalyticsWarehouse_New.dbo.Point_Agg_Day 
DELETE FROM InnonAnalyticsWarehouse_New.dbo.Point_Agg_Month 
DELETE FROM InnonAnalyticsWarehouse_New.dbo.Point_Agg_Year 
DELETE FROM InnonAnalyticsWarehouse_New.dbo.Point_Agg_Hour
DELETE FROM InnonAnalyticsWarehouse_New.dbo.Point_Agg_Week

DELETE FROM InnonAnalyticsWarehouse_New.dbo.Point_Agg_Day_Schedule
DELETE FROM InnonAnalyticsWarehouse_New.dbo.Point_Agg_Month_Schedule
DELETE FROM InnonAnalyticsWarehouse_New.dbo.Point_Agg_Year_Schedule 
DELETE FROM InnonAnalyticsWarehouse_New.dbo.Point_Agg_Hour_Schedule 
DELETE FROM InnonAnalyticsWarehouse_New.dbo.Point_Agg_Week_Schedule
DELETE FROM InnonAnalyticsWarehouse_New.dbo.FactsRestatementAudit 

DELETE FROM InnonAnalyticsWarehouse_New.dbo.Point_Measure_Fact

DELETE FROM InnonAnalyticsWarehouse_New.dbo.Point_Dim 

DELETE FROM InnonAnalyticsEngine_Dev.dbo.tblDatawareHouseMigrationLog 