select * from [dbo].[tblTags]
where Container_ID is not null

Select * from tblContainer


select * from [dbo].[tblContainer]



insert into tblTags([Description_ID],[Tag_Kind],[Tag_Type],[Tag_Value],[Parent_Tag_ID],[Is_Disabled],[Container_ID])
select NULL,'Marker',F1,F2,NULL,'false',1 from [dbo].[Sheet1$]

select Tag_Type from [dbo].[tblTags]
group by Tag_Type
