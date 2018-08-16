using InnonAnalytics.DataWareHouseService.Model;
using InnonAnalytics.DataWareHouseService.Service;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Implementation;
using InnonAnalytics.Service.Repository;
using InnonAnalytics.Common;
using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.ServiceProcess;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace InnonAnalytics.DataMigrationConsole
{
    class Program_old
    {
       static  InnonAnalyticsEngineEntities _dbcontext;
    //   static ConnectorDTO _dto_connector;

       static DateTime default_from_dt, default_to_dt;

       static void Main_old(string[] args)
       {
           default_from_dt = new DateTime();
           default_to_dt = new DateTime();
           try
           {
               //DatawarehouseConnectionContext ctx = new DatawarehouseConnectionContext();
               //IList<Point_Measure_Fact> list = ctx.Point_Measure_Fact_Entities.Where(z => z.Point_ID == 1193).OrderBy(t => t.Timestamp_From).ToList();

               //Aggregation obj = new Aggregation();
               //obj.CalculateAggregation(Aggregation.AggerationType.Hour, list);

               Task task = new Task(GetData);
               task.Start();
               task.Wait();
              
               //Do not remove the following line
               Console.ReadKey();
           }
           catch (Exception ex)
           {
               string innerexp = (ex.InnerException != null) ? ex.InnerException.Message : "";
               Helper.WriteToFile("Error in the Main " + ex.Message + "--" + innerexp);
               Console.Write("Done with errors Press any key");
               Console.ReadKey();
           }
       }


        public async static void GetData()
        {    

            IElementRepository _ElementRepository;
            IDatawareHouseMigrationLogRepository _DatawareHouseMigrationLogRepository;

            _dbcontext = new InnonAnalyticsEngineEntities();
            _ElementRepository = new ElementRepository(_dbcontext);
            _DatawareHouseMigrationLogRepository = new DatawareHouseMigrationLogRepository(_dbcontext);

            IList<ElementDTO> list_element_dto = _ElementRepository.Get_Element_By_Element_Tag_Type(Common.Enums.TagType.point, false);

            //Get all element data migration history from [tblDatawareHouseMigrationLog]
            IList<DatawareHouseMigrationLogDTO> list_datawaredousemigrationLog_dto = _DatawareHouseMigrationLogRepository.get_Data_Migration_Logs();


            
            Console.WriteLine("Total Table " + list_element_dto.Count(), EventLogEntryType.Information);
            try
            {
                _dbcontext = new InnonAnalyticsEngineEntities();
                IConnectorRepository _connector_rep;
                ConnectorDTO _dto_connector;
                for (int j = 0; j < list_element_dto.Count(); j++)               
                {

                    default_to_dt = System.DateTime.Now;
                    //One year back datetime
                    //default_from_dt = Convert.ToDateTime(default_to_dt.AddYears(-1).ToShortDateString() + " 00:00:00");

                    Console.WriteLine(j + "Initialize " + list_element_dto[j].Element_Name);
                    _connector_rep = new ConnectorRepository(_dbcontext);
                    _dto_connector = _connector_rep.GetExistingConnectionById(list_element_dto[j].ConnectionInfo.ConnectionID);

                    


                    //If the element previously run than change the from datetime 
                    if (list_datawaredousemigrationLog_dto.Any(element => element.Element_ID == list_element_dto[j].ID))
                    {
                        DateTime? _timestamp_to=list_datawaredousemigrationLog_dto.Where(element => element.Element_ID == list_element_dto[j].ID).OrderByDescending(t => t.Last_Run_Start).First().Timestamp_To;

                        if (_timestamp_to.HasValue)
                        {
                            default_from_dt = Convert.ToDateTime(_timestamp_to.Value.AddMilliseconds(2).ToString("yyyy-MM-dd,HH:mm:ss.fff"));
                            await Task.Factory.StartNew(() => { GetRowsForEachTable(list_element_dto[j], _dto_connector, j); });
                        }
                        else
                        {
                            await Task.Run(() => { CheckLastRecordInsterted(list_element_dto[j].ID); })
                           .ContinueWith((z) =>
                           {
                               GetRowsForEachTable(list_element_dto[j], _dto_connector, j);
                           });
                        }

                        //default_from_dt = Convert.ToDateTime(list_datawaredousemigrationLog_dto.Where(element => element.Element_ID == list_element_dto[j].ID).OrderByDescending(t => t.Last_Run_Start).First().Timestamp_To.AddMilliseconds(2).ToString("yyyy-MM-dd,HH:mm:ss.fff"));
                        
                    }
                    else
                    {

                       // await Task.Factory.StartNew(() => { GetRowsForEachTable(list_element_dto[j]); });

                        await Task.Run(() => { CheckLastRecordInsterted(list_element_dto[j].ID); })
                            .ContinueWith((z) => 
                            {
                                GetRowsForEachTable(list_element_dto[j], _dto_connector, j); 
                            });
                    }


                  //  Task.Run(() => { Delete_Duplicate(list_element_dto[j]); });

                    //Task[] taskArray = { Task.Factory.StartNew(() => { Delete_Duplicate(list_element_dto[j]); }) };
                    //Task.WaitAll(taskArray);
                }
            }
            catch (Exception ex)
            {
                Helper.WriteToFile("Error GetData " + "- Error" + ex.Message + " - Inner exception " + ex.InnerException);
            }


        }

        /// <summary>
        /// This function when the service accedentally fail or closed than we need the foollwing function to get the last record
        /// </summary>
        /// <param name="element_id"></param>
        private static void CheckLastRecordInsterted(long element_id)
        {
            DatawarehouseConnectionContext ctx = new DatawarehouseConnectionContext();

            if (ctx.Point_Measure_Fact_Entities.Any(element => element.Point_ID == element_id))
            {
                default_from_dt = Convert.ToDateTime(ctx.Point_Measure_Fact_Entities.Where(element => element.Point_ID == element_id).OrderByDescending(t => t.Timestamp_From).First().Timestamp_From.AddMilliseconds(2).ToString("yyyy-MM-dd,HH:mm:ss.fff"));  
            }
            else
            {
                default_from_dt = Convert.ToDateTime(default_to_dt.AddYears(-1).ToShortDateString() + " 00:00:00");
            }
        }


        private async static void GetRowsForEachTable(ElementDTO element,  ConnectorDTO _dto_connector, int index)
        {
            try
            {
                string information_of_element = element.ID + "--" + element.Source_Element_Name_History + " Connection " + _dto_connector.DatabaseName;
                InnonAnalyticsEngineEntities _dbContext2 = new InnonAnalyticsEngineEntities();
                
                _dbContext2.Database.CommandTimeout = 300;
                
                //Console.WriteLine("From Date " + default_from_dt);
                //Console.WriteLine("To Date " + default_to_dt);
                IRawDataRepository _rawDataRepository = new RawDataRepository();

                //   Console.ReadLine();

                //IList<RawDataDTO> rawdata = 
                Point_Measure_Fact_Service point_measure_fact_service;
                tblDatawareHouseMigrationLog data_migration_log = new tblDatawareHouseMigrationLog();
                await Task.Run(() =>
                {
                    IList<RawDataDTO> list_RawDataDTO = new List<RawDataDTO>();
                    try
                    {
                        Console.WriteLine("Start For Table " + element.ID + "--" + element.Source_Element_Name_History + " -- From dt " + default_from_dt + " -- To date " + default_to_dt);
                        list_RawDataDTO = _rawDataRepository.GetRowData(element.Source_Element_Name_History, Convert.ToDateTime(default_from_dt.ToString("yyyy-MM-dd HH:mm:ss.fff")), Convert.ToDateTime(default_to_dt.ToString("yyyy-MM-dd HH:mm:ss.fff")), _dto_connector, _dbContext2);

                    }
                    catch (Exception ex)
                    {
                        Helper.WriteToFile(" [ " + System.DateTime.Now + " ] First Step fetching the bulk data from error " + ex.Message + " -- " + information_of_element);
                    }

                    return list_RawDataDTO;


                })
                .ContinueWith((k) =>
                    {
                        if (k.Result.Count > 0)
                        {

                            try
                            {
                                data_migration_log = _dbContext2.tblDatawareHouseMigrationLogs.Add(
                                                     new tblDatawareHouseMigrationLog
                                                     {
                                                         Element_ID = element.ID,
                                                         Last_Run_Start = System.DateTime.Now,
                                                         Total_Record_Fetch = 0,
                                                         Timestamp_From = default_from_dt,

                                                     });
                                _dbContext2.SaveChangesAsync();
                            }
                            catch (Exception ex)
                            {
                                Helper.WriteToFile(" [ " + System.DateTime.Now + " ] Sec Step saving in to the tblDatawareHouseMigrationLogs data from error " + ex.Message + " -- " + information_of_element);
                            }


                        }

                        return k.Result;

                    })
                .ContinueWith((x) =>
                {

                    IList<Point_Measure_Fact> point_measure_fact_list_dto = new List<Point_Measure_Fact>();
                    try
                    {
                        // x is last continue result (GetRowData returns the IList<RawData>)
                        //Save Final insert in to the database InnonAnalyticsWarehouse table Point_Mesaure_Fact
                        Console.WriteLine("Get Rows for Table " + element.Source_Element_Name_History + " - " + x.Result.Count(), EventLogEntryType.Information);
                        point_measure_fact_service = new Point_Measure_Fact_Service();
                        point_measure_fact_service.List_Point_Measure_Fact_Service(x.Result, element);

                        point_measure_fact_list_dto = point_measure_fact_service.List_Point_Measure_Fact_Service(x.Result, element);

                        FinalInsert(point_measure_fact_list_dto);

                    }
                    catch (Exception ex)
                    {
                        Helper.WriteToFile(" [ " + System.DateTime.Now + " ] Third Step final saving the data in to the point measure facts from error " + ex.Message + " -- " + information_of_element);
                    }

                    return point_measure_fact_list_dto;

                })
                .ContinueWith((y) =>
                {
                    // y is last continue result
                    //update DatawareHouseMigrationLog table for the next run
                    if (y.Result.Count > 0)
                    {

                        data_migration_log.Last_Run_End = System.DateTime.Now;
                        data_migration_log.Total_Record_Fetch = y.Result.Count;
                        data_migration_log.Timestamp_To = Convert.ToDateTime(y.Result.LastOrDefault().Timestamp_To);
                        _dbContext2.SaveChangesAsync();

                    }
                    return y.Result;
                }).ContinueWith((z) =>
                {

                    IList<RawDataDTO> rawdata = new List<RawDataDTO>();

                    try
                    {
                        //Checking the missing data
                        DatawarehouseConnectionContext ctx = new DatawarehouseConnectionContext();
                        ctx.Database.CommandTimeout = 300;
                        rawdata = ctx.Database.SqlQuery<RawDataDTO>("EXEC GetRawMissingData '" + _dto_connector.ServerOrIP + "', '" +
                       _dto_connector.ServerUserName + "' , '" + _dto_connector.ServerPassword + "', '" + _dto_connector.DatabaseName + "' , '" + element.Source_Element_Name_History + "' ,'" + Convert.ToDateTime(default_to_dt.AddYears(-1).ToShortDateString() + " 00:00:00").ToString("yyyy-MM-dd HH:mm:ss.fff") + "','" + System.DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss.fff") + "'," + element.ID).ToList();
                        ctx.Database.Connection.Close();
                    }
                    catch (Exception ex)
                    {
                        Helper.WriteToFile(" [ " + System.DateTime.Now + " ] Fourth getting missing data from error " + ex.Message + " -- " + information_of_element);
                    }
                    return rawdata;

                }).ContinueWith((t) =>
                {
                    //Saving the missing data

                    IList<RawDataDTO> missingrawdata = new List<RawDataDTO>();
                    missingrawdata = t.Result;
                    try
                    {
                        Console.WriteLine("Missing " + element.Source_Element_Name_History + "- Total:-" + missingrawdata.Count());
                        point_measure_fact_service = new Point_Measure_Fact_Service();
                        point_measure_fact_service.List_Point_Measure_Fact_Service(missingrawdata, element);
                        IList<Point_Measure_Fact> point_measure_fact_list_dto = point_measure_fact_service.List_Point_Measure_Fact_Service(missingrawdata, element);

                        FinalInsert(point_measure_fact_list_dto);
                    }
                    catch (Exception ex)
                    {
                        Helper.WriteToFile(" [ " + System.DateTime.Now + " ] Fifth saving missing data from error " + ex.Message + " -- " + information_of_element);
                    }


                }).ContinueWith((r) =>
                {


                    Task.Factory.StartNew((x) =>
                    {
                        Helper.WriteToFile(" [ " + System.DateTime.Now + " ]  Deleting for " + +element.ID + "--" + element.Source_Element_Name_History);
                        Console.WriteLine(index + " delete duplicate data " + element.ID + "--" + element.Source_Element_Name_History);
                        DatawarehouseConnectionContext ctx_delete_duplicate = new DatawarehouseConnectionContext();
                        ctx_delete_duplicate.Database.CommandTimeout = 300;
                        ctx_delete_duplicate.Database.ExecuteSqlCommand("EXEC Delete_Duplicate_Data " + element.ID);
                        ctx_delete_duplicate.Database.Connection.Close();
                        Console.WriteLine(index + " Finished duplicate data delete ");


                    }, TaskCreationOptions.DenyChildAttach);


                });
                //this.EventLog.WriteEntry("Get Rows for Table " + element.Source_Element_Name_History + " - " + rawdata.Count(), EventLogEntryType.Information);
            }
            catch (Exception ex)
            {

                string innerexp = (ex.InnerException != null) ? ex.InnerException.Message: "";
                Helper.WriteToFile("Error while getting the GetRowsForEachTable with table " + element.ID + "--" + element.Source_Element_Name_History + " Connection " + _dto_connector.DatabaseName + " - Error" + ex.Message + " - Inner exception " + innerexp);
            }
        }
        /// <summary>
        /// Datawarehouse finalinsert into the Point_Mesaure_Fact
        /// </summary>
        /// <param name="point_measure_facts"></param>
        private static void FinalInsert(IList<Point_Measure_Fact> point_measure_facts)
        {
            try
            {
                BlockingCollection<Point_Measure_Fact> entityQueue = new BlockingCollection<Point_Measure_Fact>();
                List<Task> writers = new List<Task>();
                if (point_measure_facts.Count > 0)
                {
                    
                    Action writerAction = new Action(() =>
                    {
                        DatawarehouseConnectionContext ctx = new DatawarehouseConnectionContext();
                       
                        ctx.Database.CommandTimeout = 300;
                        int totalAdded = 0;
                        try
                        {
                            while (true)
                            {
                                Point_Measure_Fact my = entityQueue.Take();
                                my.Last_Update_Time = System.DateTime.Now;
                                ctx.Point_Measure_Fact_Entities.Add(my);
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
                                    ctx = new DatawarehouseConnectionContext();
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
                //Console.WriteLine("Done generating data.");

                Task.WaitAll(writers.ToArray());
                Console.WriteLine("Finished");

            }
            catch (Exception ex)
            {
                string innerexp = (ex.InnerException != null) ? ex.InnerException.Message : "";
                Helper.WriteToFile("Error in the FinalInsert " + ex.Message + "--" + innerexp);
                Console.Write("Done with errors Press any key");
                Console.ReadKey();
            }
        }



        private static void Delete_Duplicate(ElementDTO element)
        {
            try
            {
                Console.WriteLine("delete duplicate data " + element.ID + "--" + element.Source_Element_Name_History);
                DatawarehouseConnectionContext ctx_delete_duplicate = new DatawarehouseConnectionContext();
                ctx_delete_duplicate.Database.CommandTimeout = 300;
                ctx_delete_duplicate.Database.ExecuteSqlCommand("EXEC Delete_Duplicate_Data " + element.ID);
                ctx_delete_duplicate.Database.Connection.Close();
            }
            catch (Exception ex)
            {
                Helper.WriteToFile(" [ " + System.DateTime.Now + " ] remove duplicate data from error " + ex.Message + " -- " + element.ID + "--" + element.Source_Element_Name_History);
            }
        }
      
               

        
    }
}
