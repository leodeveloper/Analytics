//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated from a template.
//
//     Manual changes to this file may cause unexpected behavior in your application.
//     Manual changes to this file will be overwritten if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel
{
    using System;
    using System.Collections.Generic;
    
    public partial class Point_Agg_Day
    {
        public System.DateTime Date_ID { get; set; }
        public long Point_ID { get; set; }
        public long Client_ID { get; set; }
        public double Avg_Value { get; set; }
        public double Sum_Value { get; set; }
        public double Min_Value { get; set; }
        public double Max_Value { get; set; }
        public double Cum_Value { get; set; }
        public int Day_Count { get; set; }
    }
}