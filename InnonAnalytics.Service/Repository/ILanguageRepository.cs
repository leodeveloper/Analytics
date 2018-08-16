using InnonAnalytics.Model.DTO;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Repository
{
    public interface ILanguageRepository
    {
        List<LanguageDTO> GetAllLanguage();
     //   List<LanguageDTO> GetAllActiveLanguage();
    }
}
