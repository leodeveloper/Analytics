/****** Script for SelectTopNRows command from SSMS  ******/


--SELECT TableA.*,  case when (TableA.Raw_Value - TableB.Raw_Value) is NULL then 0 else (TableA.Raw_Value - TableB.Raw_Value) end as Val 
--FROM [InnonAnalyticsWarehouse_New].[dbo].[Point_Measure_Fact] TableA  
--INNER JOIN [InnonAnalyticsWarehouse_New].[dbo].[Point_Measure_Fact] TableB ON TableB.ID = TableA.ID - 1 
--where 
--TableA.Timestamp_From between '2015-09-01 00:15:00.350' and '2015-09-01 01:30:00.358' 
--and TableA.Point_ID = 3575
--order by TableA.Timestamp_From;

select * from 

SELECT *  FROM [InnonAnalyticsWarehouse_New].[dbo].[Point_Measure_Fact]
  where --Timestamp_From = Timestamp_To and  Point_ID = 2206
    Point_ID = 3575 order by Timestamp_From

  --update [InnonAnalyticsWarehouse_New].[dbo].[Point_Measure_Fact]
  --set Timestamp_From = '2015-09-01 01:15:00.350', Timestamp_To = '2015-09-01 01:30:00.350'
  --where ID = 91230232

  select * from [InnonAnalyticsWarehouse_New].[dbo].[FactsRestatementAudit]

  select sum(value),avg(value), min(value), max(value), count(value) from [InnonAnalyticsWarehouse_New].[dbo].[Point_Measure_Fact]
  where Point_ID = 3575


  select * from [InnonAnalyticsWarehouse_New].[dbo].[Point_Agg_Day]
  where Point_ID = 3575

  select * from [InnonAnalyticsWarehouse_New].[dbo].[Point_Agg_Hour]
    where Point_ID = 3575

select * from [InnonAnalyticsWarehouse_New].[dbo].[Point_Agg_Month]
   where Point_ID = 3575

   select * from [InnonAnalyticsWarehouse_New].[dbo].[Point_Agg_Year]
     where Point_ID = 3575

	-- (24-21)/3 = 1; 21+1; 22; 23