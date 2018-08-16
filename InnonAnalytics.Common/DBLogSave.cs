using InnonAnalytics.Common.Enums;
using System;
using log4net;
using log4net.Config;
using System.Collections.Generic;
using System.Dynamic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Common
{

    

    public class DBLogSave
    {
        private static ILog logger;// = LogManager.GetLogger(typeof(CommunicationLogic).FullName);

        public static void DBLogging(string class_name)
        {
            logger = LogManager.GetLogger(typeof(DBLogSave).FullName);
        }

        //public static void logging(InnonAnalyticsEntities context, int UserID, string TableName, int RowID, string Description, string Message, LoggingActions LogLevel)
        //{
        //    try
        //    {
        //        bool IsDBlogging = bool.Parse(ConfigurationManagerHelper.AppSettings["IsDBlogging"].ToString());
        //        bool IsEmaillogging = bool.Parse(ConfigurationManagerHelper.AppSettings["IsEmaillogging"].ToString());

        //        if(IsDBlogging)
        //        {
        //            DBLog objdblog = new DBLog();
        //            objdblog.DateofEntry = System.DateTime.Now;
        //            objdblog.Description = Description;
        //            objdblog.LogLevel = LogLevel.ToString();
        //            objdblog.Message = Message;
        //            objdblog.RowID = RowID;
        //            objdblog.TableName = TableName;
        //            objdblog.UserID_FK = UserID;
        //            context.DBLogs.Add(objdblog);
        //            context.SaveChanges();            

        //        }

        //        if (IsEmaillogging)
        //        {

        //        }

        //    }
        //    catch(Exception ex)
        //    {
        //        throw new Exception(ex.Message, ex.InnerException);
        //    }
            
        //}
    }
}



//Gmail SMTP server address: smtp.gmail.com
//Gmail SMTP user name: support@innon.co.uk
//Gmail SMTP password: Andyefrumos1
//Gmail SMTP port (TLS): 587
//Gmail SMTP port (SSL): 465
//Gmail SMTP TLS/SSL required: yes













    //    context.Database.

                    //var affectedRows = context.Database.ExecuteSqlCommand("GetVariableData @ServerName={0},@UserName={1},@Password={2},@DataBaseName={3},@TableName={4}", "87.106.176.87", "sa", "Andyefrumos1", "Geoscart", "DA14HW_T26HPSECONDARYRETURNMIXEDTEMP");

                    //dynamic sendParams = new ExpandoObject();

                    //var b = context.Database.SqlQuery(sendParams, "GetVariableData @ServerName={0},@UserName={1},@Password={2},@DataBaseName={3},@TableName={4}", "87.106.176.87", "sa", "Andyefrumos1", "Geoscart", "DA14HW_T26HPSECONDARYRETURNMIXEDTEMP");

                    //var a = context.Database.SqlQuery(sendParams, "GetVariableData @ServerName,@UserName,@Password,@DataBaseName,@TableName", new System.Data.SqlClient.SqlParameter("@ServerName", "87.106.176.87"),
                    //      new System.Data.SqlClient.SqlParameter("@UserName", "sa"),
                    //      new System.Data.SqlClient.SqlParameter("@Password", "Andyefrumos1"),
                    //      new System.Data.SqlClient.SqlParameter("@DataBaseName", "Geoscart"),
                    //      new System.Data.SqlClient.SqlParameter("@TableName", "DA14HW_T26HPSECONDARYRETURNMIXEDTEMP"));

                    // exec GetVariableData '87.106.176.87', 'sa' , 'Andyefrumos1', 'Geoscart' , 'DA14HW_T26HPSECONDARYRETURNMIXEDTEMP' 

              //      var bookIdParameter = new System.Data.SqlClient.SqlParameter();
                  //  bookIdParameter.ParameterName = "@BookId";
                  ////  bookIdParameter.Direction = ParameterDirection.Output;
                  //  bookIdParameter.SqlDbType = System.Data.SqlDbType.Int;
                    //var vdata = context.Database.ExecuteSqlCommand("GetVariableData @ServerName, @UserName,@Password,@DataBaseName,@TableName",
                    //    new System.Data.SqlClient.SqlParameter("@ServerName", "'87.106.176.87"),
                    //    new System.Data.SqlClient.SqlParameter("@UserName", "sa"),
                    //    new System.Data.SqlClient.SqlParameter("@Password", "Andyefrumos1"),
                    //    new System.Data.SqlClient.SqlParameter("@DataBaseName", "Geoscart"),
                    //    new System.Data.SqlClient.SqlParameter("@TableName", "DA14HW_T26HPSECONDARYRETURNMIXEDTEMP"));