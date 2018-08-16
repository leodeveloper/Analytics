
sp_DeletePointIDFromWarehouse 2244

EXEC GetRawData '5.79.38.26,1973', 'sa','Andyefrumos1','LORAHData','ALD_AHU1_5_HEATINGCOILENERGY','2015-03-15 05:44:35.167', '2015-05-15 05:44:40.143'


AHU2_8-HeatingCoil
EXEC GetRawMissingData '82.165.154.197', 'sa','Andyefrumos1','LORAHData','AHU2_8-HeatingCoil','2014-05-19 00:00:00.000', '2015-05-19 00:17:00.770', 1376

EXEC GetRawMissingData '82.165.154.197', 'sa','Andyefrumos1','LORAHData','AHU2_8-ExtractFan','2014-05-11 00:00:00.000', '2015-05-15 00:17:00.770', 1374

Exec Delete_Duplicate_Data 1282



select convert(datetime, getdate(),126)

declare @TimeStamp_From datetime
declare @TimeStamp_To datetime 
declare @PointID bigint

set @TimeStamp_From = '2014-05-08 05:44:35.167'   -- 6th of April, 2012
set @TimeStamp_To = '2015-05-16 05:44:40.143'   -- 6th of August, 2012
set @PointID = 1193
--	DECLARE @TESTPARAM varchar(20)
DECLARE @SQLQUERY varchar(500)

--SET @SQLQUERY = 'SELECT * FROM OPENROWSET(''SQLOLEDB'', ''Server='+ @ServerName +';UID='+ @UserName +';PWD='+ @Password +';'',''SELECT TOP 1000 * FROM ['+ @DataBaseName +'].[dbo].['+ @TableName +']'');';

SET @SQLQUERY = 'SELECT * FROM OPENROWSET(''SQLOLEDB'', ''Server='+ '37.187.145.216' +';UID='+ 'sa' +';PWD='+ 'Andyefrumos1' +';'',
''SELECT * FROM ['+'Geoscart' +'].[dbo].['+ 'SAINSBURYS_EMERSONSGREEN_PUMP4ACTUALKW' +'] 
where  TIMESTAMP between '''''+ convert(varchar, @TimeStamp_From, 126 ) +''''' and '''''+ convert(varchar, @TimeStamp_To,126)  +''''' '')
where ID not in (select External_ID from [dbo].[Point_Measure_Fact] where Point_ID = '+ Convert(varchar, 1270) +'
)';

--* INTO ##MYTable
print @SQLQUERY;
Exec(@SQLQUERY);	 

select * from tblElement
where  Element_Tag_Type = 'point'

SELECT * FROM OPENROWSET('SQLOLEDB', 'Server=82.165.154.197;UID=sa;PWD=Andyefrumos1;',
'SELECT * FROM [LORAHData].[dbo].[AHU1_10-ExtractFan] where  TIMESTAMP between ''2014-05-12 00:00:00.000'' and ''2015-05-12 12:25:32.353'' ')

SELECT * FROM OPENROWSET('SQLOLEDB', 'Server=82.165.154.197;UID=sa;PWD=Andyefrumos1;',
'SELECT * FROM [TestOpenEnergiTescoData].[dbo].[TESCO2101_AVAILABILITYOFF_HT9] where  TIMESTAMP between ''2013-05-16T05:44:35.167'' and ''2013-05-20T05:44:40.143'' order by TIMESTAMP ')


SELECT * FROM OPENROWSET('SQLOLEDB', 'Server=37.187.145.216;UID=sa;PWD=Andyefrumos1;',
'SELECT * FROM [Geoscart].[dbo].[SAINSBURYS_EMERSONSGREEN_PUMP4ACTUALKW] where  TIMESTAMP between ''2014-05-11 00:00:00.000'' and ''2015-05-11 00:17:00.770'' Order by TIMESTAMP desc ')


select t.name TableName, i.rows Records
from sysobjects t, sysindexes i
where t.xtype = 'U' and i.id = t.id and i.indid in (0,1)
order by TableName;

select 'abce' + 123