using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Common.Enums
{


    /// <summary>
    /// This is for the Obix point enum
    /// </summary>
    public enum Obix_Point_Enum
    {
        Auto = 0,
        ON = 1,
        OFF = 2
    }

    

    //public enum Obix_Data_Type
    //{
    //    "bool" =1,
    //    "real"=2,
    //    "enum" =3
    //}

    /// <summary>
    /// This enum is for the DiscoveryPoint_DTO to check weather the row in treelist is connection or data point.
    /// </summary>
    public enum DiscoverPoint_Type
    {
        Connection=1,
        Point=2
    }

    public enum AdminAuthorization
    {
        Admin
    }

    public enum UnitConvertion
    {
        kilowatt_hour,
        cubic_meter,
        liter,
        Tonnes_co2_hundred_cubic_meter
    }


    public enum LoggingActions
    {
        Error = 1,
        Warning = 2,
        Info = 3,
        Fatal = 4

    }

    public enum DashboardType
    {
        Folder = 1,
        Dashboard = 2
    }

    /// <summary>
    /// Please don not change the value
    /// </summary>
    public enum TimeLine
    {
        None = 1,
        Custom_Date = 2,
        Today = 3,
        Yesterday = 4,
        WeekToDate = 5,
        LastWeek = 6,
        Last7Days = 7,
        MonthToDate = 8,
        LastMonth = 9,
        YearToDate = 10,
        LastYear = 11,
        Last24hours = 12,

    }

    public enum ValueTypeForAttribute
    {
        Text,
        DropDownList

    }

    public enum FTPMode
    {
        Passive,
        Active
    }

    public enum DataBaseType
    {
        MICROSOFTSQLSERVER,
        MySql,
        Oracle
    }

    public enum DataSouceConnectionType
    {

        FTP = 1,
        Database = 2,
        API = 3,
        Live = 4
    }

    public enum DataGatewayType
    {

        Obix=1,
        Cylon=2,
        Eict=3
    }

    public enum ElementType
    {
        Live, History
    }


    /// <summary>
    /// This for the point/element to calculate data, please do not change the number value
    /// </summary>
    public enum DataValueType
    {
        Instant=1,
        Totalised = 2
    }
   


    /// <summary>
    /// This enum use fro the tag "dataFreq"
    /// </summary>
    public enum ElementDataFreq
    {
        EverySecond=1, EveryMinute=60  
    }



    /// <summary>
    /// Connection Status 
    /// </summary>
    public enum ConnectionStatus
    {
        OK = 1,
        DOWN = 0
    }

   
    /// <summary>
    ///  //The primary structure of the Haystack model is based on a hierarchy of three entities and extended (which is not in the haystake)
    ///  http://project-haystack.org/doc/Structure
    /// </summary>
    public enum TagType
    {
        //when add or delete any thing please update the tblTag_Type_Mapping accordingly
        //Please do not change the sequence of the TagType enums and value number
        site = 1,
        equip = 2,
        point = 3,
        extendedpoint = 4, // Extended Point is not belongs to haystake, this our extended Tag type
        department = 5,
        floor = 6,
        utilities = 7,
        zone = 8,

        meterpanel = 9,
        genSide = 10,
        meterlocation = 11,
        energy = 12,
        jace = 13,
        consumer = 14,
        subdepartment = 15,
        client = 16,
        city = 17,
        country = 18,
        genEquip = 19,

    }

   public enum MetricType
   {
       System = 1,
       User = 2
   }

    public enum TagKind
    {
        Marker=1,
        Ref=2,
        Str=3,
        Obj=4,
        Coord=5,
        Number=6
    }

    public enum Data_Formate
    {
        Alarm = 1,
        Analog = 2,
        Digital = 3,
        Integer = 4
    }

    public enum Time_Unit
    {
        sec ,
        min ,
        hr ,
        day
    }

    /// <summary>
    /// 
    /// </summary>
    public enum ChartType
    {
        //Please do not change the sequence of the ChartType enums and value number
        //Area = 1,
        Bar = 2,
        //  Box Plot =3 ,
        //Bubble = 4,
        //Bullet = 5,
        Donut = 6,
        //Funnel = 7,
        Line = 8,
        Pie = 9,
        //Polar = 10,
        //Radar = 11,
        // Range Bar =12 ,
        //Scatter = 13,
        //Sparklines =14,
        Stacked = 15,
        TreeMap = 16,
        //Waterfall = 17,
        //RadialGauge = 18,
        HeatMap = 19,
        Gauge = 20,
        BarFixedPlacement = 21,
        Diagram = 22,
        Counter = 23

    }

    public enum Rollup_Function_Option
    {
        SUM = 1,
        MIN = 2,
        MAX = 3,
        AVG = 4,
        Cummulative = 5
    }


    

  

    /// <summary>
    /// This enum is used for the dashboards accessibity, eith dashboard is private or shared
    /// </summary>
    public enum Accessibility_Type
    {
        Private = 1,
        Shared = 2
    }

    /// <summary>
    /// This for Enums Extenstion methods
    /// </summary>
    public class Enums
    {
        public static object TryParse(Type enumType, string value, out bool success)
        {
            success = Enum.IsDefined(enumType, value);
            if (success)
            {
                return Enum.Parse(enumType, value);
            }
            return null;
        }

        public static object TryParse(Type enumType, string value)
        {
            if(value == null)
                throw new ArgumentNullException(value);

            bool success = Enum.IsDefined(enumType, value);
            if (success)
            {
                return Enum.Parse(enumType, value);
            }
            throw new Exception("Invalid Enum value " + value) ;
        }
    }


    //Datawahouse
    /// <summary>
    /// Datawahouse aggregation type
    /// </summary>
    public enum AggerationType
    {
        Year = 1,
        Month = 2,
        Day = 3,
        Hour = 4,
        Minute = 5,
        Week = 6
    }
    //End Datwarehouse

   

}
