using AutoMapper;
using InnonAnalytics.Model.AutoMapper.Mapping;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.AutoMapper
{
    public class AutoMapperConfiguration
    {
        public static void Configure()
        {

            Mapper.Initialize(x =>
            {
                x.AddProfile<DalToServiceMappingProfile>();
            });

        }
    }
}
