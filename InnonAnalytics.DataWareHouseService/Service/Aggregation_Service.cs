using InnonAnalytics.Common.Enums;
using InnonAnalytics.Common.log;
using InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel;
using InnonAnalytics.DataWareHouseService.Model;
using InnonAnalytics.DataWareHouseService.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.DataWareHouseService.Service
{
    public class Aggregation_Service : Aggregate_Save, IAggregation_Service
    {

        //InnonAnalyticsWarehouseEntities _db_datawarehouse_context;
        /// <summary>
        /// this method calulate the aggregation (Sum, Min, Max, Cum)
        /// Group by Hour, Day, Month, Year
        /// Element_ID and Point_ID is same
        /// </summary>
        /// <param name="Element_ID"></param>
        public void Calculate_and_Save_Aggregation_WareHouse_By_ElementID(long Element_ID)
        {                        
            try
            {
                //We have four group by  aggregation Hour, Day, Week, Month, Year thats why we creat four task to run 
                Task[] taskArray = new Task[5];

                taskArray[0] = Task.Factory.StartNew(() =>
                {
                    Save_Hour_Aggregation(Element_ID);
                    Update_Hour_Aggregation(Element_ID);
                });

                taskArray[1] = Task.Factory.StartNew(() =>
                {
                    Save_Day_Aggregation(Element_ID);
                    Update_Day_Aggregation(Element_ID);
                });

                taskArray[2] = Task.Factory.StartNew(() =>
                {
                    //Week number is not implemented
                    Save_Week_Aggregation(Element_ID);
                });

                taskArray[3] = Task.Factory.StartNew(() =>
                {
                    Save_Month_Aggregation(Element_ID);
                    Update_Month_Aggregation(Element_ID);
                });

                taskArray[4] = Task.Factory.StartNew(() =>
                {
                    Save_Year_Aggregation(Element_ID);
                    Update_Year_Aggregation(Element_ID);
                });


                try
                {
                    // Wait for all the tasks to finish.
                    Task.WaitAll(taskArray);
                }
                catch (AggregateException e)
                {
                    for (int j = 0; j < e.InnerExceptions.Count; j++)
                    {
                        File_Log.SaveLog_ToFile(e.InnerExceptions[j], LoggingActions.Error, "Inner catch AggregateException wait all ");
                    }
                }
            }
            catch(Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, LoggingActions.Error, "Outer catch");
            }

          
        }
    }
}
