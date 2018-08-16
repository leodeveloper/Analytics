using InnonAnalytics.Common.Enums;
using log4net;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Common.log
{
    public class File_Log
    {
        /// <summary>
        /// This function will save log in to the text file.
        /// </summary>
        /// <param name="Message">What you want to log</param>
        /// <param name="ExtraInformation">Detail what you want to log</param>
        /// <param name="loggingType">Which type of logging (Error, Fatal, Warn, Info)</param>
        /// <returns></returns>
        public static void SaveLog_ToFile(Exception Message, LoggingActions loggingType, string ExtraInformation)
        {
            // http://geekswithblogs.net/MarkPearl/archive/2012/01/30/log4net-basics-with-a-console-application-c.aspx

            try
            {

                string Detail_Message = Message.InnerException != null ? "Inner Exception " + Message.InnerException : "";

                log4net.Config.BasicConfigurator.Configure();
                ILog log = LogManager.GetLogger(Message.GetType().Name);
                switch (loggingType)
                {
                    case LoggingActions.Error:
                        log.Error(Message.Message + " -- " + Detail_Message + " -- ExtraInformation " + ExtraInformation);
                        break;
                    case LoggingActions.Fatal:
                        log.Fatal(Message.Message + " -- " + Detail_Message + " -- ExtraInformation " + ExtraInformation);
                        break;
                    case LoggingActions.Warning:
                        log.Warn(Message.Message + " -- " + Detail_Message + " -- ExtraInformation " + ExtraInformation);
                        break;
                    case LoggingActions.Info:
                        log.Info(Message.Message + " -- " + Detail_Message + " -- ExtraInformation " + ExtraInformation);
                        break;
                    default:
                        log.Error("Default case option in the File_Log.cs mean the LoggingActions enum is invalid, " + Message.Message + " -- " + Detail_Message + " -- ExtraInformation " + ExtraInformation);
                        break;

                }
            }
            catch (Exception ex)
            {
                string Detail_Message = Message.InnerException != null ? Message.InnerException.Message : "";
                log4net.Config.BasicConfigurator.Configure();
                ILog log = LogManager.GetLogger(typeof(File_Log));
                log.Error(ex.Message + " -- " + ex.InnerException);
                log.Error(Message + " -- Detail " + Detail_Message + " -- ExtraInformation " + ExtraInformation);
            }

            
        }

    }
}
