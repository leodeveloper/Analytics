select * from [dbo].[Point_Measure_Fact]
where Point_ID = 1162
order by Last_Update_Time

delete from [dbo].[Point_Measure_Fact]
where Point_ID in (1191,1193)

select * from [dbo].[Point_Measure_Fact]
where Point_ID in (1191)
Order by Timestamp_From desc
order by External_ID 

Point_ID,Timestamp_From , Last_Update_Time

2014-07-06 21:00:00.000

9102680 2015-05-10 20:00:00.000, 72.1793
9095290	0	1191	2014-07-06 21:00:00.000		4.78726

SELECT * FROM OPENROWSET('SQLOLEDB', 'Server=37.187.145.216;UID=sa;PWD=Andyefrumos1;',
'SELECT * FROM [Geoscart].[dbo].[Beckton_Primary_Thermal_Energy] where  TIMESTAMP between ''2014-05-11 00:00:00.000'' and ''2015-05-10 20:00:00.000'' ')

select * from [dbo].[Point_Measure_Fact]
where Point_ID in (1193)
Order by Timestamp_From desc

609 2015-04-22 01:13:00.167
2015-04-22 01:13:00.170



order by  Point_ID,Timestamp_From , Last_Update_Time

select * from [dbo].[Point_Measure_Fact]
where Point_ID in (1191,1193)
order by  Point_ID,Timestamp_From , Last_Update_Time

select External_ID, Count(*) from [dbo].[Point_Measure_Fact]
where Point_ID in (1191,1193)
Group by  External_ID
order by Count(*)





1191	Beckton_Primary_Thermal_Energy
1193	SAINSBURYS_EMERSONSGREEN_PUMP4ACTUALKW

select Point_ID, count(*) from [dbo].[Point_Measure_Fact]
--where Point_ID in (1160,1170,1178)
group by Point_ID
order by count(*)

delete from [dbo].[Point_Measure_Fact]
where Last_Update_Time > '2015-05-07'

select * from [dbo].[Date_Dim]

select * from [dbo].[Point_Agg_Hour]

select * from  [dbo].[Point_Agg_Day]

select * from [dbo].[Point_Agg_Month]

14,43,639

1178	3733
1170	4786
1160	6526