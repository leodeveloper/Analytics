using System.Web;
using System.Web.Mvc;

namespace InnonAnalytics.WebUI
{
    public class FilterConfig
    {
        public static void RegisterGlobalFilters(GlobalFilterCollection filters)
        {
            //Do not un comment handling error in the Application_Error
            //filters.Add(new HandleErrorAttribute());
        }
    }
}
