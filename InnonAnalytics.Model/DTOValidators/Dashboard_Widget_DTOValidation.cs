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
    public class Dashboard_Widget_DTOValidation : AbstractValidator<Dashboard_Widget_DTO>
    {
        public Dashboard_Widget_DTOValidation()
        {
            RuleFor(x => x.Widget_Title).NotEmpty().WithMessage(Resources.AnalyticsProperties_Widget_Title);
            RuleFor(x => x.Chart_Type).NotEmpty().WithMessage(Resources.AnalyticsProperties_Chart_Type);
          //  RuleFor(x => x.GuageDTO.Metric.Id).NotEmpty().When(t=>t.GuageDTO != null).WithMessage(Resources.AnalyticsProperties_Metric);

            
            


            

           // RuleFor(x => x.Roll_Up).NotEmpty().WithMessage(Resources.AnalyticsProperties_Roll_Up);
          //  RuleFor(x => x.Roll_Up).GreaterThan(0).WithMessage(Resources.AnalyticsProperties_Roll_Up);

           // RuleFor(x => x.Timeline_Option).GreaterThan(0).WithMessage("must be greater than");

            //RuleFor(x => x.Group_By).NotEmpty().WithMessage(Resources.AnalyticsProperties_Group_By);
            //RuleFor(x => x.Filter_By).NotEmpty().WithMessage(Resources.AnalyticsProperties_Filter_By);
            //RuleFor(x => x.Filter_By_Option).NotEmpty().WithMessage(Resources.AnalyticsProperties_Filter_By_Option);
            //RuleFor(x => x.Filter_Text).NotEmpty().WithMessage(Resources.AnalyticsProperties_Filter_Text);
            //RuleFor(x => x.Filter_Text).Length(1,74).NotEmpty().WithMessage(Resources.AnalyticsProperties_Filter_Text_Lenght);


        }
    }

    public class Dashboard_Widget_VM_DTOValidation : AbstractValidator<Dashboard_Widget_VM_DTO>
    {
        public Dashboard_Widget_VM_DTOValidation()
        {
            RuleFor(x => x.Widget_Title).NotEmpty().WithMessage(Resources.AnalyticsProperties_Widget_Title);
            RuleFor(x => x.Chart_Type).NotEmpty().WithMessage(Resources.AnalyticsProperties_Chart_Type);


        }
    }
}
