


using InnonAnalytics.Common;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel;
using InnonAnalytics.DataWareHouseService.Model;
using InnonAnalytics.DataWareHouseService.Repository;
using System;
using System.Collections.Generic;
using System.Data.Entity;
using System.Linq;

namespace InnonAnalytics.DataWareHouseService.Service
{
    
    internal class PointMesaureFact
    {

        protected IInnonAnalyticsWarehouseEntities datawarehousecontext; 

        public virtual IList<Warehouse_DTO> Get_Data_From(long point_id, DateTime from_date, DateTime to_date)
        {
            datawarehousecontext = new InnonAnalyticsWarehouseEntities();
            IEnumerable<Point_Measure_Fact> point_measure_facts = datawarehousecontext.Point_Measure_Fact.Where(point => point.Point_ID == point_id && point.Timestamp_From >= from_date && point.Timestamp_From <= to_date);

            return null;
        }
    }
    internal class PointAggHour : PointMesaureFact
    {
        public override IList<Warehouse_DTO> Get_Data_From(long point_id, DateTime from_date, DateTime to_date)
        {
            base.datawarehousecontext = new InnonAnalyticsWarehouseEntities();           
            IList<Point_Agg_Hour> point_agg_hr = datawarehousecontext.Point_Agg_Hour.Where(point => point.Point_ID == point_id && point.Hour_ID >= from_date && point.Hour_ID <= to_date).ToList();
            return Convert_Aggregate_To_Warehouse_DTO.Convert(point_agg_hr);
        }
    }

    internal class PointAggDay : PointMesaureFact
    {
        public override IList<Warehouse_DTO> Get_Data_From(long point_id, DateTime from_date, DateTime to_date)
        {
            base.datawarehousecontext = new InnonAnalyticsWarehouseEntities();
            IEnumerable<Point_Agg_Day> point_agg_day = datawarehousecontext.Point_Agg_Day.Where(point => point.Point_ID == point_id && point.Date_ID >= DbFunctions.TruncateTime(from_date) && point.Date_ID <= DbFunctions.TruncateTime(to_date));
            return null;
        }
    }

    internal class PointAggWeek : PointMesaureFact
    {
        public override IList<Warehouse_DTO> Get_Data_From(long point_id, DateTime from_date, DateTime to_date)
        {
            base.datawarehousecontext = new InnonAnalyticsWarehouseEntities();
            throw new NotImplementedException("The week aggregation is not implemented");
            //IEnumerable<Point_Agg_Week> point_agg_week = datawarehousecontext.Point_Agg_Week.Where(point => point.Point_ID == point_id && point.Week_ID >= DbFunctions.TruncateTime(from_date) && point.Date_ID <= DbFunctions.TruncateTime(to_date));
        }
    }

    internal class PointAggMonth : PointMesaureFact
    {
        public override IList<Warehouse_DTO> Get_Data_From(long point_id, DateTime from_date, DateTime to_date)
        {
            base.datawarehousecontext = new InnonAnalyticsWarehouseEntities();
            List<Tuple<int, int, int>> lis_of_months = Helper.Get_year_month_Between_Two_Date(from_date, to_date);

            int FirstMonthYear = lis_of_months.First().Item1;
            int LastMonthYear = lis_of_months.Last().Item1;
            IEnumerable<Point_Agg_Month> point_agg_Month = datawarehousecontext.Point_Agg_Month.Where(point => point.Point_ID == point_id && point.Month_ID >= FirstMonthYear && point.Month_ID <= LastMonthYear);
            return null;

        }
    }

    internal class PointAggYear : PointMesaureFact
    {
        public override IList<Warehouse_DTO> Get_Data_From(long point_id, DateTime from_date, DateTime to_date)
        {
            List<int> years = Helper.Get_years_Between_Two_Date(from_date, to_date);
            base.datawarehousecontext = new InnonAnalyticsWarehouseEntities();           
            IEnumerable<Point_Agg_Year> point_agg_Year = datawarehousecontext.Point_Agg_Year.Where(point => point.Point_ID == point_id && years.Contains(point.Year_ID));
            return null;
        }
    }


    public class WareHouse_Data : IWareHouse_Data
    {
        public IList<Warehouse_DTO> Get_Data_From(long point_id, DateTime from_date, DateTime to_date, AggerationType aggregaretype)
        {

            PointMesaureFact point_measure_fact = new PointMesaureFact();

            switch (aggregaretype)
            {
                case AggerationType.Hour:
                    point_measure_fact = new PointAggHour();
                    break;
                case AggerationType.Day:
                    point_measure_fact = new PointAggDay();
                    break;
                case AggerationType.Week:
                    throw new NotImplementedException("The week aggregation is not implemented");
                case AggerationType.Month:
                    point_measure_fact = new PointAggMonth();
                    break;
                case AggerationType.Year:
                    point_measure_fact = new PointAggYear();
                    break;
                default:
                    break;

            }

           return point_measure_fact.Get_Data_From(point_id, from_date, to_date);
        }
    }




}
