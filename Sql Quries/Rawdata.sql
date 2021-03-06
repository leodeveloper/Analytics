/****** Script for SelectTopNRows command from SSMS  ******/
SELECT [ID]
      ,[TIMESTAMP]
      ,[TRENDFLAGS]
      ,[STATUS]
      ,[VALUE]
      ,[TRENDFLAGS_TAG]
      ,[STATUS_TAG]
  FROM [TestOpenEnergiTescoData].[dbo].[TESCO2101_FREQUENCY_INTERVAL]
  where Timestamp between '2013-05-16 05:45:00' and '2013-05-17 23:59:00'
  union
  SELECT [ID]
      ,[TIMESTAMP]
      ,[TRENDFLAGS]
      ,[STATUS]
      ,[VALUE]
      ,[TRENDFLAGS_TAG]
      ,[STATUS_TAG]
  FROM [TestOpenEnergiTescoData].[dbo].[TESCO3213_FREQUENCY_INTERVAL]
  where Timestamp between '2013-05-16 05:45:00' and '2013-05-17 23:59:00'


  2013-05-16 05:44:35.167
  2013-05-16 05:45:00.140