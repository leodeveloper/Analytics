using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
    public class LanguageDescriptionRepository
    {
        private InnonAnalyticsEngineEntities _context;
        public LanguageDescriptionRepository()
        {
            _context = new InnonAnalyticsEngineEntities();
        }

        public void SaveLanguageDescription(LanguageDescriptionDTO objLanguageDescriptionDTO)
        {
            try
            {
              _context.tblLanguageDescriptions.Add(LanguageDescriptionConvert.LanguageDescriptionConvertDTOToTable(objLanguageDescriptionDTO));
            }
            catch
            {
                throw;
            }            
        }     
    }
}
