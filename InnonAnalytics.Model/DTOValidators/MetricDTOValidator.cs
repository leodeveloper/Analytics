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
    public class MetricDTOValidator : AbstractValidator<MetricDTO>
    {
        public MetricDTOValidator()
        {
            RuleFor(x => x.Metric_Name).NotEmpty().WithMessage(Resources.Metric_Name);
            RuleFor(x => x.Tags).NotEmpty().WithMessage(Resources.Metric_Tags);
            RuleFor(x => x.Rollup_Function).NotEmpty().WithMessage(Resources.Metric_Rollup);
            RuleFor(x => x.Unit_Id).NotEmpty().WithMessage(Resources.Metric_Unit_Message);
           
        }
    }
}
