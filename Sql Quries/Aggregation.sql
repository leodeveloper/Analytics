select * from [dbo].[Date_Dim]

select top 100 * from [dbo].[Point_Measure_Fact]
order by ID desc 


select * from [dbo].[Point_Measure_Fact]
where Point_ID = 1410
order by Timestamp_From desc

select Hour_ID, Sum(Value) from [dbo].[Point_Measure_Fact]
where Point_ID = 1197
Group by Hour_ID
order by Hour_ID

select Hour_ID, Sum(Value) from [dbo].[Point_Measure_Fact]
where Point_ID = 1197
Group by Hour_ID
order by Hour_ID


select * from [dbo].[Point_Agg_Day]


select * from [dbo].[Date_Dim]

select * from [dbo].[Point_Dim]

select * from [dbo].[Point_Agg_Day]
select * from [dbo].[Point_Agg_Hour]
select * from [dbo].[Point_Agg_Month]
select * from [dbo].[Point_Agg_Week]
select * from [dbo].[Point_Agg_Year]


delete from [dbo].[Point_Agg_Day]
delete from [dbo].[Point_Agg_Hour]
delete from [dbo].[Point_Agg_Month]
delete from [dbo].[Point_Agg_Week]
delete from [dbo].[Point_Agg_Year]




