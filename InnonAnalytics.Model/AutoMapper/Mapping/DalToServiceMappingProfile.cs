using AutoMapper;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.AutoMapper.Mapping
{
    public class DalToServiceMappingProfile : Profile
    {
        protected override void Configure()
        {
            base.Configure();
            //Mapper.CreateMap<tblLanguage, LanguageDTO>();//.ForSourceMember(dest => dest.LanguageDescriptions, option => option.Ignore());

            //Mapper.CreateMap<Description, DescriptionDTO>().ReverseMap();

            //Mapper.CreateMap<LanguageDescription, LanguageDescriptionDTO>().ReverseMap();

            //Mapper.CreateMap<SelectionType, SelectionTypeDTO>().ReverseMap();

            //Mapper.CreateMap<SelectionTypeValue, SelectionTypeValueDTO>().ForMember(dest => dest.SelectionTypeID, opts => opts.MapFrom(src => src.SelectionType.ID));

            //Mapper.CreateMap<Company, CompanyDTO>().ReverseMap();
            Mapper.CreateMap<tblHomePage_Widget, HomePage_WidgetDTO>().ReverseMap();
            Mapper.CreateMap<Dashboard_Widget_DTO, HomePage_WidgetDTO>()
                .ForMember(dest=>dest.User_Id , opt=>opt.Ignore())
                .ForMember(dest => dest.Widget_Id , opt => opt.MapFrom(source => source.Id))
                .ReverseMap()
                .ForMember(x => x.Id, opt => opt.MapFrom(dest => dest.Widget_Id));
            Mapper.CreateMap<AspNetUserDashboard, UsersDashboardDTO>().ReverseMap();
            Mapper.CreateMap<AspNetUserMetric, UsersMetricDTO>().ReverseMap();
            Mapper.CreateMap<AspNetUserElement, UsersElementDTO>().ReverseMap();
            Mapper.CreateMap<Audit_DTO, tblAudit>().ReverseMap();
            Mapper.CreateMap<Note_DTO, tblNote>().ReverseMap();
            Mapper.AssertConfigurationIsValid();
     
        }
    }
}
