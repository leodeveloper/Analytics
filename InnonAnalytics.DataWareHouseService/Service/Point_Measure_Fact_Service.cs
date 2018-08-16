using InnonAnalytics.Common;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel;
using InnonAnalytics.DataWareHouseService.Repository;
using InnonAnalytics.Model.DTO;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.DataWareHouseService.Service
{
    public class Point_Measure_Fact_Service : IPoint_Measure_Fact_Service
    {
        InnonAnalyticsWarehouseEntities datawarehousecontext;     

        public void Update_Point_Measure_Fact(Point_Measure_Fact tbl_Point_Measure_Fact)
        {
            datawarehousecontext = new InnonAnalyticsWarehouseEntities();
            Point_Measure_Fact point_measure_fact = datawarehousecontext.Point_Measure_Fact.Find(tbl_Point_Measure_Fact.ID);
            point_measure_fact.Raw_Value = tbl_Point_Measure_Fact.Raw_Value;
            point_measure_fact.Point_Status = tbl_Point_Measure_Fact.Point_Status;
            datawarehousecontext.SaveChanges();
        }

        public void Save_Point_Measure_Fact_Service(IList<RawDataDTO> list_raw_data_dto, ElementDTO element)
        {

            try
            {
                datawarehousecontext = new InnonAnalyticsWarehouseEntities();
                Point_Measure_Fact point_measure_fact;

                foreach (RawDataDTO raw_dto in list_raw_data_dto)
                {
                    point_measure_fact = new Point_Measure_Fact();

                    try
                    {

                        point_measure_fact.ID = 1;

                        point_measure_fact.Client_ID = 0;
                        point_measure_fact.DataRecordingFrequency = element.Recorded_Freq;
                        point_measure_fact.Date_ID = System.DateTime.Now.Date;
                        point_measure_fact.External_ID = raw_dto.ID.ToString();
                        point_measure_fact.Hour_ID = System.DateTime.Now.Date;
                        point_measure_fact.Last_Update_Time = System.DateTime.Now;
                        point_measure_fact.Max_Value = element.Max_Value;
                        point_measure_fact.Min_Value = element.Min_Value;
                        point_measure_fact.Point_ID = element.ID;
                        point_measure_fact.Schedule_ID = 0;
                        point_measure_fact.Timestamp_From = Convert.ToDateTime(raw_dto.TIMESTAMP);
                        point_measure_fact.Timestamp_To = Convert.ToDateTime(raw_dto.TIMESTAMP);
                        point_measure_fact.Unit_Of_Measurement = element.Unit.Unit_Name;
                        point_measure_fact.Value = Convert.ToDouble(raw_dto.VALUE);

                        datawarehousecontext.Point_Measure_Fact.Add(point_measure_fact);

                    }
                    catch (Exception ex)
                    {
                        throw ex;
                    }
                }

                datawarehousecontext.SaveChanges();
            }
            catch (Exception ex)
            {
                throw ex;
            }



            //datawarehousecontext.Point_Measure_Fact_Entities.Add()

        }

        public IList<Point_Measure_Fact> List_Point_Measure_Fact_Service(IList<RawDataDTO> list_raw_data_dto, ElementDTO element)
        {

            try
            {
                IList<Point_Measure_Fact> point_measure_facts = new List<Point_Measure_Fact>();
                Point_Measure_Fact point_measure_fact;
                
                for (int j = 0; j < list_raw_data_dto.Count; j++)
                {
                    point_measure_fact = new Point_Measure_Fact();
                    try
                    {
                        point_measure_fact.Client_ID = 0;
                        point_measure_fact.DataRecordingFrequency = element.Recorded_Freq;

                        point_measure_fact.Date_ID = Convert.ToDateTime(list_raw_data_dto[j].TIMESTAMP).Date;

                        point_measure_fact.External_ID = list_raw_data_dto[j].ID.ToString();

                        point_measure_fact.Hour_ID = Convert.ToDateTime(list_raw_data_dto[j].TIMESTAMP.Value.ToString("yyyy-MM-dd HH:") + "00"); // 07/05/2015 11:00

                        point_measure_fact.Last_Update_Time = System.DateTime.Now;
                        point_measure_fact.Max_Value = element.Max_Value;
                        point_measure_fact.Min_Value = element.Min_Value;
                        point_measure_fact.Point_ID = element.ID;
                        point_measure_fact.Schedule_ID = 0;
                        point_measure_fact.Timestamp_From = Convert.ToDateTime(list_raw_data_dto[j].TIMESTAMP);

                        if (j + 1 < list_raw_data_dto.Count)
                            point_measure_fact.Timestamp_To = Convert.ToDateTime(list_raw_data_dto[j + 1].TIMESTAMP);
                        else
                            point_measure_fact.Timestamp_To = Convert.ToDateTime(list_raw_data_dto[j].TIMESTAMP);

                        point_measure_fact.Unit_Of_Measurement = element.Unit.Unit_Name;
                        point_measure_fact.Raw_Value = Convert.ToDouble(list_raw_data_dto[j].VALUE);
                        point_measure_fact.Point_Status = list_raw_data_dto[j].STATUS_TAG;
                        //Iterpolation method check the spikes or wrong value
                      //  point_measure_fact.Value = Interpolation.InterPolateValue(list_raw_data_dto[j], element, point_measure_fact);

                        if (element.Value_Type == DataValueType.Totalised)
                        {
                            point_measure_fact.Value = Convert.ToDouble(list_raw_data_dto[j].VAL);
                        }
                        else
                        {
                            point_measure_fact.Value = Convert.ToDouble(list_raw_data_dto[j].VALUE);
                        }

                        point_measure_facts.Add(point_measure_fact);

                    }
                    catch (Exception ex)
                    {
                        Helper.WriteToFile("Error in Point mesaure fact service " + ex.Message + "-- Point Id " + element.ID);
                    }
                }
                return point_measure_facts;
            }
            catch (Exception ex)
            {
                throw ex;
            }

        }




        public IList<Point_Measure_Fact> Get_Point_Measure_Fact_By_Element_ID(long Element_ID)
        {
            //good_status_code check the status of the data, updating from Interpolation
            datawarehousecontext = new InnonAnalyticsWarehouseEntities();
            IList<Point_Measure_Fact> point_measure_facts = new List<Point_Measure_Fact>();
            point_measure_facts = datawarehousecontext.Point_Measure_Fact.Where(z => z.Point_ID == Element_ID
                && z.Point_Status == Interpolation.good_status_code
                ).OrderBy(point => point.Timestamp_From).ToList();
            return point_measure_facts;
        }

        public IList<Point_Measure_Fact> Get_Point_Measure_Fact_By_Element_ID_From_Date(long Element_ID, DateTime From_Date)
        {

            //good_status_code check the status of the data, updating from Interpolation           

            datawarehousecontext = new InnonAnalyticsWarehouseEntities();
            IList<Point_Measure_Fact> point_measure_facts = new List<Point_Measure_Fact>();
            point_measure_facts = datawarehousecontext.Point_Measure_Fact.Where(z => z.Point_ID == Element_ID 
                && z.Timestamp_From > From_Date 
                && z.Point_Status == Interpolation.good_status_code).OrderBy(point => point.Timestamp_From).ToList();
            return point_measure_facts;
        }
    }
}
