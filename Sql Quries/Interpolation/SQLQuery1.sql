
INSERT INTO [LORAHData].[dbo].[My_Home_Point]([TIMESTAMP],[TRENDFLAGS],[STATUS],[VALUE],[TRENDFLAGS_TAG],[STATUS_TAG])
select [TIMESTAMP],[TRENDFLAGS],[STATUS],[VALUE],[TRENDFLAGS_TAG],[STATUS_TAG] from [LORAHData].[dbo].[CP_Z5_L3_1122_ZZ_03_531_P02]
where ID >= 2404 and ID <= 2409



select * from [LORAHData].[dbo].[CP_Z5_L3_1122_ZZ_03_531_P02]
where ID >= 2407 and ID <= 2409


select * from [LORAHData].[dbo].[My_Home_Point]
delete from [LORAHData].[dbo].[My_Home_Point]