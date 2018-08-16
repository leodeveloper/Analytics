using System;
using System.Collections.Generic;
using System.Configuration;
using System.Linq;
using System.Net.Mail;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Common.Email
{
    /// <summary>
    /// Creates and sends an email.
    /// </summary>
    public class Email
    {
        public MailMessage mail;

        public SmtpClient emailClient;

        /// <summary>
        /// List of email addresses for Carbon Copy.
        /// </summary>
        public IEnumerable<string> CC
        {
            set
            {
                while (this.mail.CC.Count != 0) { this.mail.CC.RemoveAt(0); }
                foreach (string emailaddress in value)
                {
                    this.mail.CC.Add(new MailAddress(emailaddress));
                }
            }
        }

        public IEnumerable<string> BCC
        {
            set
            {
                while (this.mail.Bcc.Count != 0) { this.mail.Bcc.RemoveAt(0); }
                foreach (string emailaddress in value)
                {
                    this.mail.Bcc.Add(new MailAddress(emailaddress));
                }
            }
        }

        public Email(string from, string senderDisplayName, string[] to, string subject, string content, IDictionary<string, string> images = null)
        {

            System.Net.ICredentialsByHost smtpCredentials = new System.Net.NetworkCredential();

            emailClient = new SmtpClient();
            emailClient.DeliveryMethod = SmtpDeliveryMethod.Network;
           // emailClient.UseDefaultCredentials = false;
            //emailClient.Credentials = smtpCredentials;

            this.mail = new MailMessage();
            mail.From = new MailAddress(from, senderDisplayName);
            mail.Sender = new MailAddress(from);
            mail.Subject = subject;
            //mail.Body = content;

            for (int i = 0; i < to.Length; i++)
            {
                if (!String.IsNullOrEmpty(to[i]))
                {
                    mail.To.Add(new MailAddress(to[i]));
                }
            }

            var resources = new List<LinkedResource>();
            if (images != null)
            {
                foreach (var imagePath in images)
                {
                    var resource = new LinkedResource(imagePath.Value);
                    resource.ContentId = Guid.NewGuid().ToString("N");

                    content = content.Replace(imagePath.Key, "cid:" + resource.ContentId);

                    resources.Add(resource);
                }
            }

            var view = AlternateView.CreateAlternateViewFromString(content, null, "text/html");
            foreach (var resource in resources)
            {
                view.LinkedResources.Add(resource);
            }

            mail.AlternateViews.Add(view);

            mail.IsBodyHtml = true;

        }

        public void Email1(string from, string senderDisplayName, string[] to, string subject, string content, IDictionary<string, string> images = null)
        {
            string smtpServer = ConfigurationManager.AppSettings["SmtpServer"];
            int smtpPort = 0;
            bool smtpSSL = false;
            smtpPort = int.Parse(ConfigurationManagerHelper.AppSettings["SmtpPort"].ToString());
            smtpSSL = bool.Parse(ConfigurationManagerHelper.AppSettings["SmtpSsl"].ToString());
            string smtpUser = ConfigurationManagerHelper.AppSettings["SmtpUser"].ToString();
            string smtpPassword = ConfigurationManagerHelper.AppSettings["SmtpPassword"].ToString();

            if (!string.IsNullOrEmpty(smtpServer) && !string.IsNullOrEmpty(smtpUser) && !string.IsNullOrEmpty(smtpPassword))
            {
                System.Net.ICredentialsByHost smtpCredentials = new System.Net.NetworkCredential(smtpUser, smtpPassword);

                emailClient = new SmtpClient(smtpServer, smtpPort);
                emailClient.EnableSsl = smtpSSL;
                emailClient.Credentials = smtpCredentials;

                this.mail = new MailMessage();
                mail.From = new MailAddress(from, senderDisplayName);
                mail.Sender = new MailAddress(from);
                mail.Subject = subject;
                //mail.Body = content;

                for (int i = 0; i < to.Length; i++)
                {
                    if (!String.IsNullOrEmpty(to[i]))
                    {
                        mail.To.Add(new MailAddress(to[i]));
                    }
                }

                var resources = new List<LinkedResource>();
                if (images != null)
                {
                    foreach (var imagePath in images)
                    {
                        var resource = new LinkedResource(imagePath.Value);
                        resource.ContentId = Guid.NewGuid().ToString("N");

                        content = content.Replace(imagePath.Key, "cid:" + resource.ContentId);

                        resources.Add(resource);
                    }
                }

                var view = AlternateView.CreateAlternateViewFromString(content, null, "text/html");
                foreach (var resource in resources)
                {
                    view.LinkedResources.Add(resource);
                }

                mail.AlternateViews.Add(view);

                mail.IsBodyHtml = true;
            }
            else
            {
                throw new ConfigurationErrorsException("SMTP settings not provided in config file (web.config)");
            }
        }

        public void Send(bool async = false)
        {
            try
            {
                if (async)
                {
                    this.emailClient.SendAsync(this.mail, null);
                }
                else
                {
                    this.emailClient.Send(this.mail);
                }
            }
            catch (SmtpException sex)
            {
                //Log exception
                throw sex;
            }
        }
    }

    public class EmailBody
    {
        public string SenderName { get; set; }
        public string Subject { get; set; }
        public string Content { get; set; }
        public IEnumerable<String> CC { get; set; }
        public IEnumerable<String> BCC { get; set; }
        public IEnumerable<String> To { get; set; }
    }
}
