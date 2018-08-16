using InnonAnalytics.Common;
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
    public class Aggregate_Save
    {
        InnonAnalyticsWarehouseEntities _db_datawarehouse_context;

        /// <summary>
        /// Save Aggregation Group by Hour
        /// </summary>
        /// <param name="Element_ID"></param>
        protected void Save_Hour_Aggregation(long Element_ID)
        {

            try
            {
                _db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();
                //Get last inserted record in the table Point_Agg_Hour
                Point_Agg_Hour tbl_point_Agg_Hour = _db_datawarehouse_context.Point_Agg_Hour.Where(point_hour => point_hour.Point_ID == Element_ID).OrderByDescending(point_hour => point_hour.Hour_ID).AsEnumerable().FirstOrDefault();

                List<Aggregate_Raw_Data> _list_aggregation = new List<Aggregate_Raw_Data>();

                if (tbl_point_Agg_Hour != null)
                    _list_aggregation = Get_Aggregate_Raw_Data(Element_ID, Helper.Get_Last_Hour(tbl_point_Agg_Hour.Hour_ID), AggerationType.Hour);
                else
                    _list_aggregation = Get_Aggregate_Raw_Data(Element_ID, null, AggerationType.Hour);

                Save_Aggregate_To_WareHouse(_list_aggregation, AggerationType.Hour, Element_ID);
            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "Save_Hour_Aggregation passing parameter element_id:- " + Element_ID);
            }
        }

        protected void Update_Hour_Aggregation(long Element_ID)
        {
            try
            {
                InnonAnalyticsWarehouseEntities db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();
                //Get last inserted record in the table Point_Agg_Hour
                double hours = double.Parse(ConfigurationManagerHelper.AppSettings["aggregate_hours"].ToString());
                DateTime datetime = DateTime.Now.AddHours(-hours);
                IList<Point_Agg_Hour> tbl_point_Agg_Hours = db_datawarehouse_context.Point_Agg_Hour.Where(point_hour => point_hour.Point_ID == Element_ID && point_hour.Hour_ID >= datetime).ToList();
                if (tbl_point_Agg_Hours.Count() > 0)
                {
                    List<Aggregate_Raw_Data> _list_aggregation = new List<Aggregate_Raw_Data>();
                    _list_aggregation = Get_Aggregate_Raw_Data(Element_ID, Helper.Get_Last_Hour(datetime), AggerationType.Hour);

                    _list_aggregation = _list_aggregation.Where(aggregate => tbl_point_Agg_Hours.Any(aggr_hour =>
                        aggregate.Hour_ID == aggr_hour.Hour_ID
                        && (aggregate.TotalCount != aggr_hour.Hour_Count || aggregate.SumValue != aggr_hour.Sum_Value))).ToList();

                    if (_list_aggregation.Count() > 0)
                    {
                        tbl_point_Agg_Hours = Point_Agg_Hour_Convert.Convert_List_Aggregate_Raw_Data_To_Point_Agg_Hour_List(_list_aggregation);
                        db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();
                        foreach(Point_Agg_Hour tbl_point_Agg_Hour in tbl_point_Agg_Hours)
                        {
                            db_datawarehouse_context.Point_Agg_Hour.Attach(tbl_point_Agg_Hour);
                            db_datawarehouse_context.Entry(tbl_point_Agg_Hour).State = System.Data.Entity.EntityState.Modified;
                        }                       
                        db_datawarehouse_context.SaveChanges();
                    }
                }
            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "Update_Hour_Aggregation passing parameter element_id:- " + Element_ID);
            }
        }

        /// <summary>
        /// Save Aggregation Group by Day/Date
        /// </summary>
        /// <param name="Element_ID"></param>
        protected void Save_Day_Aggregation(long Element_ID)
        {

            try
            {
                _db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();
                //Get last inserted record in the table Point_Agg_Day
                Point_Agg_Day tbl_point_Agg_Day = _db_datawarehouse_context.Point_Agg_Day.Where(point_day => point_day.Point_ID == Element_ID).OrderByDescending(point_day => point_day.Date_ID).AsEnumerable().FirstOrDefault();
                List<Aggregate_Raw_Data> _list_aggregation = new List<Aggregate_Raw_Data>();
                if (tbl_point_Agg_Day != null)
                    _list_aggregation = Get_Aggregate_Raw_Data(Element_ID, Helper.Get_Last_Day(tbl_point_Agg_Day.Date_ID), AggerationType.Day);
                else
                    _list_aggregation = Get_Aggregate_Raw_Data(Element_ID, null, AggerationType.Day);

                //Finally Save Aggregation in to the warehouse
                Save_Aggregate_To_WareHouse(_list_aggregation, AggerationType.Day, Element_ID);
            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "passing parameter element_id:- " + Element_ID);
            }


        }

        protected void Update_Day_Aggregation(long Element_ID)
        {
            try
            {
                InnonAnalyticsWarehouseEntities db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();
                //Get last inserted record in the table Point_Agg_Hour
                double days = double.Parse(ConfigurationManagerHelper.AppSettings["aggregate_days"].ToString());
                DateTime datetime = DateTime.Now.AddDays(-(days + 1)); // add 1 because Date_ID in Point_Agg_Day 00:00:00 time
                IList<Point_Agg_Day> tbl_point_Agg_Days = db_datawarehouse_context.Point_Agg_Day.Where(point_Days => point_Days.Point_ID == Element_ID && point_Days.Date_ID >= datetime).ToList();
                if (tbl_point_Agg_Days.Count() > 0)
                {
                    List<Aggregate_Raw_Data> _list_aggregation = new List<Aggregate_Raw_Data>();
                    _list_aggregation = Get_Aggregate_Raw_Data(Element_ID, Helper.Get_Last_Day(datetime), AggerationType.Day);

                    //Compare the raw data and aggregate data
                    _list_aggregation = _list_aggregation.Where(aggregate => tbl_point_Agg_Days.Any(aggr_Days =>
                        aggregate.Date_ID == aggr_Days.Date_ID
                        && (aggregate.TotalCount != aggr_Days.Day_Count || aggregate.SumValue != aggr_Days.Sum_Value))).ToList();

                    if (_list_aggregation.Count() > 0)
                    {
                        tbl_point_Agg_Days = Point_Agg_Day_Convert.Convert_List_Aggregate_Raw_Data_To_Point_Agg_Day_List(_list_aggregation);
                        db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();
                        foreach (Point_Agg_Day tbl_point_Agg_Day in tbl_point_Agg_Days)
                        {
                            db_datawarehouse_context.Point_Agg_Day.Attach(tbl_point_Agg_Day);
                            db_datawarehouse_context.Entry(tbl_point_Agg_Day).State = System.Data.Entity.EntityState.Modified;
                        }
                        db_datawarehouse_context.SaveChanges();
                    }
                }
            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "Update_Day_Aggregation passing parameter element_id:- " + Element_ID);
            }
        }

        /// <summary>
        /// Save Aggregation Group by Week
        /// </summary>
        /// <param name="Element_ID"></param>
        protected void Save_Week_Aggregation(long Element_ID)
        {
            try
            {
                _db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();
                //Get last inserted record in the table Point_Agg_Week
                Point_Agg_Week tbl_point_Agg_Week = _db_datawarehouse_context.Point_Agg_Week.Where(point_week => point_week.Point_ID == Element_ID).OrderByDescending(point_week => point_week.Week_ID).AsEnumerable().FirstOrDefault();
                List<Aggregate_Raw_Data> _list_aggregation = new List<Aggregate_Raw_Data>();
                if (tbl_point_Agg_Week != null)
                    _list_aggregation = Get_Aggregate_Raw_Data(Element_ID, Helper.LastDateOfWeekISO8601(tbl_point_Agg_Week.Week_ID), AggerationType.Week);
                else
                    _list_aggregation = Get_Aggregate_Raw_Data(Element_ID, null, AggerationType.Week);

                //Finally Save Aggregation in to the warehouse
                Save_Aggregate_To_WareHouse(_list_aggregation, AggerationType.Week, Element_ID);
            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "passing parameter element_id:- " + Element_ID);
            }
        }

        /// <summary>
        /// Save Aggregation Group by Month
        /// </summary>
        /// <param name="Element_ID"></param>
        protected void Save_Month_Aggregation(long Element_ID)
        {

            try
            {
                _db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();
                //Get last inserted record in the table Point_Agg_Month
                Point_Agg_Month tbl_point_Agg_Month = _db_datawarehouse_context.Point_Agg_Month.Where(point_month => point_month.Point_ID == Element_ID).OrderByDescending(point_month => point_month.Month_ID).AsEnumerable().FirstOrDefault();
                List<Aggregate_Raw_Data> _list_aggregation = new List<Aggregate_Raw_Data>();
                if (tbl_point_Agg_Month != null)
                    _list_aggregation = Get_Aggregate_Raw_Data(Element_ID, Helper.Get_Last_Day_Of_Month(tbl_point_Agg_Month.Month_ID), AggerationType.Month);
                else
                    _list_aggregation = Get_Aggregate_Raw_Data(Element_ID, null, AggerationType.Month);

                //Finally Save Aggregation in to the warehouse
                Save_Aggregate_To_WareHouse(_list_aggregation, AggerationType.Month, Element_ID);
            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "passing parameter element_id:- " + Element_ID);
            }


        }

        protected void Update_Month_Aggregation(long Element_ID)
        {
            try
            {
                InnonAnalyticsWarehouseEntities db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();
                //Get last inserted record in the table Point_Agg_Hour
                int months = int.Parse(ConfigurationManagerHelper.AppSettings["aggregate_months"].ToString());
                DateTime datetime = DateTime.Now.AddMonths(-months);
                long MonthID = Helper.Get_Month_ID(datetime.Year, datetime.Month);
                IList<Point_Agg_Month> tbl_point_Agg_Months = db_datawarehouse_context.Point_Agg_Month.Where(point_Months => point_Months.Point_ID == Element_ID && point_Months.Month_ID >= MonthID).ToList();
                if (tbl_point_Agg_Months.Count() > 0)
                {
                    List<Aggregate_Raw_Data> _list_aggregation = new List<Aggregate_Raw_Data>();
                    _list_aggregation = Get_Aggregate_Raw_Data(Element_ID, Helper.Get_Last_Day_Of_Month(MonthID), AggerationType.Month);

                    //Compare the raw data and aggregate data
                    _list_aggregation = _list_aggregation.Where(aggregate => tbl_point_Agg_Months.Any(aggr_Months =>
                        Helper.Get_Month_ID(aggregate.Month_Year_ID, aggregate.Month_ID) == aggr_Months.Month_ID
                        && (aggregate.TotalCount != aggr_Months.Month_Count || aggregate.SumValue != aggr_Months.Sum_Value))).ToList();

                    if (_list_aggregation.Count() > 0)
                    {
                        tbl_point_Agg_Months = Point_Agg_Month_Convert.Convert_List_Aggregate_Raw_Data_To_Point_Agg_Month_List(_list_aggregation);
                        db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();
                        foreach (Point_Agg_Month tbl_point_Agg_Month in tbl_point_Agg_Months)
                        {
                            db_datawarehouse_context.Point_Agg_Month.Attach(tbl_point_Agg_Month);
                            db_datawarehouse_context.Entry(tbl_point_Agg_Month).State = System.Data.Entity.EntityState.Modified;
                        }                        
                        db_datawarehouse_context.SaveChanges();
                    }
                }
            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "Update_Month_Aggregation passing parameter element_id:- " + Element_ID);
            }
        }

        /// <summary>
        /// Save Aggregation Group by Year
        /// </summary>
        /// <param name="Element_ID"></param>
        protected void Save_Year_Aggregation(long Element_ID)
        {
            try
            {
                _db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();
                //Get last inserted record in the table Point_Agg_Year
                Point_Agg_Year tbl_point_Agg_Year = _db_datawarehouse_context.Point_Agg_Year.Where(point_year => point_year.Point_ID == Element_ID).OrderByDescending(point_year => point_year.Year_ID).AsEnumerable().FirstOrDefault();
                List<Aggregate_Raw_Data> _list_aggregation = new List<Aggregate_Raw_Data>();
                if (tbl_point_Agg_Year != null)
                    _list_aggregation = Get_Aggregate_Raw_Data(Element_ID, Helper.Get_Last_Day_Of_Year(tbl_point_Agg_Year.Year_ID), AggerationType.Year);
                else
                    _list_aggregation = Get_Aggregate_Raw_Data(Element_ID, null, AggerationType.Year);

                //Finally Save Aggregation in to the warehouse
                Save_Aggregate_To_WareHouse(_list_aggregation, AggerationType.Year, Element_ID);
            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "passing parameter element_id:- " + Element_ID);
            }


        }

        protected void Update_Year_Aggregation(long Element_ID)
        {
            try
            {
                InnonAnalyticsWarehouseEntities db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();
                //Get last inserted record in the table Point_Agg_Hour
                int Years = int.Parse(ConfigurationManagerHelper.AppSettings["aggregate_Years"].ToString());
                DateTime datetime = DateTime.Now.AddYears(-Years);               
                IList<Point_Agg_Year> tbl_point_Agg_Years = db_datawarehouse_context.Point_Agg_Year.Where(point_Years => point_Years.Point_ID == Element_ID && point_Years.Year_ID >= datetime.Year).ToList();
                if (tbl_point_Agg_Years.Count() > 0)
                {
                    List<Aggregate_Raw_Data> _list_aggregation = new List<Aggregate_Raw_Data>();
                    _list_aggregation = Get_Aggregate_Raw_Data(Element_ID, Helper.Get_Last_Day_Of_Year(datetime.Year), AggerationType.Year);

                    //Compare the raw data and aggregate data
                    _list_aggregation = _list_aggregation.Where(aggregate => tbl_point_Agg_Years.Any(aggr_Years =>
                        aggregate.Year_ID == aggr_Years.Year_ID
                        && (aggregate.TotalCount != aggr_Years.Year_Count || aggregate.SumValue != aggr_Years.Sum_Value))).ToList();

                    if (_list_aggregation.Count() > 0)
                    {
                        tbl_point_Agg_Years = Point_Agg_Year_Convert.Convert_List_Aggregate_Raw_Data_To_Point_Agg_Year_List(_list_aggregation);
                        db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();
                        foreach (Point_Agg_Year tbl_point_Agg_Year in tbl_point_Agg_Years)
                        {
                            db_datawarehouse_context.Point_Agg_Year.Attach(tbl_point_Agg_Year);
                            db_datawarehouse_context.Entry(tbl_point_Agg_Year).State = System.Data.Entity.EntityState.Modified;
                        }
                        db_datawarehouse_context.SaveChanges();
                    }
                }
            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "Update_year_Aggregation passing parameter element_id:- " + Element_ID);
            }
        }

        /// <summary>
        /// This function calulate the aggregate on the basis of provided parameters
        /// </summary>
        /// <param name="Element_ID"></param>
        /// <param name="Timestamp_From"></param>
        /// <param name="aggregate_type">Aggregate is for Group by</param>
        /// <returns></returns>
        private List<Aggregate_Raw_Data> Get_Aggregate_Raw_Data(long Element_ID, DateTime? Timestamp_From, AggerationType aggregate_type)
        {
            try
            {
                _db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();
                IPoint_Measure_Fact_Service point_measure_fact_service = new Point_Measure_Fact_Service();
                IList<Point_Measure_Fact> list = new List<Point_Measure_Fact>();

                if (Timestamp_From.HasValue)
                    list = point_measure_fact_service.Get_Point_Measure_Fact_By_Element_ID_From_Date(Element_ID, Timestamp_From.GetValueOrDefault());
                else
                    list = point_measure_fact_service.Get_Point_Measure_Fact_By_Element_ID(Element_ID);

                List<Aggregate_Raw_Data> _list_aggregation = new List<Aggregate_Raw_Data>();
                _list_aggregation.AddRange(CalculateAggregation(aggregate_type, list));
                return _list_aggregation;
            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, string.Format("passing parameter element_id:-{0},  Timestamp_From:- {1}, aggregate_type:- {2}", Element_ID, Timestamp_From, aggregate_type));
                return null;
            }


        }

        private IList<Aggregate_Raw_Data> CalculateAggregation(AggerationType GroupBy, IEnumerable<Point_Measure_Fact> point_measure_fact_list_dto)
        {

            try
            {
                var Result = from t in point_measure_fact_list_dto
                             group t by new
                             {
                                 //Date_ID = t.Date_ID,
                                 Hour = (int)GroupBy >= (int)AggerationType.Hour ? t.Hour_ID : new DateTime(),
                                 Day = (int)GroupBy >= (int)AggerationType.Day ? t.Timestamp_From.Date : new DateTime(),
                                 Month = (int)GroupBy >= (int)AggerationType.Month ? t.Timestamp_From.Month : 0,
                                 Month_Year = (int)GroupBy >= (int)AggerationType.Month ? t.Timestamp_From.Year : 0,
                                 Year = (int)GroupBy >= (int)AggerationType.Year ? t.Timestamp_From.Year : 0,
                                 Client_ID = t.Client_ID,
                                 Point_ID = t.Point_ID
                             } into g
                             select new Aggregate_Raw_Data()
                             {
                                 Hour_ID = g.Key.Hour,
                                 Date_ID = g.Key.Day,
                                 //Week_ID = g.Key.
                                 Month_ID = g.Key.Month,
                                 Month_Year_ID = g.Key.Month_Year,
                                 Year_ID = g.Key.Year,
                                 SumValue = g.Sum(m => m.Value),
                                 MinValue = g.Min(m => m.Value),
                                 MaxValue = g.Max(m => m.Value),
                                 AverageValue = g.Average(m => m.Value),
                                 Cummulative = 0,
                                 Client_ID = g.Key.Client_ID,
                                 Point_ID = g.Key.Point_ID,
                                 TotalCount = g.Count()
                             };


                return Result.ToList();
            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "");
                return null;
            }
        }

        private void Save_Aggregate_To_WareHouse(List<Aggregate_Raw_Data> _list_aggregation, AggerationType _aggerationType, long Element_ID)
        {

            if (_list_aggregation != null)
            {
                if (_list_aggregation.Any())
                {
                    try
                    {
                        _db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();

                        switch (_aggerationType)
                        {
                            case AggerationType.Hour:
                                _db_datawarehouse_context.Point_Agg_Hour.AddRange(Point_Agg_Hour_Convert.Convert_List_Aggregate_Raw_Data_To_Point_Agg_Hour_List(_list_aggregation));
                                break;
                            case AggerationType.Day:
                                _db_datawarehouse_context.Point_Agg_Day.AddRange(Point_Agg_Day_Convert.Convert_List_Aggregate_Raw_Data_To_Point_Agg_Day_List(_list_aggregation));
                                break;
                            case AggerationType.Week:
                                //_db_datawarehouse_context.Point_Agg_Week.AddRange(Point_Agg_Week_Convert.Convert_List_Aggregate_Raw_Data_To_Point_Agg_Week_List(_list_aggregation));
                                break;
                            case AggerationType.Month:
                                _db_datawarehouse_context.Point_Agg_Month.AddRange(Point_Agg_Month_Convert.Convert_List_Aggregate_Raw_Data_To_Point_Agg_Month_List(_list_aggregation));
                                break;
                            case AggerationType.Year:
                                _db_datawarehouse_context.Point_Agg_Year.AddRange(Point_Agg_Year_Convert.Convert_List_Aggregate_Raw_Data_To_Point_Agg_Year_List(_list_aggregation));
                                break;
                            default:
                                File_Log.SaveLog_ToFile(new Exception("Invalid AggregationType"), LoggingActions.Error, "Point_ID " + Element_ID);
                                break;
                        }
                        _db_datawarehouse_context.SaveChanges();
                    }
                    catch (Exception ex)
                    {
                        File_Log.SaveLog_ToFile(ex, LoggingActions.Error, "Aggragation Type " + _aggerationType + " Point_ID " + Element_ID);
                    }

                }
            }

        }
    }
}
