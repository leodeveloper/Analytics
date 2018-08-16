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
    public class GaugeDTOValidator : AbstractValidator<ChartGaugeDTO>
    {
        public GaugeDTOValidator()
        {
            RuleFor(x => x.Metric_Label).NotEmpty().WithMessage(Resources.AnalyticsProperties_Metric_Label);
            RuleFor(x => x.Metric.Id).NotEmpty().When(t => t.Metric != null).WithMessage(Resources.AnalyticsProperties_Metric);
            RuleFor(x => x.Target_Matric_Label).NotEmpty().WithMessage(Resources.AnalyticsProperties_Metric_Label);
            RuleFor(x => x.Target_Matric.Id).NotEmpty().When(t => t.Metric != null).WithMessage(Resources.AnalyticsProperties_Metric);
            RuleFor(x => x.Minor_Unit).NotEmpty().WithMessage(Resources.AnalyticsProperties__Minor_Unit);
            RuleFor(x => x.Minor_Unit).GreaterThan(0).WithMessage(Resources.AnalyticsProperties__Minor_Unit_Between);

            RuleFor(x => x.Min).NotEmpty().WithMessage(Resources.AnalyticsProperties__Min);
            RuleFor(x => x.Min).GreaterThan(-1).WithMessage(Resources.AnalyticsProperties__Min_Between);

            RuleFor(x => x.Max).NotEmpty().WithMessage(Resources.AnalyticsProperties__Max);
            RuleFor(x => x.Max).InclusiveBetween(0,500).WithMessage(Resources.AnalyticsProperties__Max_Between);

            RuleFor(x => x.Start_Angle).NotEmpty().WithMessage(Resources.AnalyticsProperties__Start_Angle);
            RuleFor(x => x.Start_Angle).GreaterThan(-90).WithMessage(Resources.AnalyticsProperties__Start_Angle_Between);

            RuleFor(x => x.End_Angle).NotEmpty().WithMessage(Resources.AnalyticsProperties__End_Aangle);
            RuleFor(x => x.End_Angle).GreaterThan(360).WithMessage(Resources.AnalyticsProperties__End_Aangle_Between);
        }
    }
}
