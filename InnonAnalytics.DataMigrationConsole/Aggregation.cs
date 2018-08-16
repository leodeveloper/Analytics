using InnonAnalytics.DataMigrationConsole.Model;
using InnonAnalytics.Model;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.DataMigrationConsole
{

    public class Data
    {
        public DateTime Start { get; set; }
        public DateTime End { get; set; }
        public DateTime Hour_ID { get; set; }
        public DateTime Date_ID { get; set; }
        public int Month_ID { get; set; }
        public DateTime Year_ID { get; set; }
        public double SumValue { get; set; }
        public double AverageValue { get; set; }
        public double? MinValue { get; set; }
        public double? MaxValue { get; set; }
        public double? Cummulative { get; set; }
        //Total count is number of rows in the defined period
        public int TotalCount { get; set; }
    }

    public class Aggregation
    {



        public IList<Data> CalculateAggregation(AggerationType GroupBy, IList<Point_Measure_Fact> point_measure_fact_list_dto)
        {
            var Result = from t in point_measure_fact_list_dto
                         group t by new
                         {
                             Date_ID = t.Date_ID,
                             Hour = (int)GroupBy >= (int)AggerationType.Hour ? t.Hour_ID : System.DateTime.Now,
                             Day = (int)GroupBy >= (int)AggerationType.Day ? t.Timestamp_From.Day : 0,
                             Month = (int)GroupBy >= (int)AggerationType.Month ? t.Timestamp_From.Month : 0,
                             Year = (int)GroupBy >= (int)AggerationType.Year ? t.Timestamp_From.Year : 0
                         } into g
                         select new Data() {
                             Date_ID = g.Key.Date_ID,
                             Hour_ID = g.Key.Hour, 
                             SumValue = g.Sum(m => m.Value), 
                             MinValue = g.Min(m=>m.Value),
                             MaxValue = g.Max(m=>m.Value),
                             AverageValue = g.Average(m=>m.Value),
                             TotalCount = g.Count()  
                         };

           return Result.ToList();
        }

        public enum AggerationType { Year = 1, Month = 2, Day = 3, Hour = 4, Minute = 5 }

        public IList<Data> RunQuery(AggerationType groupType, AggerationType checkType, IList<Point_Measure_Fact> point_measure_fact_list_dto)
        {
            // The actual query which does to trick
            var result =
                from d in point_measure_fact_list_dto
                group d by new
                {
                    d.Timestamp_From.Year,
                    Month = (int)groupType >= (int)AggerationType.Month ? d.Timestamp_From.Month : 1,
                    Day = (int)groupType >= (int)AggerationType.Day ? d.Timestamp_From.Day : 1,
                    Hour = (int)groupType >= (int)AggerationType.Hour ? d.Timestamp_From.Hour : 1
                } into g
                // The where clause checks how much data needs to be in the group
                where CheckAggregation(g.Count(), checkType)
                select new Data() { Start = g.Min(m => m.Timestamp_From), End = g.Max(m => m.Timestamp_To), SumValue = g.Sum(m => m.Value) };

            return result.ToList();
        }

        private bool CheckAggregation(int groupCount, AggerationType checkType)
        {
            int requiredCount = 1;
            switch (checkType)
            {
                // For year all data must be multiplied by 12 months
                case AggerationType.Year:
                    requiredCount = requiredCount * 12;
                    goto case AggerationType.Month;
                // For months all data must be multiplied by days in month
                case AggerationType.Month:
                    // I use 30 but this depends on the given month and year
                    requiredCount = requiredCount * 30;
                    goto case AggerationType.Day;
                // For days all data need to be multiplied by 24 hour
                case AggerationType.Day:
                    requiredCount = requiredCount * 24;
                    goto case AggerationType.Hour;
                // For hours all data need to be multiplied by 2 (because slots of 30 minutes)
                case AggerationType.Hour:
                    requiredCount = requiredCount * 2;
                    break;

            }
            return groupCount == requiredCount;
        }

    }
}
