
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Diagnostics;
using System.Linq;
using System.ServiceProcess;
using System.Text;
using System.Threading.Tasks;

using InnonAnalytics.Service.Repository;
using InnonAnalytics.Service.Implementation;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Model.DTO;
using System.Threading;
using System.Configuration;
using System.IO;
using System.Collections.Concurrent;
using InnonAnalytics.DataWareHouseService.Service;




//http://www.c-sharpcorner.com/UploadFile/naresh.avari/develop-and-install-a-windows-service-in-C-Sharp/
//InstallUtil.exe /i <Path of Windows Service EXE file>
//InstallUtil.exe /u <Path of Windows Service EXE file>
namespace InnonAnalytics.DataMigrationWindowsService
{
    public partial class Service1 : ServiceBase
    {

        InnonAnalyticsEngineEntities _dbContext;
        ConnectorDTO _dto_connector;

        public Service1()
        {
            InitializeComponent();
            GetData();
          
        }

       

        public void GetData()
        {
            IElementRepository _ElementRepository;
            IInnonAnalyticsEngineEntities _dbcontext;

            _dbcontext = new InnonAnalyticsEngineEntities();
            _ElementRepository = new ElementRepository(_dbcontext);

            IList<ElementDTO> list_element_dto = _ElementRepository.Get_Element_By_Element_Tag_Type(Common.Enums.TagType.point, false);

          //  BlockingCollection<ElementDTO> entityQueue = new BlockingCollection<ElementDTO>();
            try
            {
                _dbContext = new InnonAnalyticsEngineEntities();
             //   for (int j = 0; j < list_element_dto.Count(); j++)
                for (int j = 0; j < 1; j++)
                {





                    IConnectorRepository _connector_rep = new ConnectorRepository(_dbContext);
                    _dto_connector = _connector_rep.GetExistingConnectionById(list_element_dto[j].ConnectionInfo.ConnectionID);

                    //Task[] taskArray = { Task.Factory.StartNew(() => GetRowsForEachTable(list_element_dto[j]))
                    //                       //,Task.Factory.StartNew(() => GetRowsForEachTable(list_element_dto[1]))
                    //                       //,Task.Factory.StartNew(() => GetRowsForEachTable(list_element_dto[2])) 
                    //                   };

                    Task[] taskArray = { Task.Factory.StartNew(() => 
                            
                            {
                                GetRowsForEachTable(list_element_dto[j]);


                              

                            }                            
                            
                            )
                                              
                                           };




                }                   
            }
            catch (Exception ex) 
            {
                this.EventLog.WriteEntry("Error GetData " + "- Error" + ex.Message + " - Inner exception " + ex.InnerException, EventLogEntryType.Error);            
            }

         
        }

        private async void GetRowsForEachTable(ElementDTO element)
        {
            try
            {


                InnonAnalyticsEngineEntities _dbContext2 = new InnonAnalyticsEngineEntities();
                this.EventLog.WriteEntry("Start For Table " + element.Source_Element_Name_History, EventLogEntryType.Information);
                IRawDataRepository _rawDataRepository = new RawDataRepository();
                //IList<RawDataDTO> rawdata = 
                Point_Measure_Fact_Service point_measure_fact_service;
                    await Task.Run(() => _rawDataRepository.GetRowData(element.Source_Element_Name_History, Convert.ToDateTime("2013-05-16 05:45:00"),Convert.ToDateTime("2013-05-16 05:45:00"), _dto_connector, _dbContext2))
                    .ContinueWith((x) => 
                    {
                        this.EventLog.WriteEntry("Get Rows for Table " + element.Source_Element_Name_History + " - " + x.Result.Count(), EventLogEntryType.Information);

                        point_measure_fact_service = new Point_Measure_Fact_Service();

                        try
                        {
                            point_measure_fact_service.Save_Point_Measure_Fact_Service(x.Result, element);
                        }
                        catch (Exception ex)
                        {
                            this.EventLog.WriteEntry("Error " + ex + " -----  " + element.ElementSourceName);
                        }

                       

                       

                        
                    
                    });
                //this.EventLog.WriteEntry("Get Rows for Table " + element.Source_Element_Name_History + " - " + rawdata.Count(), EventLogEntryType.Information);
            }
            catch (Exception ex)
            {
                this.EventLog.WriteEntry("Error while getting the GetRowsForEachTable with table " + element.Source_Element_Name_History + " Connection " + _dto_connector.DatabaseName + " - Error" + ex.Message + " - Inner exception " + ex.InnerException, EventLogEntryType.Error);
            }          
        }




        protected override void OnStart(string[] args)
        {
            this.WriteToFile("Simple Service started {0}");
            this.ScheduleService();
            GetData();
            
        }

        protected override void OnStop()
        {
            this.WriteToFile("Simple Service stopped {0}");
            this.Schedular.Dispose();
        }

        private Timer Schedular;

        public void ScheduleService()
        {
            try
            {
                Schedular = new Timer(new TimerCallback(SchedularCallback));
                string mode = ConfigurationManager.AppSettings["Mode"].ToUpper();
                this.WriteToFile("Simple Service Mode: " + mode + " {0}");

                //Set the Default Time.
                DateTime scheduledTime = DateTime.MinValue;

                if (mode == "DAILY")
                {
                    //Get the Scheduled Time from AppSettings.
                    scheduledTime = DateTime.Parse(ConfigurationManager.AppSettings["ScheduledTime"]);
                    if (DateTime.Now > scheduledTime)
                    {
                        //If Scheduled Time is passed set Schedule for the next day.
                        scheduledTime = scheduledTime.AddDays(1);
                    }
                }

                if (mode.ToUpper() == "INTERVAL")
                {
                    //Get the Interval in Minutes from AppSettings.
                    int intervalMinutes = Convert.ToInt32(ConfigurationManager.AppSettings["IntervalMinutes"]);

                    //Set the Scheduled Time by adding the Interval to Current Time.
                    scheduledTime = DateTime.Now.AddMinutes(intervalMinutes);
                    if (DateTime.Now > scheduledTime)
                    {
                        //If Scheduled Time is passed set Schedule for the next Interval.
                        scheduledTime = scheduledTime.AddMinutes(intervalMinutes);
                    }
                }

                

                TimeSpan timeSpan = scheduledTime.Subtract(DateTime.Now);
                string schedule = string.Format("{0} day(s) {1} hour(s) {2} minute(s) {3} seconds(s)", timeSpan.Days, timeSpan.Hours, timeSpan.Minutes, timeSpan.Seconds);

                this.WriteToFile("Simple Service scheduled to run after: " + schedule + " {0}");

                //Get the difference in Minutes between the Scheduled and Current Time.
                int dueTime = Convert.ToInt32(timeSpan.TotalMilliseconds);

                //Change the Timer's Due Time.
                Schedular.Change(dueTime, Timeout.Infinite);
            }
            catch (Exception ex)
            {
                WriteToFile("Simple Service Error on: {0} " + ex.Message + ex.StackTrace);

                //Stop the Windows Service.
                using (System.ServiceProcess.ServiceController serviceController = new System.ServiceProcess.ServiceController("SimpleService"))
                {
                    serviceController.Stop();
                }
            }
        }

        private void SchedularCallback(object e)
        {
            this.WriteToFile("Simple Service Log: {0}");
            this.ScheduleService();
            GetData();
        }

        private void WriteToFile(string text)
        {
            string path = "C:\\ServiceLog_DataMigration.txt";
            using (StreamWriter writer = new StreamWriter(path, true))
            {
                writer.WriteLine(string.Format(text, DateTime.Now.ToString("dd/MM/yyyy hh:mm:ss tt")));
                writer.Close();
            }
        }


    }
}
