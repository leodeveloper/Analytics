using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
    public class DescriptionRepository : IDescriptionRepository
    {
        private InnonAnalyticsEngineEntities _context;

        public DescriptionRepository()
        {
            _context = new InnonAnalyticsEngineEntities();
        }

        public void SaveDescription(DescriptionDTO objDescriptionDTO)
        {
            try
            {
                _context.tblDescriptions.Add(DescriptionConvert.DescriptionConvertDTOToTbl(objDescriptionDTO));
            }
            catch
            {
                throw;
            }            
        }

        public void SaveDescription(LanguageValueDTO objLanguageValueDTO)
        {
            try
            {

                //_context.Descriptions.Add(DescriptionConvert.DescriptionConvertDTOToTbl(objDescriptionDTO));
            }
            catch
            {
                throw;
            }
        }

    }
}
