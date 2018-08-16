select * from tblElement
where  Element_Tag_Type = 'point'

select * from tblElement
where Element_Tag_Type = 'point'
and Is_Disabled = 'false'

update tblElement set Is_Disabled = 'true'
where  Element_Tag_Type = 'point'

update tblElement set Is_Disabled = 'false'
where  Element_Tag_Type = 'point'
and ID in (1191,1193)

select top 10 * from [dbo].[tblDatawareHouseMigrationLog]
order by ID desc
--delete from [dbo].[tblDatawareHouseMigrationLog]



select * from [dbo].[tblMetric]