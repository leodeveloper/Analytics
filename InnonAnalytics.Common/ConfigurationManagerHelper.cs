using System;
using System.Collections.Generic;
using System.Configuration;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Common
{
    public class AppSettingsHelper
    {
        public object this[string key]
        {
            get
            {
                object setting = ConfigurationManager.AppSettings[key];
                if (setting == null)
                {
                    throw new ConfigurationErrorsException(string.Format(@"The key ""{0}"" is missing from the AppSettings section in the configuration file (App.config or Web.config).", key));
                }

                return setting;
            }
        }
    }

    public class ConfigurationManagerHelper
    {
        public static AppSettingsHelper AppSettings = new AppSettingsHelper();
    }
}
