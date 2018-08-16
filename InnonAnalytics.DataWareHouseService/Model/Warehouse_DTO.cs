using InnonAnalytics.Common.Enums;
using InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.DataWareHouseService.Model
{
    public class Warehouse_DTO
    {
        public long Point_ID { get; set; }
        public double Avg_Value { get; set; }
        public double Sum_Value { get; set; }
        public double Min_Value { get; set; }
        public double Max_Value { get; set; }
        public double Cum_Value { get; set; }

        public AggerationType? Aggregation_Type {get;set;}

        public string Aggregation_Type_String { get { return this.Aggregation_Type != null ? this.Aggregation_Type.ToString() : ""; } }

        public int Count { get; set; }

        public string Date_Time { get; set; }

    }

    public class Convert_Aggregate_To_Warehouse_DTO
    {
        public static IList<Warehouse_DTO> Convert(IList<Point_Agg_Hour> pointagghrs)
        {
            IList<Warehouse_DTO> list_warehouse_dto = new List<Warehouse_DTO>(); 
            for (int i = 0; i < pointagghrs.Count(); i++)
            {
                try
                {
                    list_warehouse_dto.Add(Convert(pointagghrs[i]));
                }
                catch { }
                
            }
            return list_warehouse_dto;
        }

        public static Warehouse_DTO Convert(Point_Agg_Hour pointagghr)
        {
            Warehouse_DTO warehouse_dto = new Warehouse_DTO();
            warehouse_dto.Aggregation_Type = AggerationType.Hour;
            warehouse_dto.Avg_Value = pointagghr.Avg_Value;
            warehouse_dto.Count = pointagghr.Hour_Count;
            warehouse_dto.Cum_Value = pointagghr.Cum_Value;
            warehouse_dto.Max_Value = pointagghr.Max_Value;
            warehouse_dto.Min_Value = pointagghr.Min_Value;
            warehouse_dto.Point_ID = pointagghr.Point_ID;
            warehouse_dto.Sum_Value = pointagghr.Sum_Value;
            warehouse_dto.Date_Time = pointagghr.Hour_ID.ToString();
            return warehouse_dto;            
        }
    }
}
