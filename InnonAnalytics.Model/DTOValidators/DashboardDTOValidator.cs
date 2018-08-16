using FluentValidation;
using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Model.DTO;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTOValidators
{
    

    public class DashboardDTOValidator : AbstractValidator<DashboardDTO>
    {
        public DashboardDTOValidator()
        {
            RuleFor(x => x.Title).NotEmpty().WithMessage(Resources.Dashboard_Title);
            RuleFor(x => x.Dashboard_Type).NotEmpty().WithMessage(Resources.Dashboard_Type);
        }
    }
}
