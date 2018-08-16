using InnonAnalytics.Common;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.Common.log;
using InnonAnalytics.DataWareHouseService.Model;
using InnonAnalytics.DataWareHouseService.Service;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Implementation;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel;
using InnonAnalytics.DataWareHouseService.Repository;
using System.Data.Entity;

namespace InnonAnalytics.DataMigrationConsole
{
    class Program
    {

        static void Main(string[] args)
        {
            try
            {              
                Console.WriteLine("Initialization...... ");
             
                //Aggregate_Save obj = new Aggregate_Save();
                //obj.Update_Hour_Aggregation(3628);
                
               // Interpolation.Get_Previous_and_Next_Good_Value(DateTime.Parse("2015-09-01 00:30:00"), 3575);
              
                //data_staus is used for the interpoliation of data
                string[] data_status = ConfigurationManagerHelper.AppSettings["bad_data_status"].ToString().Split(',');              

                InnonAnalyticsEngineEntities _dbcontext = new InnonAnalyticsEngineEntities();

                IElementRepository _ElementRepository = new ElementRepository(_dbcontext);
                //Get All Elements from the tblElement where Elemet Type is point (point has data)
                IList<ElementDTO> list_element_dto = _ElementRepository.Get_Element_By_Element_Tag_Type(Common.Enums.TagType.point, false);
                //list_element_dto = list_element_dto.Where(e => e.ID == 2366).ToList();
                //GenerateMissingData(list_element_dto[0]);

                ITagRepository _TagRepository = new TagRepository(_dbcontext);

                //Get All non deleted tag type mapping
                IList<Tag_Type_Mapping_DTO> list_tag_type_dto = _TagRepository.Get_Tag_Type_Mapping(false);
                Console.WriteLine("Updating point dim ");
                IPoint_Dim_Service _Point_dim_service = new Point_Dim_Service();
                _Point_dim_service.Update_Point_Dim(list_element_dto, list_tag_type_dto);

                Console.WriteLine("Start Data Migration ");
                IDatawareHouseMigrationLogRepository _DatawareHouseMigrationLogRepository = new DatawareHouseMigrationLogRepository(_dbcontext);

            

                //Get all element data migration history from [tblDatawareHouseMigrationLog]
                IList<DatawareHouseMigrationLogDTO> list_datawaredousemigrationLog_dto = _DatawareHouseMigrationLogRepository.get_Data_Migration_Logs();

                //Creat an arry of tasks, Number of Point element found in tblElement table
                Task[] taskArray = new Task[list_element_dto.Count];


                DateTime starttime = DateTime.Now;
                Console.WriteLine("Start " + starttime);


                //Initialize Connector Repository for getting the data connection info of each table
                IConnectorRepository _connector_rep = _connector_rep = new ConnectorRepository(_dbcontext);
                ConnectorDTO _dto_connector = new ConnectorDTO();
                
                //running loop on each task in the task array ()
                for (int i = 0; i < taskArray.Length; i++)
                {
                    DateTime default_from_dt, default_to_dt = System.DateTime.Now; ;
                    taskArray[i] = Task.Factory.StartNew(() =>
                    {

                        try
                        {
                            //First Step get database or data connector information of each points
                            //The connection info is same as the previous we will not get the connector info again
                            if (_dto_connector.ConnectionID != list_element_dto[i].ConnectionInfo.ConnectionID)
                            {
                                _dto_connector = _connector_rep.GetExistingConnectionById(list_element_dto[i].ConnectionInfo.ConnectionID);
                            }
                            //Console.WriteLine("No." + i + " " + _dto_connector.ConnectionID + " -- " + _dto_connector.ConnectionName);

                            //Sec Step set from_date and to_date
                            //If the element is not runing first time than change the from datetime (get last run datetime), All log save in the tbldatawaredousemigrationLog 
                            if (list_datawaredousemigrationLog_dto.Any(element => element.Element_ID == list_element_dto[i].ID))
                            {
                                DateTime? _timestamp_to = list_datawaredousemigrationLog_dto.Where(element => element.Element_ID == list_element_dto[i].ID).OrderByDescending(t => t.Last_Run_Start).First().Timestamp_To;
                                
                                if (_timestamp_to.HasValue)
                                {
                                    default_from_dt = Convert.ToDateTime(_timestamp_to.Value.AddMilliseconds(2).ToString("yyyy-MM-dd,HH:mm:ss.fff"));
                                    //    GetRowsForEachTable(list_element_dto[j], _dto_connector, j);                                   
                                }
                                else
                                {
                                    default_from_dt = CheckLastRecordInsterted(list_element_dto[i].ID);
                                    //    GetRowsForEachTable(list_element_dto[j], _dto_connector, j);                                   
                                }
                            }
                            else
                            {
                                default_from_dt = CheckLastRecordInsterted(list_element_dto[i].ID);
                                //GetRowsForEachTable(list_element_dto[j], _dto_connector, j);                             
                            }

                            Console.WriteLine("No." + i + " " + list_element_dto[i].ID + " " + default_from_dt + " -- " + default_to_dt);
                            //End sec

                            //Third Get Raw Data;
                            IList<RawDataDTO> list_RawDataDTO = new List<RawDataDTO>();
                            list_RawDataDTO = GetRawData(list_element_dto[i], default_from_dt, default_to_dt, _dto_connector, _dbcontext);
                            //End Get Raw Data

                            Console.WriteLine("Total Records " + list_RawDataDTO.Count());
                            //Save DataMirgrationLog
                            tblDatawareHouseMigrationLog tbldatamigrationlog = SaveDataMigrationLog( list_element_dto[i], default_to_dt);
                            //End
                            if (list_RawDataDTO.Count > 0)
                            {
                                //Get Convert Raw data in to Point_Mesaure_Fact_DTO
                                IList<Point_Measure_Fact> point_measure_fact_list_dto = Convert_Raw_Data_To_Point_Measure_Fact_DTO(list_element_dto[i], list_RawDataDTO);
                                //End

                                //Saving in to the Datawarehouse table Point_Measure_Fact
                                Final_Insert_In_To_DatawareHouse_Table(point_measure_fact_list_dto);
                                //End                               

                                //Update DataMirgrationLog
                                if (point_measure_fact_list_dto.Count > 0)
                                {
                                    UpdateDataMigrationLog( tbldatamigrationlog, point_measure_fact_list_dto.Count(), point_measure_fact_list_dto.LastOrDefault().Timestamp_From);
                                }
                                //End
                            }

                            //Aggregation
                            //Task aggregationtask = GetAggregation(list_element_dto[i]);
                            //EndAggregation

                            Console.WriteLine("Missing Data " + list_element_dto[i].Source_Element_Name_History);

                            try
                            {
                                //Get Raw missing data if any thing accedently during the process than we need to get the missing data
                                IList<RawDataDTO> list_Mising_RawDataDTO = GetRawMissingData(list_element_dto[i], _dto_connector);
                                Console.WriteLine("Get Missing Data " + list_Mising_RawDataDTO.Count);
                                if (list_Mising_RawDataDTO.Count > 0)
                                {
                                    //Get Convert Raw data in to Point_Mesaure_Fact_DTO
                                    IList<Point_Measure_Fact> missing_point_measure_fact_list_dto = Convert_Raw_Data_To_Point_Measure_Fact_DTO(list_element_dto[i], list_Mising_RawDataDTO);
                                    //End

                                    //Saving in to the Datawarehouse table Point_Measure_Fact
                                    Final_Insert_In_To_DatawareHouse_Table(missing_point_measure_fact_list_dto);
                                    //End
                                }

                                //End End of Raw missing data saving
                            }
                            catch (Exception ex)
                            {
                                Console.WriteLine("Error in Missing Data " + ex.Message);
                            }
                            Console.WriteLine("Generate Missing Data ");
                            try
                            {
                                IList<RawDataDTO> list_Genrated_Mising_RawDataDTO = GenerateMissingData(list_element_dto[i]);
                                //Get Convert Raw data in to Point_Mesaure_Fact_DTO
                                IList<Point_Measure_Fact> genrated_missing_point_measure_fact_list_dto = Convert_Raw_Data_To_Point_Measure_Fact_DTO(list_element_dto[i], list_Genrated_Mising_RawDataDTO);
                                //End

                                //Saving in to the Datawarehouse table Point_Measure_Fact
                                Final_Insert_In_To_DatawareHouse_Table(genrated_missing_point_measure_fact_list_dto);
                                //End
                            }
                            catch (Exception ex)
                            {
                                Helper.WriteToFile(ex.Message);
                            }



                            try
                            {
                                //Console.WriteLine("Deleting Data " + list_element_dto[i].Source_Element_Name_History);
                                //Deleting Any Duplication
                                Delete_Duplicate(list_element_dto[i]);
                                //End
                            }
                            catch (Exception ex)
                            {
                                Console.WriteLine("Error in Delete duplicate Data " + ex.Message);
                            }                           

                            try
                            {
                                //Check interpolation
                                Console.WriteLine("Interpolation");
                                bool Is_Read_For_Aggregation = Interpolation.InterPolateData(default_from_dt, default_to_dt, list_element_dto[i]);
                                Console.WriteLine("End Interpolation");
                                //End Interpolation
                                if (Is_Read_For_Aggregation)
                                {
                                    Console.WriteLine("Aggregate Data Migration ");
                                    IAggregation_Service agr_service = new Aggregation_Service();
                                    agr_service.Calculate_and_Save_Aggregation_WareHouse_By_ElementID(list_element_dto[i].ID);
                                    Console.WriteLine("End Aggregate Data Migration ");
                                }
                                
                            }
                            catch(Exception ex)
                            {
                                Console.WriteLine("Error in Aggregation Data " + ex.Message);
                            }

                            // aggregationtask.Wait();


                        }
                        catch (Exception ex)
                        {
                            Console.WriteLine("Exception " + ex.Message);
                        }

                    });
                    taskArray[i].Wait();
                }
                Console.WriteLine("End Min " + DateTime.Now.Subtract(starttime).TotalMinutes);
                Console.WriteLine("End Sec " + DateTime.Now.Subtract(starttime).TotalSeconds);
                Helper.WriteToFile("Finished Start Time " + starttime + ", End Time " + System.DateTime.Now + " -- " + " Total Min " + DateTime.Now.Subtract(starttime).TotalMinutes);
            }
            catch (Exception ex)
            {
                Console.WriteLine("Exception in mian " + ex.Message);
            }

           //Console.ReadLine();
        }



        public static void Get_from_and_to_Date()
        {

        }


        /// <summary>
        /// This function when the service accedentally fail or closed than we need the follwing function to get the last record datetime value to start it again
        /// </summary>
        /// <param name="element_id"></param>
        private static DateTime CheckLastRecordInsterted(long element_id)
        {
            InnonAnalyticsWarehouseEntities ctx = new InnonAnalyticsWarehouseEntities();
            DateTime from_dt = new DateTime();
            if (ctx.Point_Measure_Fact.Any(element => element.Point_ID == element_id))
            {
                from_dt = Convert.ToDateTime(ctx.Point_Measure_Fact.Where(element => element.Point_ID == element_id).OrderByDescending(t => t.Timestamp_From).First().Timestamp_From.AddMilliseconds(2).ToString("yyyy-MM-dd,HH:mm:ss.fff"));
            }
            else
            {
                from_dt = Convert.ToDateTime(System.DateTime.Now.AddYears(-1).ToShortDateString() + " 00:00:00");
            }
            return from_dt;
        }

        private static IList<RawDataDTO> GetRawData(ElementDTO element, DateTime fromdate, DateTime ToDate, ConnectorDTO _dto_connector, InnonAnalyticsEngineEntities _dbcontext)
        {

            try
            {
                IRawDataRepository _rawDataRepository = new RawDataRepository();
                return _rawDataRepository.GetRowData(element.Source_Element_Name_History, Convert.ToDateTime(fromdate.ToString("yyyy-MM-dd HH:mm:ss.fff")), Convert.ToDateTime(ToDate.ToString("yyyy-MM-dd HH:mm:ss.fff")), _dto_connector, _dbcontext);

            }
            catch(Exception ex)
            {
                throw ex;
            }           
        }

        private static IList<RawDataDTO> GetRawMissingData(ElementDTO element,  ConnectorDTO _dto_connector)
        {
            try
            {
                //Checking the missing data
                InnonAnalyticsWarehouseEntities ctx = new InnonAnalyticsWarehouseEntities();
                ctx.Database.CommandTimeout = 300;
                IList<RawDataDTO>  rawdata = ctx.Database.SqlQuery<RawDataDTO>("EXEC GetRawMissingData '" + _dto_connector.ServerOrIP + "', '" +
               _dto_connector.ServerUserName + "' , '" + _dto_connector.ServerPassword + "', '" + _dto_connector.DatabaseName + "' , '" + element.Source_Element_Name_History + "' ,'" + Convert.ToDateTime(System.DateTime.Now.AddYears(-1).ToShortDateString() + " 00:00:00").ToString("yyyy-MM-dd HH:mm:ss.fff") + "','" + System.DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss.fff") + "'," + element.ID).ToList();
                ctx.Database.Connection.Close();
                return rawdata;              
            }
            catch (Exception ex)
            {
                throw ex;
            }
        }

        /// <summary>
        /// This function is used for generating the missing data when the data is not in the Datasource, for prevent the spikes
        /// This function only when the data 15 mins difference
        /// </summary>
        private static IList<RawDataDTO> GenerateMissingData(ElementDTO element)
        {
            IList<RawDataDTO> rawdata = new List<RawDataDTO>();

            InnonAnalyticsWarehouseEntities ctx = new InnonAnalyticsWarehouseEntities();
            ctx.Database.CommandTimeout = 300;
            double days = double.Parse(ConfigurationManagerHelper.AppSettings["missing_data_days"].ToString());
            DateTime dt = DateTime.Now.AddDays(-days);
            List<Point_Measure_Fact> point_measure_fact = ctx.Point_Measure_Fact.Where(point_measure_Fact => 
            point_measure_Fact.Point_ID == element.ID && point_measure_Fact.Timestamp_From >= dt).OrderBy(order=>order.Timestamp_From).ToList();
            TimeSpan ts;
            DateTime Previous_DateTime;
            DateTime Current_DateTime;
            int External_ID;
            double minute_difference = 0;
            for (int i = 0; i < point_measure_fact.Count; i++)
            {
                if (i > 0)
                {                  

                    ts = point_measure_fact[i].Timestamp_From.Subtract(point_measure_fact[i-1].Timestamp_From);
                    minute_difference = Math.Truncate(ts.TotalMinutes);
                    if (minute_difference > 15)
                    {
                        //Get the previous record from the point_measure_fact table and add "minus sign" with ID to make it unique.
                        External_ID = -point_measure_fact[i - 1].ID; //We need unique External ID (In normal case External_ID is the ID from the Datasource Table ID, But here we are generating the missing data we need Unique External ID).
                        Previous_DateTime = new DateTime(point_measure_fact[i - 1].Timestamp_From.Year, point_measure_fact[i - 1].Timestamp_From.Month, point_measure_fact[i - 1].Timestamp_From.Day, point_measure_fact[i - 1].Timestamp_From.Hour, point_measure_fact[i - 1].Timestamp_From.Minute, 0);
                        Current_DateTime = new DateTime(point_measure_fact[i].Timestamp_From.Year, point_measure_fact[i].Timestamp_From.Month, point_measure_fact[i].Timestamp_From.Day, point_measure_fact[i].Timestamp_From.Hour, point_measure_fact[i].Timestamp_From.Minute, 0);

                        for (DateTime dtfrom = Previous_DateTime.AddMinutes(15); dtfrom < Current_DateTime; dtfrom = dtfrom.AddMinutes(15))
                        {
                            if (element.Value_Type == DataValueType.Totalised)
                                rawdata.Add(new RawDataDTO { ID = External_ID--, STATUS_TAG = "{fault,down,stale}", TIMESTAMP = dtfrom, VAL = 0, VALUE = point_measure_fact[i - 1].Raw_Value });
                            else
                                rawdata.Add(new RawDataDTO { ID = External_ID--, STATUS_TAG = "{fault,down,stale}", TIMESTAMP = dtfrom, VAL = point_measure_fact[i - 1].Raw_Value, VALUE = point_measure_fact[i - 1].Raw_Value });
                        }
                    }                    
                }
            }

            return rawdata;
        }

        private static tblDatawareHouseMigrationLog SaveDataMigrationLog( ElementDTO element, DateTime default_from_dt)
        {
            InnonAnalyticsEngineEntities _dbcontext2 = new InnonAnalyticsEngineEntities();
            tblDatawareHouseMigrationLog tblDataMigration = _dbcontext2.tblDatawareHouseMigrationLogs.Add(
                                                     new tblDatawareHouseMigrationLog
                                                     {
                                                         Element_ID = element.ID,
                                                         Last_Run_Start = System.DateTime.Now,
                                                         Total_Record_Fetch = 0,
                                                         Timestamp_From = default_from_dt,

                                                     });
            _dbcontext2.SaveChanges();
            return tblDataMigration;
        }

        private static tblDatawareHouseMigrationLog UpdateDataMigrationLog( tblDatawareHouseMigrationLog tblDataMigration, int totalrecords, DateTime last_record_datetime)
        {
            try
            {
                IInnonAnalyticsEngineEntities _dbcontext = new InnonAnalyticsEngineEntities(); 
                tblDatawareHouseMigrationLog tbl_DataMigration = _dbcontext.tblDatawareHouseMigrationLogs.Find(tblDataMigration.ID);

                tbl_DataMigration.Last_Run_End = System.DateTime.Now;
                tbl_DataMigration.Total_Record_Fetch = totalrecords;
                tbl_DataMigration.Timestamp_To = last_record_datetime;
                _dbcontext.Entry(tbl_DataMigration).State = EntityState.Modified;
                _dbcontext.SaveChanges();
            }
            catch(Exception ex)
            {
                Helper.WriteToFile("Error in update UpdateDataMigrationLog: " + tblDataMigration.ID + ex + "---" + ex.InnerException);
            }
           
            return tblDataMigration;
        }

        private static IList<Point_Measure_Fact> Convert_Raw_Data_To_Point_Measure_Fact_DTO(ElementDTO element, IList<RawDataDTO> rawdata)
        {
            IList<Point_Measure_Fact> point_measure_fact_list_dto = new List<Point_Measure_Fact>();
            try
            {
                Point_Measure_Fact_Service point_measure_fact_service;
                // x is last continue result (GetRowData returns the IList<RawData>)
                //Save Final insert in to the database InnonAnalyticsWarehouse table Point_Mesaure_Fact
                Console.WriteLine("Get Rows for Table " + element.Source_Element_Name_History + " - " + rawdata.Count());
                point_measure_fact_service = new Point_Measure_Fact_Service();
                //point_measure_fact_service.List_Point_Measure_Fact_Service(rawdata, element);

                point_measure_fact_list_dto = point_measure_fact_service.List_Point_Measure_Fact_Service(rawdata, element);

                //Iterpolation method check the spikes or wrong value
                //  point_measure_fact.Value = Interpolation.InterPolateValue(list_raw_data_dto[j], element, point_measure_fact);

               // FinalInsert(point_measure_fact_list_dto);

            }
            catch (Exception ex)
            {
                throw ex;
            }

            return point_measure_fact_list_dto;
        }

        /// <summary>
        /// Datawarehouse finalinsert into the Point_Mesaure_Fact
        /// </summary>
        /// <param name="point_measure_facts"></param>
        private static void Final_Insert_In_To_DatawareHouse_Table(IList<Point_Measure_Fact> point_measure_facts)
        {
            try
            {
                BlockingCollection<Point_Measure_Fact> entityQueue = new BlockingCollection<Point_Measure_Fact>();
                List<Task> writers = new List<Task>();
                if (point_measure_facts.Count > 0)
                {

                    Action writerAction = new Action(() =>
                    {
                        InnonAnalyticsWarehouseEntities ctx = new InnonAnalyticsWarehouseEntities();

                        ctx.Database.CommandTimeout = 300;
                        int totalAdded = 0;
                        try
                        {
                            while (true)
                            {
                                Point_Measure_Fact my = entityQueue.Take();
                                my.Last_Update_Time = System.DateTime.Now;
                                ctx.Point_Measure_Fact.Add(my);
                                totalAdded++;
                                if (totalAdded > 500)
                                {

                                    //Console.WriteLine("Saving changes, TID: " + Thread.CurrentThread.ManagedThreadId);
                                    try
                                    {
                                        ctx.SaveChanges();
                                    }
                                    catch (Exception ex)
                                    {

                                        Helper.WriteToFile("Error in saving: " + ex.InnerException.Message);
                                    }

                                    ctx.Database.Connection.Close();
                                    ctx = new InnonAnalyticsWarehouseEntities();
                                }
                            }
                        }
                        catch (InvalidOperationException inv)
                        {
                            //WriteToFile("Saving final changes --- " + inv.Message);
                            //Console.WriteLine("Saving final changes, TID: " + Thread.CurrentThread.ManagedThreadId);
                            //  Console.WriteLine("Error Saving final " + inv.Message);
                            ctx.SaveChanges(); // Save any pending changes
                            ctx.Database.Connection.Close();
                            totalAdded = 0;
                        }
                    });


                    for (int i = 0; i < 1000; i++)
                    {
                        writers.Add(Task.Factory.StartNew(writerAction));
                    }

                    foreach (Point_Measure_Fact point_measure_fact in point_measure_facts)
                    {
                        entityQueue.Add(point_measure_fact);
                    }
                }

                entityQueue.CompleteAdding();
                Console.WriteLine("Done generating data.");

                Task.WaitAll(writers.ToArray());
                Console.WriteLine("Finished");

            }
            catch (Exception ex)
            {
                string innerexp = (ex.InnerException != null) ? ex.InnerException.Message : "";
                Helper.WriteToFile("Error in the FinalInsert " + ex.Message + "--" + innerexp);
                
            }
        }

        private static void Delete_Duplicate(ElementDTO element)
        {
            try
            {
                Console.WriteLine("Delete duplicate data " + element.ID + "--" + element.Source_Element_Name_History);
                InnonAnalyticsWarehouseEntities ctx_delete_duplicate = new InnonAnalyticsWarehouseEntities();
                ctx_delete_duplicate.Database.CommandTimeout = 300;
                ctx_delete_duplicate.Database.ExecuteSqlCommand("EXEC Delete_Duplicate_Data " + element.ID);
                ctx_delete_duplicate.Database.Connection.Close();
                Console.WriteLine("Finished delete duplicate data ");
            }
            catch (Exception ex)
            {
                throw ex;
            }
        }



        //private static async Task GetAggregation(ElementDTO elementDTO)
        //{
        //    Console.WriteLine("Aggration Start");
        //    await Task.Run(() =>
        //    {
        //        Aggregation aggregation = new Aggregation();
        //        DatawarehouseConnectionContext ctx = new DatawarehouseConnectionContext();
        //        IList<Point_Measure_Fact> list = ctx.Point_Measure_Fact_Entities.Where(z => z.Point_ID == elementDTO.ID).OrderBy(t => t.Timestamp_From).ToList();
        //        aggregation.CalculateAggregation(Aggregation.AggerationType.Hour, list);
        //    });
        //    AggregationCompleted("");
        //}

        //private static void AggregationCompleted(string file)
        //{
        //    Console.WriteLine("Aggration finished");
        //    //this method will be called whenever a file is processed
        //}
    }
}
