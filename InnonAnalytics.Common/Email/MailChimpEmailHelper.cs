using MailChimp;
using MailChimp.Helper;
using Mandrill;
using System;
using System.Collections.Generic;
using System.Dynamic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Common.Email
{
    public class MailChimpEmailHelper
    {
        public static void SubscribeEmailAddress(string strEmail, string strPostCode, string strListId)
        {
            MailChimpManager mc = new MailChimpManager(ConfigurationManagerHelper.AppSettings["MailChimpAPIKey"].ToString());
            EmailParameter email = new EmailParameter()
            {
                Email = strEmail
            };

            var fields = new Dictionary<string, string>
            {
                {"PCODE", strPostCode}
            };

            //Do not use for setting the any value it will update all the records
            // mc.SetMergeVar(strListId, "PCODE", strPostCode);


            //  var response = mailChimpApiService.Subscribe("test@domain.com", new List() { subscribeSources, couponsGained, interests }, fields, true);


            //

            

            EmailParameter results = mc.Subscribe(strListId, email, fields, "html", false, true);
        }

        public static void SendEmailThroughMandrill(EmailBody objEmailBody)
        {
            //https://gist.github.com/andyhuey/3444063
            //https://github.com/shawnmclean/Mandrill-dotnet

            MandrillApi obj = new MandrillApi(ConfigurationManagerHelper.AppSettings["MailChimpAPIKey"].ToString());            
            dynamic sendParams = new ExpandoObject();
            sendParams.To = "leodeveloper@hotmail.com";
            EmailMessage objEmailMessage = new EmailMessage();            

        }
    }
}
