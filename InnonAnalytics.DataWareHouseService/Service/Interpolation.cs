using InnonAnalytics.Common;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel;
using InnonAnalytics.DataWareHouseService.Model;
using InnonAnalytics.DataWareHouseService.Reposiotry;
using InnonAnalytics.DataWareHouseService.Repository;
using InnonAnalytics.Model.DTO;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.DataWareHouseService.Service
{
    public class Interpolation
    {

        public static string good_status_code = ConfigurationManagerHelper.AppSettings["good_data_status"].ToString();
        /// <summary>
        ///  If status of point is not "{ok}" we need to interpolation, for this two values required for every point
        /// 1. last good value 
        /// 2. next good value
        /// Interpolation = (b-a)/total_wrong_records+1; b is the next good value, a is last good value, 
        /// </summary>
        /// <param name="from_date"></param>
        /// <param name="to_date"></param>
        /// <param name="element"></param>
        /// <returns>bool</returns> if return true its mean warehouse aggregation will be run after interpolation
        public static bool InterPolateData(DateTime from_date, DateTime to_date, ElementDTO element)
        {
            bool Is_Ready_For_Aggregation = false;
            string[] bad_data_status_codes = ConfigurationManagerHelper.AppSettings["bad_data_status"].ToString().Split(',');
            string actual_status_code;
            IInnonAnalyticsWarehouseEntities _db_context = new InnonAnalyticsWarehouseEntities();


            //First here we check last good record avalaible for interpolation, if not, than we do not need to go further, last record in the Point measure fact should be ok, other wise interpolation will not do.
            var tbl_point_measgure_facts_Good_Values = _db_context.Point_Measure_Fact.Where(point =>                
                point.Point_ID == element.ID).OrderByDescending(p => p.Timestamp_From).Take(1).Where(point => point.Point_Status == good_status_code);

            var tbl_point_measgure_facts = _db_context.Point_Measure_Fact.Where(point =>
                //point.Timestamp_From >= from_date
                //&& point.Timestamp_To <= to_date
                point.Point_Status != good_status_code
                && point.Point_ID == element.ID).OrderBy(p => p.Timestamp_From).ToList();

            if (tbl_point_measgure_facts.Any() && tbl_point_measgure_facts_Good_Values.Any())
            {

                from_date = tbl_point_measgure_facts.First().Timestamp_From;

                foreach (var tbl_point_measure_fact in tbl_point_measgure_facts)
                {
                    //Intially assume all data status code is ok
                    actual_status_code = good_status_code;
                    //this foreach loop check the point status is ok, if the status is not ok means the value is not correct we have to interpolate the value
                    foreach (string data_status_code in bad_data_status_codes)
                    {
                        if (tbl_point_measure_fact.Point_Status != null)
                        {
                            if (tbl_point_measure_fact.Point_Status.ToUpper().Contains(data_status_code.Trim()))
                            {
                                actual_status_code = data_status_code;
                                break;
                            }
                        }
                    }

                    if (actual_status_code != good_status_code)
                    {
                        if (element.Value_Type == DataValueType.Totalised)
                        {
                            Is_Ready_For_Aggregation = Database_Update_Interpolated_Values(tbl_point_measure_fact);
                        }
                        else
                        {
                            Is_Ready_For_Aggregation = Database_Update_Interpolated_Values(tbl_point_measure_fact);
                        }
                    }
                }
                //if (Is_Ready_For_Aggregation)
                //    Final_Update_Point_Measure_Fact_For_WareHouse(from_date, to_date, element);
            }
            else if(tbl_point_measgure_facts.Any())
                Is_Ready_For_Aggregation = false;
            else //If there is no record for interpolation than set Is_Ready_For_Aggregation true for aggregating the data
                Is_Ready_For_Aggregation = true;


            Final_Update_Point_Measure_Fact_For_WareHouse(from_date, to_date, element);
            return Is_Ready_For_Aggregation;
        }

        private static bool Database_Update_Interpolated_Values(Point_Measure_Fact tbl_point_measure_fact)
        {
            Interpolated_Good_Value Good_Values = Get_Previous_and_Next_Good_Value(tbl_point_measure_fact.Timestamp_From, tbl_point_measure_fact.Point_ID);
            double? new_value = Get_Interpolated_Value(Good_Values);
            //Save into audit table (FactsRestatementAudit)
            if (new_value != null)
            {
                double final_new_value = Convert.ToDouble(new_value);
                //Save to Fact Audit
                if (Good_Values.Previous_Good_Value != null && Good_Values.Next_Good_Value != null)
                {
                    //For Interpolation when both previous and next value ((24-21)/3 = 1; 21+1; 22; 23)
                    final_new_value = Good_Values.Previous_Good_Value.Raw_Value + final_new_value;
                    Save_To_Fact_Audit_Table(tbl_point_measure_fact, final_new_value);
                }
                else
                    Save_To_Fact_Audit_Table(tbl_point_measure_fact,final_new_value);

                //Update the Table Point measure fact with new value
                IPoint_Measure_Fact_Service point_measure_fact = new Point_Measure_Fact_Service();
                tbl_point_measure_fact.Raw_Value = Convert.ToDouble(final_new_value);
                tbl_point_measure_fact.Point_Status = good_status_code;  
                point_measure_fact.Update_Point_Measure_Fact(tbl_point_measure_fact);
                return true;
            }
            return false;
            
        }

        private static void Save_To_Fact_Audit_Table(Point_Measure_Fact tbl_point_measure_fact, double newvalue)
        {
            IFactsRestatementAudit_Service facts = new FactsRestatementAudit_Service();
            FactsRestatementAudit tbl_facts_audit = FactsRestatementAudit_Convert.Convert_Point_Measure_Fact_To_FactsRestatmentAudit(tbl_point_measure_fact, newvalue);
            facts.Save(tbl_facts_audit);
        }


        /// <summary>
        /// This function returns the last and next good value(good value mean point_status "ok") for interpolation
        /// </summary>
        /// <param name="from_date"></param>
        /// <param name="point_Id"></param>        
        public static Interpolated_Good_Value Get_Previous_and_Next_Good_Value(DateTime from_date, long point_Id)
        {
            IInnonAnalyticsWarehouseEntities _db_context = new InnonAnalyticsWarehouseEntities();
            Interpolated_Good_Value Good_Values = new Interpolated_Good_Value();        

            //Last previous good value
            Good_Values.Previous_Good_Value  = _db_context.Point_Measure_Fact.Where(point => point.Timestamp_From <= from_date
                && point.Point_Status == good_status_code
                && point.Point_ID == point_Id).OrderByDescending(pointorder => pointorder.Timestamp_From).FirstOrDefault();

            //Next previous good value
            Good_Values.Next_Good_Value = _db_context.Point_Measure_Fact.Where(point => point.Timestamp_From >= from_date
                && point.Point_Status == good_status_code
                && point.Point_ID == point_Id).OrderBy(pointorder => pointorder.Timestamp_From).FirstOrDefault();

            if (Good_Values.Previous_Good_Value != null && Good_Values.Next_Good_Value != null)
            {
                Good_Values.Number_Of_Records = _db_context.Point_Measure_Fact.Where(point => point.Timestamp_From > Good_Values.Previous_Good_Value.Timestamp_From
                               && point.Timestamp_From < Good_Values.Next_Good_Value.Timestamp_From
                               && point.Point_ID == point_Id).OrderBy(pointorder => pointorder.Timestamp_From).Count();
            }
            return Good_Values;       
        }

        /// <summary>
        ///  Interpolation = (b-a)/(total_wrong_records+1); b is the next good value, a is last good value;  (24-21)/3 = 1; 21+1; 22; 23
        /// </summary>
        /// <param name="Good_Values"></param>
        /// <returns></returns>
        private static double? Get_Interpolated_Value(Interpolated_Good_Value Good_Values)
        {
            if (Good_Values.Next_Good_Value != null && Good_Values.Previous_Good_Value != null)
            {
                return (Good_Values.Next_Good_Value.Raw_Value - Good_Values.Previous_Good_Value.Raw_Value) / (Good_Values.Number_Of_Records + 1);
            }
            else if (Good_Values.Next_Good_Value != null)
            {
                return Good_Values.Next_Good_Value.Raw_Value;
            }
            else
            {
                return null;
            }
        }

        private static void Final_Update_Point_Measure_Fact_For_WareHouse(DateTime from_date, DateTime to_date, ElementDTO element)
        {

            IInnonAnalyticsWarehouseEntities _db_context = new InnonAnalyticsWarehouseEntities();
            IList<Point_Measure_Fact> tbl_point_measgure_facts = _db_context.Point_Measure_Fact.Where(point => point.Timestamp_From >= from_date
               && point.Timestamp_To <= to_date
               && point.Point_Status == good_status_code
               && point.Point_ID == element.ID).OrderBy(p => p.Timestamp_From).ToList();

            if (tbl_point_measgure_facts.Any())
            {

                //check very first record if very last_previous_value=null, than it mean the value would be zero for the first record
                Point_Measure_Fact last_previous_value = _db_context.Point_Measure_Fact.Where(pt => pt.Timestamp_From < from_date && pt.Point_ID == element.ID).OrderByDescending(p => p.Timestamp_From).FirstOrDefault();

                if (element.Value_Type == DataValueType.Totalised)
                {
                    for (int i = 0; i < tbl_point_measgure_facts.Count(); i++)
                    {
                        if (i == 0 && last_previous_value == null)
                            tbl_point_measgure_facts[i].Value = 0;
                        else if (i == 0)
                            tbl_point_measgure_facts[i].Value = tbl_point_measgure_facts[i].Raw_Value - last_previous_value.Raw_Value;
                        else 
                            tbl_point_measgure_facts[i].Value = tbl_point_measgure_facts[i].Raw_Value - tbl_point_measgure_facts[i - 1].Raw_Value;
                    }
                }
                else
                {
                    for (int i = 0; i < tbl_point_measgure_facts.Count(); i++)
                    {
                        tbl_point_measgure_facts[i].Value = tbl_point_measgure_facts[i].Raw_Value;
                    }
                }

                _db_context.SaveChanges();
            }
            
        }      
    }


    public class Interpolated_Good_Value
    {
        public Interpolated_Good_Value()
        {
            Previous_Good_Value = new Point_Measure_Fact();
            Next_Good_Value = new Point_Measure_Fact();
        }

        public Point_Measure_Fact Previous_Good_Value { get; set; }
        public Point_Measure_Fact Next_Good_Value { get; set; }
        //Number_of_Records is the total number of wrong records between Previous_Good_Value,Next_Good_Value ( (24-21)/3 = 1; 21+1; 22; 23)
        public int Number_Of_Records { get; set; }
    }
}
