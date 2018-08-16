using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
    public class MenuRespository
    {
        private InnonAnalyticsEngineEntities context; 

        

        public MenuRespository()
        {
            this.context = new InnonAnalyticsEngineEntities();
        }

        public void getMenu()
        {
            
        }
    }
}
