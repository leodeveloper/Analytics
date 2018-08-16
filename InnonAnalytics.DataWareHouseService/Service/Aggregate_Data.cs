using InnonAnalytics.Common.Enums;
using InnonAnalytics.Common;
using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using InnonAnalytics.Model.DTO;
using System.Data.Entity;
using System.Data.SqlClient;
using System.Globalization;

namespace InnonAnalytics.DataWareHouseService.Service
{   

    /// <summary>
    /// Aggregate_Get is the class which provide all the aggregation data from the datawarehouse database
    /// </summary>
    public class Aggregate_Data : InnonAnalytics.DataWareHouseService.Repository.IAggregate_Data
    {
        private IInnonAnalyticsWarehouseEntities _db_datawarehouse_context;

        public Aggregate_Data(IInnonAnalyticsWarehouseEntities db)
         {
             _db_datawarehouse_context = db;
         }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="element_id"></param>
        /// <param name="group_by"></param>
        public void Get_Aggregate(long element_id, AggerationType group_by)
        {
           // _db_datawarehouse_context = new InnonAnalyticsWarehouseEntities();
            
        }

        public void Get_Aggregate(long element_id)
        {

        }
        /// <summary>
        /// Get_Aggregate Returns Group By from tblTag_Type_Mapping
        /// 
        /// </summary>
        /// <param name="list_element_id"></param>
        /// <param name="group_by"></param>
        /// <param name="from_date"></param>
        /// <param name="to_date"></param>
        public List<Aggregate_DTO_Group_By_Aggregation_Type_Value> Get_Aggregate(IEnumerable<ElementDTO_WareHouse> list_element_id, Rollup_Function_Option rollup_function_option,Unit_Of_Measurement_DTO metric_unit, string group_by, DateTime from_date, DateTime to_date)
        {
            List<Aggregate_DTO_Group_By_Aggregation_Type_Value> _aggregate_dtos_groupby = new List<Aggregate_DTO_Group_By_Aggregation_Type_Value>();
            List<Aggregate_DTO_Aggregation_Type_Value> _aggregate_dtos = new List<Aggregate_DTO_Aggregation_Type_Value>();
            if (list_element_id != null)
            {
                var element_ids = new SqlParameter("@element_ids", Helper.ConvertIEnumerableToString(list_element_id.Select(element => element.Element_ID), ","));               
                
                //First get the raw data from the data base, we need some operation on the raw data for example the unit of measure can be different of point and matric
                StringBuilder sql_query_raw = new StringBuilder();
                sql_query_raw.Append(string.Format("select {0} as Group_By, PM.Value as Value,PM.Point_ID from [dbo].[Point_Dim] as PD, [dbo].[Point_Measure_Fact] as PM", group_by));
                sql_query_raw.Append(string.Format(" where PD.Point_ID = PM.Point_ID and PM.Timestamp_From >= '" + from_date.ToString("yyyy/MM/dd hh:mm:ss") + "' and PM.Timestamp_To <= '" + to_date.ToString("yyyy/MM/dd hh:mm:ss") + "'"));

                if (element_ids.Size > 0)
                    sql_query_raw.Append(" and PM.Point_ID in (" + element_ids.Value + ") ");

                sql_query_raw.Append(string.Format(" and {0} is not null", group_by));
                _aggregate_dtos = _db_datawarehouse_context.Database.SqlQuery<Aggregate_DTO_Aggregation_Type_Value>(sql_query_raw.ToString()).ToList();
                //End

                //Convert the value of Element if unit of measure is change from the unit of metric
                Convert_Values(list_element_id, metric_unit, _aggregate_dtos);

                _aggregate_dtos_groupby = (from aggregate_groupby in _aggregate_dtos
                                          group new { aggregate_groupby }
                                           by new
                                           {
                                               Group_By = aggregate_groupby.Group_By,                                               
                                           } into pg
                                          select new Aggregate_DTO_Group_By_Aggregation_Type_Value
                                          {
                                              Group_By = pg.Key.Group_By,
                                              Value = (Rollup_Function_Option.SUM == rollup_function_option ? pg.Sum(s => (double?)s.aggregate_groupby.Value) ?? 0 :
                                             Rollup_Function_Option.AVG == rollup_function_option ? pg.Average(s => (double?)s.aggregate_groupby.Value) ?? 0 :
                                             Rollup_Function_Option.MIN == rollup_function_option ? pg.Min(s => (double?)s.aggregate_groupby.Value) ?? 0 :
                                             Rollup_Function_Option.MAX == rollup_function_option ? pg.Max(s => (double?)s.aggregate_groupby.Value) ?? 0 :
                                             0
                                             )
                                          }).ToList();
              
            }
            return _aggregate_dtos_groupby;
        }

        private static void Convert_Values(IEnumerable<ElementDTO_WareHouse> list_element_id, Unit_Of_Measurement_DTO metric_unit, List<Aggregate_DTO_Aggregation_Type_Value> _aggregate_dtos)
        {
            ElementDTO_WareHouse element_dto_warehouse;
            //Convert the value of Element if unit of measure is change from the unit of metric
            foreach (var _aggregate_dto in _aggregate_dtos)
            {
                element_dto_warehouse = list_element_id.SingleOrDefault(point => point.Element_ID == _aggregate_dto.Point_ID);
                if (element_dto_warehouse != null)
                {
                    if (element_dto_warehouse.Element_Unit.ID != 0 && element_dto_warehouse.Element_Unit.ID != metric_unit.ID)
                    {
                        _aggregate_dto.Value = Unit_Convertion.Conversion(_aggregate_dto.Value, element_dto_warehouse.Element_Unit.Unit_Name, metric_unit.Unit_Name);
                    }
                }
            }
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="group_by"></param>
        /// <param name="from_date"></param>
        /// <param name="to_date"></param>
        /// <returns></returns>
        public Tree_Map_Aggregate_DTO Get_Aggregate(TagType group_by, DateTime from_date, DateTime to_date)
        {
            
            List<Tree_Map_Aggregate_DTO> tree_map_dto_Childern = (from point_dim in _db_datawarehouse_context.Point_Dim
                                                         join point_measure_fact in _db_datawarehouse_context.Point_Measure_Fact on point_dim.Point_ID equals point_measure_fact.Point_ID
                                                         where point_measure_fact.Timestamp_From >= from_date && point_measure_fact.Timestamp_To <= to_date
                                                         group new { point_dim, point_measure_fact } by new { point_dim.Department } into pg
                                                         select new Tree_Map_Aggregate_DTO { Name = pg.Key.Department, Value = pg.Sum(s => (double?)s.point_measure_fact.Value) ?? 0 }).ToList();


            Tree_Map_Aggregate_DTO tree_map_dto_Parent = new Tree_Map_Aggregate_DTO{ Name = Resources.Tree_Map_Title, Value = tree_map_dto_Childern.Sum(value => value.Value) };
            tree_map_dto_Parent.Items = tree_map_dto_Childern;

            return tree_map_dto_Parent;
        }

        /// <summary>
        /// Get_Aggregate Returns Group By Aggregation_Type(Hour, Day, Month, Sec, Year)
        /// </summary>
        /// <param name="list_element_id"></param>
        /// <param name="group_by"></param>
        /// <param name="from_date"></param>
        /// <param name="to_date"></param>
        /// <returns></returns>
        public List<Aggregate_DTO_Group_By_Aggregation_Type_Value> Get_Aggregate(IEnumerable<ElementDTO_WareHouse> list_element, Rollup_Function_Option roll_up_function, Unit_Of_Measurement_DTO metric_unit, AggerationType group_by, DateTime from_date, DateTime to_date)
        {
            List<Aggregate_DTO_Group_By_Aggregation_Type_Value> _aggregate_dto = new List<Aggregate_DTO_Group_By_Aggregation_Type_Value>();
            IEnumerable<long> list_element_id = list_element.Select(elementid => elementid.Element_ID);
            switch (group_by)
            {
                case AggerationType.Hour:
                    _get_Aggregate_Hour(list_element, roll_up_function, metric_unit, from_date, to_date, ref _aggregate_dto);
                    break;
                case AggerationType.Day:
                    _get_Aggregate_Day(list_element, roll_up_function, metric_unit, from_date, to_date, ref _aggregate_dto);
                    break;
                case AggerationType.Week:
                    throw new NotImplementedException("The week aggregation is not implemented");
                case AggerationType.Month:
                    _get_Aggregate_Month(list_element, roll_up_function, metric_unit, from_date, to_date, ref _aggregate_dto);
                    break;
                case AggerationType.Year:
                    _get_Aggregate_Year(list_element, roll_up_function, metric_unit, from_date, to_date, ref _aggregate_dto);
                    break;
                default:
                    break;

            }   
            return _aggregate_dto;
        }

        #region private aggregate members

        private void _get_Aggregate_Hour(IEnumerable<ElementDTO_WareHouse> list_element, Rollup_Function_Option rollup_function_option, Unit_Of_Measurement_DTO metric_unit, DateTime from_date, DateTime to_date, ref List<Aggregate_DTO_Group_By_Aggregation_Type_Value> _aggregate_dto)
        {
            if (list_element != null)
            {
                IEnumerable<long> list_element_id = list_element.Select(elementid => elementid.Element_ID);
                IEnumerable<DateTime> dates = Helper.GetDateRange(from_date, to_date);

                List<Aggregate_DTO_Aggregation_Type_Value> point_agg_hr = (from point_measure_fact in _db_datawarehouse_context.Point_Agg_Hour
                                  where (point_measure_fact == null ? true : list_element_id.Contains(point_measure_fact.Point_ID)) &&
                                  (point_measure_fact.Hour_ID >= from_date && point_measure_fact.Hour_ID <= to_date)                                 
                                  select new Aggregate_DTO_Aggregation_Type_Value
                                  {
                                      Group_By = point_measure_fact.Hour_ID.ToString(),
                                      Point_ID = point_measure_fact.Point_ID != null ? point_measure_fact.Point_ID : 0,
                                      Value = (Rollup_Function_Option.SUM == rollup_function_option ? (double?)point_measure_fact.Sum_Value ?? 0 :
                                     Rollup_Function_Option.AVG == rollup_function_option ? (double?)point_measure_fact.Avg_Value ?? 0 :
                                     Rollup_Function_Option.MIN == rollup_function_option ? (double?)point_measure_fact.Min_Value ?? 0 :
                                     Rollup_Function_Option.MAX == rollup_function_option ? (double?)point_measure_fact.Max_Value ?? 0 :
                                     0
                                     )
                                  }).ToList().OrderBy(z => Convert.ToDateTime(z.Group_By)).ToList();

                //Convert the value of Element if unit of measure is change from the unit of metric
                Convert_Values(list_element, metric_unit, point_agg_hr);

                _aggregate_dto = (from point_measure_fact in point_agg_hr                                 
                                  group new { point_measure_fact }
                                           by new
                                           {
                                               Hour_Dim = point_measure_fact.Group_By
                                           } into pg
                                  select new Aggregate_DTO_Group_By_Aggregation_Type_Value
                                  {
                                      Group_By = pg.Key.Hour_Dim.ToString(),
                                      Value = (Rollup_Function_Option.SUM == rollup_function_option ? pg.Sum(s => (double?)s.point_measure_fact.Value) ?? 0 :
                                     Rollup_Function_Option.AVG == rollup_function_option ? pg.Average(s => (double?)s.point_measure_fact.Value) ?? 0 :
                                     Rollup_Function_Option.MIN == rollup_function_option ? pg.Min(s => (double?)s.point_measure_fact.Value) ?? 0 :
                                     Rollup_Function_Option.MAX == rollup_function_option ? pg.Max(s => (double?)s.point_measure_fact.Value) ?? 0 :
                                     0
                                     )
                                  }).ToList().OrderBy(z => Convert.ToDateTime(z.Group_By)).ToList();

                //_aggregate_dto = (from point_measure_fact in _db_datawarehouse_context.Point_Agg_Hour
                //                  where (point_measure_fact == null ? true : list_element_id.Contains(point_measure_fact.Point_ID)) &&
                //                  (point_measure_fact.Hour_ID >= from_date && point_measure_fact.Hour_ID <= to_date)
                //                  //orderby point_measure_fact.Hour_ID 
                //                  group new { point_measure_fact }
                //                           by new
                //                           {
                //                               Date_Dim = point_measure_fact.Date_ID,
                //                               Hour_Dim = point_measure_fact.Hour_ID
                //                           } into pg
                //                  select new Aggregate_DTO_Group_By_Aggregation_Type_Value
                //                  {
                //                      Group_By = pg.Key.Hour_Dim.ToString(),
                //                      Value = (Rollup_Function_Option.SUM == rollup_function_option ? pg.Sum(s => (double?)s.point_measure_fact.Sum_Value) ?? 0 :
                //                     Rollup_Function_Option.AVG == rollup_function_option ? pg.Average(s => (double?)s.point_measure_fact.Avg_Value) ?? 0 :
                //                     Rollup_Function_Option.MIN == rollup_function_option ? pg.Min(s => (double?)s.point_measure_fact.Min_Value) ?? 0 :
                //                     Rollup_Function_Option.MAX == rollup_function_option ? pg.Max(s => (double?)s.point_measure_fact.Max_Value) ?? 0 :
                //                     0
                //                     )
                //                  }).ToList().OrderBy(z => Convert.ToDateTime(z.Group_By)).ToList();
            }
        }


        private void _get_Aggregate_Day(IEnumerable<ElementDTO_WareHouse> list_element, Rollup_Function_Option rollup_function_option, Unit_Of_Measurement_DTO metric_unit, DateTime from_date, DateTime to_date, ref List<Aggregate_DTO_Group_By_Aggregation_Type_Value> _aggregate_dto)
        {

            if (list_element != null)
            {
                IEnumerable<long> list_element_id = list_element.Select(elementid => elementid.Element_ID);
                //IEnumerable<DateTime> dates = Helper.GetDateRange(from_date, to_date);               

                //Get Raw data with out group by
                List<Aggregate_DTO_Aggregation_Type_Value> point_agg_day = (from date_dim in _db_datawarehouse_context.Date_Dim
                                                     where date_dim.Date_ID >= DbFunctions.TruncateTime(from_date) && date_dim.Date_ID <= DbFunctions.TruncateTime(to_date)
                                                     //where dates.Contains(date_dim.Date_ID)
                                                     join point_measure_fact in _db_datawarehouse_context.Point_Agg_Day on date_dim.Date_ID equals point_measure_fact.Date_ID
                                                     into joinedT
                                                     from point_fact in joinedT.DefaultIfEmpty()
                                                     where point_fact == null ? true : list_element_id.Contains(point_fact.Point_ID)
                                                     select new Aggregate_DTO_Aggregation_Type_Value
                                                     {
                                                         Group_By = date_dim.Date_ID.ToString(),
                                                         Point_ID = point_fact.Point_ID != null ? point_fact.Point_ID : 0,
                                                         Value = (Rollup_Function_Option.SUM == rollup_function_option ?   (double?)point_fact.Sum_Value ?? 0 :
                                                         Rollup_Function_Option.AVG == rollup_function_option ? (double?)point_fact.Avg_Value ?? 0 :
                                                         Rollup_Function_Option.MIN == rollup_function_option ? (double?)point_fact.Min_Value ?? 0 :
                                                         Rollup_Function_Option.MAX == rollup_function_option ? (double?)point_fact.Max_Value ?? 0 :
                                                         0
                                                         )
                                                     }).ToList();
                //End
                //Convert the value of Element if unit of measure is change from the unit of metric
                Convert_Values(list_element, metric_unit, point_agg_day);               

                _aggregate_dto = (from point_fact in point_agg_day
                                  //where point_fact != null //? true : list_element_id.Contains(point_fact.Point_ID)
                                  group new { point_fact }
                                           by new
                                           {
                                               Date_Dim = point_fact.Group_By
                                           } into pg
                                  select new Aggregate_DTO_Group_By_Aggregation_Type_Value
                                  {
                                      Group_By = pg.Key.Date_Dim.ToString(),
                                      Value = (Rollup_Function_Option.SUM == rollup_function_option ? pg.Sum(s => (double?)s.point_fact.Value) ?? 0 :
                                      Rollup_Function_Option.AVG == rollup_function_option ? pg.Average(s => (double?)s.point_fact.Value) ?? 0 :
                                      Rollup_Function_Option.MIN == rollup_function_option ? pg.Min(s => (double?)s.point_fact.Value) ?? 0 :
                                      Rollup_Function_Option.MAX == rollup_function_option ? pg.Max(s => (double?)s.point_fact.Value) ?? 0 :
                                      0
                                      )
                                  }).ToList();

                //_aggregate_dto = (from date_dim in _db_datawarehouse_context.Date_Dim
                //                  where date_dim.Date_ID >= DbFunctions.TruncateTime(from_date) && date_dim.Date_ID <= DbFunctions.TruncateTime(to_date)
                //                  //where dates.Contains(date_dim.Date_ID)
                //                  join point_measure_fact in _db_datawarehouse_context.Point_Agg_Day on date_dim.Date_ID equals point_measure_fact.Date_ID
                //                  into joinedT
                //                  from point_fact in joinedT.DefaultIfEmpty()
                //                  where point_fact == null ? true : list_element_id.Contains(point_fact.Point_ID)
                //                  group new { point_fact }
                //                           by new
                //                           {
                //                               Date_Dim = date_dim.Date_ID
                //                           } into pg
                //                  select new Aggregate_DTO_Group_By_Aggregation_Type_Value
                //                  {
                //                      Group_By = pg.Key.Date_Dim.ToString(),
                //                      Value = (Rollup_Function_Option.SUM == rollup_function_option ? pg.Sum(s => (double?)s.point_fact.Sum_Value) ?? 0 :
                //                      Rollup_Function_Option.AVG == rollup_function_option ? pg.Average(s => (double?)s.point_fact.Avg_Value) ?? 0 :
                //                      Rollup_Function_Option.MIN == rollup_function_option ? pg.Min(s => (double?)s.point_fact.Min_Value) ?? 0 :
                //                      Rollup_Function_Option.MAX == rollup_function_option ? pg.Max(s => (double?)s.point_fact.Max_Value) ?? 0 :
                //                      0
                //                      )
                //                  }).ToList();
               
            }
           
        }

        private void _get_Aggregate_Week(IEnumerable<long> list_element_id, Rollup_Function_Option rollup_function_option, DateTime from_date, DateTime to_date, ref List<Aggregate_DTO_Group_By_Aggregation_Type_Value> _aggregate_dto)
        {
            if (list_element_id != null)
            {
                _aggregate_dto = (from date_dim in _db_datawarehouse_context.Date_Dim
                                  where date_dim.Date_ID >= from_date && date_dim.Date_ID <= to_date
                                  join point_measure_fact in _db_datawarehouse_context.Point_Agg_Day on date_dim.Date_ID equals point_measure_fact.Date_ID
                                  into joinedT
                                  from point_fact in joinedT.DefaultIfEmpty()
                                  where point_fact == null ? true : list_element_id.Contains(point_fact.Point_ID)
                                  group new { point_fact }
                                           by new
                                           {
                                               Date_Dim = date_dim.Date_ID
                                           } into pg
                                  select new Aggregate_DTO_Group_By_Aggregation_Type_Value
                                  {
                                      Group_By = pg.Key.Date_Dim.ToString(),
                                      Value = (Rollup_Function_Option.SUM == rollup_function_option ? pg.Sum(s => (double?)s.point_fact.Sum_Value) ?? 0 :
                                     Rollup_Function_Option.AVG == rollup_function_option ? pg.Average(s => (double?)s.point_fact.Avg_Value) ?? 0 :
                                      Rollup_Function_Option.MIN == rollup_function_option ? pg.Min(s => (double?)s.point_fact.Min_Value) ?? 0 :
                                      Rollup_Function_Option.MAX == rollup_function_option ? pg.Max(s => (double?)s.point_fact.Max_Value) ?? 0 :
                                     0
                                     )
                                  }).ToList();
            }
        }

        private void _get_Aggregate_Month(IEnumerable<ElementDTO_WareHouse> list_element, Rollup_Function_Option rollup_function_option, Unit_Of_Measurement_DTO metric_unit, DateTime from_date, DateTime to_date, ref List<Aggregate_DTO_Group_By_Aggregation_Type_Value> _aggregate_dto)
        {
            if (list_element != null)
            {
                IEnumerable<long> list_element_id = list_element.Select(elementid => elementid.Element_ID);
                List<Tuple<int, int, int>> lis_of_months = Helper.Get_year_month_Between_Two_Date(from_date, to_date);

                int FirstMonthYear = lis_of_months.First().Item1;
                int LastMonthYear = lis_of_months.Last().Item1;

                List<Aggregate_DTO_Aggregation_Type_Value> point_agg_month = (from date_dim in _db_datawarehouse_context.Date_Dim
                                  where date_dim.Month_ID >= FirstMonthYear && date_dim.Month_ID <= LastMonthYear
                                  join point_measure_fact in _db_datawarehouse_context.Point_Agg_Month on date_dim.Month_ID equals point_measure_fact.Month_ID
                                  into joinedT
                                  from point_fact in joinedT.DefaultIfEmpty()
                                  where point_fact == null ? true : list_element_id.Contains(point_fact.Point_ID)                                 
                                  select new Aggregate_DTO_Aggregation_Type_Value
                                  {
                                      Group_By = date_dim.Month_ID.ToString(),
                                      Point_ID = point_fact.Point_ID != null ? point_fact.Point_ID : 0,
                                      Value = (Rollup_Function_Option.SUM == rollup_function_option ?  (double?)point_fact.Sum_Value ?? 0 :
                                       Rollup_Function_Option.AVG == rollup_function_option ? (double?)point_fact.Avg_Value ?? 0 :
                                      Rollup_Function_Option.MIN == rollup_function_option ? (double?)point_fact.Min_Value ?? 0 :
                                      Rollup_Function_Option.MAX == rollup_function_option ? (double?)point_fact.Max_Value ?? 0 :
                                     0
                                     )
                                  }).ToList();
                //Convert the value of Element if unit of measure is change from the unit of metric
                Convert_Values(list_element, metric_unit, point_agg_month);

                _aggregate_dto = (from point_fact in point_agg_month                                 
                                  group new { point_fact }
                                           by new
                                           {
                                               Date_Dim = point_fact.Group_By
                                           } into pg
                                  select new Aggregate_DTO_Group_By_Aggregation_Type_Value
                                  {
                                      Group_By = pg.Key.Date_Dim.ToString(),
                                      Value = (Rollup_Function_Option.SUM == rollup_function_option ? pg.Sum(s => (double?)s.point_fact.Value) ?? 0 :
                                       Rollup_Function_Option.AVG == rollup_function_option ? pg.Average(s => (double?)s.point_fact.Value) ?? 0 :
                                      Rollup_Function_Option.MIN == rollup_function_option ? pg.Min(s => (double?)s.point_fact.Value) ?? 0 :
                                      Rollup_Function_Option.MAX == rollup_function_option ? pg.Max(s => (double?)s.point_fact.Value) ?? 0 :
                                     0
                                     )
                                  }).ToList().OrderBy(z => z.Group_By).ToList();

                //_aggregate_dto = (from date_dim in _db_datawarehouse_context.Date_Dim
                //                  where date_dim.Month_ID >= FirstMonthYear && date_dim.Month_ID <= LastMonthYear
                //                  join point_measure_fact in _db_datawarehouse_context.Point_Agg_Month on date_dim.Month_ID equals point_measure_fact.Month_ID
                //                  into joinedT
                //                  from point_fact in joinedT.DefaultIfEmpty()
                //                  where point_fact == null ? true : list_element_id.Contains(point_fact.Point_ID)
                //                  group new { point_fact }
                //                           by new
                //                           {
                //                               Date_Dim = date_dim.Month_ID
                //                           } into pg
                //                  select new Aggregate_DTO_Group_By_Aggregation_Type_Value
                //                  {
                //                      Group_By = pg.Key.Date_Dim.ToString(),
                //                      Value = (Rollup_Function_Option.SUM == rollup_function_option ? pg.Sum(s => (double?)s.point_fact.Sum_Value) ?? 0 :
                //                       Rollup_Function_Option.AVG == rollup_function_option ? pg.Average(s => (double?)s.point_fact.Avg_Value) ?? 0 :
                //                      Rollup_Function_Option.MIN == rollup_function_option ? pg.Min(s => (double?)s.point_fact.Min_Value) ?? 0 :
                //                      Rollup_Function_Option.MAX == rollup_function_option ? pg.Max(s => (double?)s.point_fact.Max_Value) ?? 0 :
                //                     0
                //                     )
                //                  }).ToList().OrderBy(z => z.Group_By).ToList();
            }

        }

        private void _get_Aggregate_Year(IEnumerable<ElementDTO_WareHouse> list_element, Rollup_Function_Option rollup_function_option, Unit_Of_Measurement_DTO metric_unit, DateTime from_date, DateTime to_date, ref List<Aggregate_DTO_Group_By_Aggregation_Type_Value> _aggregate_dto)
        {
            if (list_element != null)
            {
                IEnumerable<long> list_element_id = list_element.Select(elementid => elementid.Element_ID);
                List<int> years = Helper.Get_years_Between_Two_Date(from_date, to_date);

                List<Aggregate_DTO_Aggregation_Type_Value> point_agg_year = (from date_dim in _db_datawarehouse_context.Date_Dim
                                  where years.Contains(date_dim.Year_ID)
                                  join point_measure_fact in _db_datawarehouse_context.Point_Agg_Year on date_dim.Year_ID equals point_measure_fact.Year_ID
                                  into joinedT
                                  from point_fact in joinedT.DefaultIfEmpty()
                                  where point_fact == null ? true : list_element_id.Contains(point_fact.Point_ID)
                                  select new Aggregate_DTO_Aggregation_Type_Value
                                  {
                                      Group_By = date_dim.Year_ID.ToString(),
                                      Point_ID = point_fact.Point_ID != null ? point_fact.Point_ID : 0,
                                      Value = (Rollup_Function_Option.SUM == rollup_function_option ? (double?)point_fact.Sum_Value ?? 0 :
                                     Rollup_Function_Option.AVG == rollup_function_option ? (double?)point_fact.Avg_Value ?? 0 :
                                      Rollup_Function_Option.MIN == rollup_function_option ? (double?)point_fact.Min_Value ?? 0 :
                                      Rollup_Function_Option.MAX == rollup_function_option ? (double?)point_fact.Max_Value ?? 0 :
                                     0
                                     )
                                  }).ToList();
                //Convert the value of Element if unit of measure is change from the unit of metric
                Convert_Values(list_element, metric_unit, point_agg_year);

                _aggregate_dto = (from point_fact in point_agg_year                                  
                                  group new { point_fact }
                                           by new
                                           {
                                               Date_Dim = point_fact.Group_By
                                           } into pg
                                  select new Aggregate_DTO_Group_By_Aggregation_Type_Value
                                  {
                                      Group_By = pg.Key.Date_Dim.ToString(),
                                      Value = (Rollup_Function_Option.SUM == rollup_function_option ? pg.Sum(s => (double?)s.point_fact.Value) ?? 0 :
                                     Rollup_Function_Option.AVG == rollup_function_option ? pg.Average(s => (double?)s.point_fact.Value) ?? 0 :
                                      Rollup_Function_Option.MIN == rollup_function_option ? pg.Min(s => (double?)s.point_fact.Value) ?? 0 :
                                      Rollup_Function_Option.MAX == rollup_function_option ? pg.Max(s => (double?)s.point_fact.Value) ?? 0 :
                                     0
                                     )
                                  }).ToList().OrderBy(z => z.Group_By).ToList();


                //_aggregate_dto = (from date_dim in _db_datawarehouse_context.Date_Dim
                //                  where years.Contains(date_dim.Year_ID)
                //                  join point_measure_fact in _db_datawarehouse_context.Point_Agg_Year on date_dim.Year_ID equals point_measure_fact.Year_ID
                //                  into joinedT
                //                  from point_fact in joinedT.DefaultIfEmpty()
                //                  where point_fact == null ? true : list_element_id.Contains(point_fact.Point_ID)
                //                  group new { point_fact }
                //                           by new
                //                           {
                //                               Date_Dim = date_dim.Year_ID
                //                           } into pg
                //                  select new Aggregate_DTO_Group_By_Aggregation_Type_Value
                //                  {
                //                      Group_By = pg.Key.Date_Dim.ToString(),
                //                      Value = (Rollup_Function_Option.SUM == rollup_function_option ? pg.Sum(s => (double?)s.point_fact.Sum_Value) ?? 0 :
                //                     Rollup_Function_Option.AVG == rollup_function_option ? pg.Average(s => (double?)s.point_fact.Avg_Value) ?? 0 :
                //                      Rollup_Function_Option.MIN == rollup_function_option ? pg.Min(s => (double?)s.point_fact.Min_Value) ?? 0 :
                //                      Rollup_Function_Option.MAX == rollup_function_option ? pg.Max(s => (double?)s.point_fact.Max_Value) ?? 0 :
                //                     0
                //                     )
                //                  }).ToList().OrderBy(z => z.Group_By).ToList();
            }
        }

        #endregion

        /// <summary>
        /// This aggregation function used for those chart type which has mutiple metric like donut, pie etc. Always get data from the Point_Agg_Hour
        /// </summary>
        /// <param name="list_element_id"></param>
        /// <param name="rollup_function_option">AVG, MIN, MAX, SUM</param>
        /// <param name="from_date"></param>
        /// <param name="to_date"></param>
        /// <returns></returns>
        public double Get_Aggregate(IEnumerable<ElementDTO_WareHouse> list_element, Rollup_Function_Option rollup_function_option, Unit_Of_Measurement_DTO metric_unit, DateTime from_date, DateTime to_date)
        {
            //double? point_sum = (from point_measure_fact in _db_datawarehouse_context.Point_Measure_Fact
            //                     where point_measure_fact.Timestamp_From >= from_date && point_measure_fact.Timestamp_To <= to_date && list_element_id.Contains(point_measure_fact.Point_ID)
            //                     select point_measure_fact).ToList().Sum(sum_value => (double?)sum_value.Value) ?? null;

            double? Value = 0;
            IEnumerable<long> list_element_id = list_element.Select(elementid => elementid.Element_ID);

           List<Point_Agg_Hour> point_agg_hr = (from point_measure_fact in _db_datawarehouse_context.Point_Agg_Hour
             where point_measure_fact.Hour_ID >= from_date && point_measure_fact.Hour_ID <= to_date && list_element_id.Contains(point_measure_fact.Point_ID)
             select point_measure_fact).ToList();

           ElementDTO_WareHouse element_dto_warehouse;
           //Convert the value of Element if unit of measure is change from the unit of metric
           foreach (var _aggregate_dto in point_agg_hr)
           {
               element_dto_warehouse = list_element.SingleOrDefault(point => point.Element_ID == _aggregate_dto.Point_ID);
               if (element_dto_warehouse != null)
               {
                   if (element_dto_warehouse.Element_Unit.ID != 0 && element_dto_warehouse.Element_Unit.ID != metric_unit.ID)
                   {
                       _aggregate_dto.Sum_Value = Unit_Convertion.Conversion(_aggregate_dto.Sum_Value, element_dto_warehouse.Element_Unit.Unit_Name, metric_unit.Unit_Name);
                       _aggregate_dto.Avg_Value = Unit_Convertion.Conversion(_aggregate_dto.Avg_Value, element_dto_warehouse.Element_Unit.Unit_Name, metric_unit.Unit_Name);
                       _aggregate_dto.Min_Value = Unit_Convertion.Conversion(_aggregate_dto.Min_Value, element_dto_warehouse.Element_Unit.Unit_Name, metric_unit.Unit_Name);
                       _aggregate_dto.Max_Value = Unit_Convertion.Conversion(_aggregate_dto.Max_Value, element_dto_warehouse.Element_Unit.Unit_Name, metric_unit.Unit_Name);
                   }
               }
           }

            switch (rollup_function_option)
            {
                case Rollup_Function_Option.AVG:
                    Value = point_agg_hr.Average(value => (double?)value.Avg_Value) ?? null;
                    break;
                case Rollup_Function_Option.MAX:
                    Value = point_agg_hr.Max(value => (double?)value.Max_Value) ?? null;
                    break;
                case Rollup_Function_Option.MIN:
                    Value = point_agg_hr.Min(value => (double?)value.Min_Value) ?? null;
                    break;
                case Rollup_Function_Option.SUM:
                    Value = point_agg_hr.Sum(value => (double?)value.Sum_Value) ?? null;
                    break;
                default:
                    throw new Exception("Invalid Rollup_Function_Option Not Implmeneted " + rollup_function_option);
            }

            if (Value == null)
                throw new AggregateException(Resources.Null_Value);
            else
                return (double)Value;
        }
    }
}
