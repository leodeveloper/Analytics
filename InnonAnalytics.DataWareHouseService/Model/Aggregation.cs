using InnonAnalytics.Common;
using InnonAnalytics.Common.log;
using InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.DataWareHouseService.Model
{


    //public interface IAggregation
    //{
    //    Point_Agg_Hour Point_Agg_Hour { get; set; }
    //    Point_Agg_Day Point_Agg_Day { get; set; }
    //}

    //public class Aggregation : IAggregation
    //{
    //    public Point_Agg_Hour Point_Agg_Hour { get; set; }
    //    public Aggregation(Point_Agg_Hour _point_Agg_Hour)
    //    {
    //        this.Point_Agg_Hour = _point_Agg_Hour;
    //    }


    //    public Point_Agg_Day Point_Agg_Day{ get; set; }
    //    public Aggregation(Point_Agg_Day _point_Agg_Day)
    //    {
    //        this.Point_Agg_Day = _point_Agg_Day;
    //    }
    //}


    public abstract class Main_Aggregation_DTO
    {
        public double Avg_Value { get; set; }

        public double Sum_Value { get; set; }

        public double Min_Value { get; set; }

        public double Max_Value { get; set; }

        public double Cum_Value { get; set; }

        public long Point_ID { get; set; }

        public long Client_ID { get; set; }       
    }


    public class Point_Agg_Hour_DTO : Main_Aggregation_DTO
    {
        #region Instance Properties
        public DateTime Date_ID { get; set; }
        public DateTime Hour_ID { get; set; }
        #endregion Instance Properties       
    }

    /// <summary>
    /// This Convert function is for Aggregate_Raw_Data to Database Table Point_Agg_Hour and return it
    /// </summary>
    public class Point_Agg_Hour_Convert
    {
        public static Point_Agg_Hour Convert_Aggregate_Raw_Data_To_Point_Agg_Hour(Aggregate_Raw_Data dto_Aggregate_Raw_Data)
        {


            var dto_Point_Hour_tbl = new Point_Agg_Hour();
            try
            {
                if (dto_Aggregate_Raw_Data != null)
                {
                    try
                    {
                        dto_Point_Hour_tbl.Avg_Value = dto_Aggregate_Raw_Data.AverageValue;
                        dto_Point_Hour_tbl.Client_ID = dto_Aggregate_Raw_Data.Client_ID;
                        dto_Point_Hour_tbl.Cum_Value = dto_Aggregate_Raw_Data.Cummulative;
                        dto_Point_Hour_tbl.Date_ID = dto_Aggregate_Raw_Data.Date_ID;
                        dto_Point_Hour_tbl.Hour_ID = dto_Aggregate_Raw_Data.Hour_ID;
                        dto_Point_Hour_tbl.Max_Value = dto_Aggregate_Raw_Data.MaxValue;
                        dto_Point_Hour_tbl.Min_Value = dto_Aggregate_Raw_Data.MinValue;
                        dto_Point_Hour_tbl.Point_ID = dto_Aggregate_Raw_Data.Point_ID;
                        dto_Point_Hour_tbl.Sum_Value = dto_Aggregate_Raw_Data.SumValue;
                        dto_Point_Hour_tbl.Hour_Count = dto_Aggregate_Raw_Data.TotalCount;
                    }
                    catch(Exception ex)
                    {
                        File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "dto_Aggregate_Raw_Data Point_Id" + dto_Aggregate_Raw_Data.Point_ID);
                    }                  
                }
                else
                {
                    throw new Exception("dto_Aggregate_Raw_Data is null");
                }
               
            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "");
            }

            return dto_Point_Hour_tbl;
        }

        public static List<Point_Agg_Hour> Convert_List_Aggregate_Raw_Data_To_Point_Agg_Hour_List(IEnumerable<Aggregate_Raw_Data> dto_list_Aggregate_Raw_Data)
        {
            var tbl_list_Point_Hour = new List<Point_Agg_Hour>();
            foreach (Aggregate_Raw_Data dto_Aggregate_Raw_Data in dto_list_Aggregate_Raw_Data)
            {
                try
                {
                    tbl_list_Point_Hour.Add(Convert_Aggregate_Raw_Data_To_Point_Agg_Hour(dto_Aggregate_Raw_Data));
                }
                catch (Exception ex)
                {
                    File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "");
                }

            }
            return tbl_list_Point_Hour;
        }
    }

    public class Point_Agg_Day_DTO : Main_Aggregation_DTO
    {
        #region Instance Properties
        public DateTime Date_ID { get; set; }
        #endregion Instance Properties
    }

    /// <summary>
    /// This Convert function is for Aggregate_Raw_Data to Database Table Point_Agg_Day and return it
    /// </summary>
    public class Point_Agg_Day_Convert
    {
        public static Point_Agg_Day Convert_Aggregate_Raw_Data_To_Point_Agg_Day(Aggregate_Raw_Data dto_Aggregate_Raw_Data)
        {


            var dto_Point_Day_tbl = new Point_Agg_Day();
            try
            {
                if (dto_Aggregate_Raw_Data != null)
                {
                    try
                    {
                        dto_Point_Day_tbl.Avg_Value = dto_Aggregate_Raw_Data.AverageValue;
                        dto_Point_Day_tbl.Client_ID = dto_Aggregate_Raw_Data.Client_ID;
                        dto_Point_Day_tbl.Cum_Value = dto_Aggregate_Raw_Data.Cummulative;
                        dto_Point_Day_tbl.Date_ID = dto_Aggregate_Raw_Data.Date_ID;
                        dto_Point_Day_tbl.Max_Value = dto_Aggregate_Raw_Data.MaxValue;
                        dto_Point_Day_tbl.Min_Value = dto_Aggregate_Raw_Data.MinValue;
                        dto_Point_Day_tbl.Point_ID = dto_Aggregate_Raw_Data.Point_ID;
                        dto_Point_Day_tbl.Sum_Value = dto_Aggregate_Raw_Data.SumValue;
                        dto_Point_Day_tbl.Day_Count = dto_Aggregate_Raw_Data.TotalCount;
                    }
                    catch (Exception ex)
                    {
                        File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "dto_Aggregate_Raw_Data Point_Id" + dto_Aggregate_Raw_Data.Point_ID);
                    }
                }
                else
                {
                    throw new Exception("dto_Aggregate_Raw_Data is null");
                }

            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "");
            }

            return dto_Point_Day_tbl;
        }

        public static List<Point_Agg_Day> Convert_List_Aggregate_Raw_Data_To_Point_Agg_Day_List(IEnumerable<Aggregate_Raw_Data> dto_list_Aggregate_Raw_Data)
        {
            var tbl_list_Point_Day = new List<Point_Agg_Day>();
            foreach (Aggregate_Raw_Data dto_Aggregate_Raw_Data in dto_list_Aggregate_Raw_Data)
            {
                try
                {
                    tbl_list_Point_Day.Add(Convert_Aggregate_Raw_Data_To_Point_Agg_Day(dto_Aggregate_Raw_Data));
                }
                catch (Exception ex)
                {
                    File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "");
                }

            }
            return tbl_list_Point_Day;
        }
    }

    public class Point_Agg_Month_DTO : Main_Aggregation_DTO
    {
        #region Instance Properties
        public long Month_ID { get; set; }
        #endregion Instance Properties
    }

    /// <summary>
    /// This Convert function is for Aggregate_Raw_Data to Database Table Point_Agg_Month and return it
    /// </summary>
    public class Point_Agg_Month_Convert
    {
        public static Point_Agg_Month Convert_Aggregate_Raw_Data_To_Point_Agg_Month(Aggregate_Raw_Data dto_Aggregate_Raw_Data)
        {


            var dto_Point_Month_tbl = new Point_Agg_Month();
            try
            {
                if (dto_Aggregate_Raw_Data != null)
                {
                    try
                    {
                        dto_Point_Month_tbl.Avg_Value = dto_Aggregate_Raw_Data.AverageValue;
                        dto_Point_Month_tbl.Client_ID = dto_Aggregate_Raw_Data.Client_ID;
                        dto_Point_Month_tbl.Cum_Value = dto_Aggregate_Raw_Data.Cummulative;
                        dto_Point_Month_tbl.Month_ID = Helper.Get_Month_ID(dto_Aggregate_Raw_Data.Month_Year_ID , dto_Aggregate_Raw_Data.Month_ID);
                        dto_Point_Month_tbl.Max_Value = dto_Aggregate_Raw_Data.MaxValue;
                        dto_Point_Month_tbl.Min_Value = dto_Aggregate_Raw_Data.MinValue;
                        dto_Point_Month_tbl.Point_ID = dto_Aggregate_Raw_Data.Point_ID;
                        dto_Point_Month_tbl.Sum_Value = dto_Aggregate_Raw_Data.SumValue;
                        dto_Point_Month_tbl.Month_Count = dto_Aggregate_Raw_Data.TotalCount;
                    }
                    catch (Exception ex)
                    {
                        File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "dto_Aggregate_Raw_Data Point_Id" + dto_Aggregate_Raw_Data.Point_ID);
                    }
                }
                else
                {
                    throw new Exception("dto_Aggregate_Raw_Data is null");
                }

            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "");
            }

            return dto_Point_Month_tbl;
        }

        public static List<Point_Agg_Month> Convert_List_Aggregate_Raw_Data_To_Point_Agg_Month_List(IEnumerable<Aggregate_Raw_Data> dto_list_Aggregate_Raw_Data)
        {
            var tbl_list_Point_Month = new List<Point_Agg_Month>();
            foreach (Aggregate_Raw_Data dto_Aggregate_Raw_Data in dto_list_Aggregate_Raw_Data)
            {
                try
                {
                    tbl_list_Point_Month.Add(Convert_Aggregate_Raw_Data_To_Point_Agg_Month(dto_Aggregate_Raw_Data));
                }
                catch (Exception ex)
                {
                    File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "");
                }

            }
            return tbl_list_Point_Month;
        }
    }

    public class Point_Agg_Week_DTO : Main_Aggregation_DTO
    {
        #region Instance Properties
        public long Week_ID { get; set; }
        #endregion Instance Properties
    }

    /// <summary>
    /// This Convert function is for Aggregate_Raw_Data to Database Table Point_Agg_Week and return it
    /// </summary>
    public class Point_Agg_Week_Convert
    {
        public static Point_Agg_Week Convert_Aggregate_Raw_Data_To_Point_Agg_Week(Aggregate_Raw_Data dto_Aggregate_Raw_Data)
        {


            var dto_Point_Week_tbl = new Point_Agg_Week();
            try
            {
                if (dto_Aggregate_Raw_Data != null)
                {
                    try
                    {
                        dto_Point_Week_tbl.Avg_Value = dto_Aggregate_Raw_Data.AverageValue;
                        dto_Point_Week_tbl.Client_ID = dto_Aggregate_Raw_Data.Client_ID;
                        dto_Point_Week_tbl.Cum_Value = dto_Aggregate_Raw_Data.Cummulative;
                       // dto_Point_Week_tbl.Week_ID = dto_Aggregate_Raw_Data.Date_ID;
                        dto_Point_Week_tbl.Max_Value = dto_Aggregate_Raw_Data.MaxValue;
                        dto_Point_Week_tbl.Min_Value = dto_Aggregate_Raw_Data.MinValue;
                        dto_Point_Week_tbl.Point_ID = dto_Aggregate_Raw_Data.Point_ID;
                        dto_Point_Week_tbl.Sum_Value = dto_Aggregate_Raw_Data.SumValue;
                        dto_Point_Week_tbl.Week_Count = dto_Aggregate_Raw_Data.TotalCount;
                    }
                    catch (Exception ex)
                    {
                        File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "dto_Aggregate_Raw_Data Point_Id" + dto_Aggregate_Raw_Data.Point_ID);
                    }
                }
                else
                {
                    throw new Exception("dto_Aggregate_Raw_Data is null");
                }

            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "");
            }

            return dto_Point_Week_tbl;
        }

        public static List<Point_Agg_Week> Convert_List_Aggregate_Raw_Data_To_Point_Agg_Week_List(IEnumerable<Aggregate_Raw_Data> dto_list_Aggregate_Raw_Data)
        {
            var tbl_list_Point_Week = new List<Point_Agg_Week>();
            foreach (Aggregate_Raw_Data dto_Aggregate_Raw_Data in dto_list_Aggregate_Raw_Data)
            {
                try
                {
                    tbl_list_Point_Week.Add(Convert_Aggregate_Raw_Data_To_Point_Agg_Week(dto_Aggregate_Raw_Data));
                }
                catch (Exception ex)
                {
                    File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "");
                }

            }
            return tbl_list_Point_Week;
        }
    }

    public class Point_Agg_Year_DTO : Main_Aggregation_DTO
    {
        #region Instance Properties
        public int Year_ID { get; set; }
        #endregion Instance Properties
    }

    /// <summary>
    /// This Convert function is for Aggregate_Raw_Data to Database Table Point_Agg_Year and return it
    /// </summary>
    public class Point_Agg_Year_Convert
    {
        public static Point_Agg_Year Convert_Aggregate_Raw_Data_To_Point_Agg_Year(Aggregate_Raw_Data dto_Aggregate_Raw_Data)
        {
            var dto_Point_Year_tbl = new Point_Agg_Year();
            try
            {
                if (dto_Aggregate_Raw_Data != null)
                {
                    try
                    {
                        dto_Point_Year_tbl.Avg_Value = dto_Aggregate_Raw_Data.AverageValue;
                        dto_Point_Year_tbl.Client_ID = dto_Aggregate_Raw_Data.Client_ID;
                        dto_Point_Year_tbl.Cum_Value = dto_Aggregate_Raw_Data.Cummulative;
                        dto_Point_Year_tbl.Year_ID =  dto_Aggregate_Raw_Data.Year_ID;
                        dto_Point_Year_tbl.Max_Value = dto_Aggregate_Raw_Data.MaxValue;
                        dto_Point_Year_tbl.Min_Value = dto_Aggregate_Raw_Data.MinValue;
                        dto_Point_Year_tbl.Point_ID = dto_Aggregate_Raw_Data.Point_ID;
                        dto_Point_Year_tbl.Sum_Value = dto_Aggregate_Raw_Data.SumValue;
                        dto_Point_Year_tbl.Year_Count = dto_Aggregate_Raw_Data.TotalCount;
                    }
                    catch (Exception ex)
                    {
                        File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "dto_Aggregate_Raw_Data Point_Id" + dto_Aggregate_Raw_Data.Point_ID);
                    }
                }
                else
                {
                    throw new Exception("dto_Aggregate_Raw_Data is null");
                }

            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "");
            }

            return dto_Point_Year_tbl;
        }

        public static List<Point_Agg_Year> Convert_List_Aggregate_Raw_Data_To_Point_Agg_Year_List(IEnumerable<Aggregate_Raw_Data> dto_list_Aggregate_Raw_Data)
        {
            var tbl_list_Point_Year = new List<Point_Agg_Year>();
            foreach (Aggregate_Raw_Data dto_Aggregate_Raw_Data in dto_list_Aggregate_Raw_Data)
            {
                try
                {
                    tbl_list_Point_Year.Add(Convert_Aggregate_Raw_Data_To_Point_Agg_Year(dto_Aggregate_Raw_Data));
                }
                catch (Exception ex)
                {
                    File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "");
                }

            }
            return tbl_list_Point_Year;
        }
    }

    /// <summary>
    /// This class is for getting the raw data from the datasource (Point_Measure_Fact table)
    /// </summary>
    public class Aggregate_Raw_Data
    {
        public DateTime Start { get; set; }
        public DateTime End { get; set; }
        public DateTime Hour_ID { get; set; }
        public DateTime Date_ID { get; set; }
        public int Week_ID { get; set; }
        public int Month_ID { get; set; }

        public int Month_Year_ID { get; set; }

        public int Year_ID { get; set; }
        public double SumValue { get; set; }
        public double AverageValue { get; set; }
        public double MinValue { get; set; }
        public double MaxValue { get; set; }
        public double Cummulative { get; set; }
        //Total count is number of rows in the defined period
        public int TotalCount { get; set; }
        public long Client_ID { get; set; }
        public long Point_ID { get; set; }
    }


}
