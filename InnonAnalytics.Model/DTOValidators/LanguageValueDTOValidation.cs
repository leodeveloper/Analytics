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
    public class LanguageValueDTOValidator : AbstractValidator<LanguageValueDTO>
    {
        public LanguageValueDTOValidator()
        {
            RuleFor(x => x.ShortValue).NotEmpty().WithMessage(Resources.ShortValue);
        }
    }
}
