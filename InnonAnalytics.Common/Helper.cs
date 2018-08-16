using InnonAnalytics.Common.log;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System;
using System.Collections.Generic;
using System.Dynamic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;
using System.Web.Script.Serialization;

namespace InnonAnalytics.Common
{
    public class Helper
    {
        

        public static string ConvertIEnumerableToString(IEnumerable<string> strIenumerable, string delimiter)
        {
            return string.Join(delimiter, strIenumerable);
        }

        public static string ConvertIEnumerableToString(IEnumerable<long> strIenumerable, string delimiter)
        {
            return string.Join(delimiter, strIenumerable);
        }

        public static List<string> GetTypeCodes()
        {
            List<string> objString = new List<string>();
            string[] typeOfArray = { "Int32", "String", "DateTime" };



            foreach (var objType in Enum.GetNames(typeof(System.TypeCode)))
            {
                if (typeOfArray.Contains(objType.ToString()))
                {
                    objString.Add(objType.ToString());
                }

            }

            return objString;
        }

        #region Unit of measurement

        /// <summary>
        /// Unit Json also save in the common project file 'unit.json'
        /// </summary>
        private static string unit
        {
            get { return @"{'Units':[{'UnitBaseName':'-- dimensionless --','Unit':[{'UnitName':'percent','UnitSymbol':'%'},{'UnitName':'pixel','UnitSymbol':'px'},{'UnitName':'decibel','UnitSymbol':'db'},{'UnitName':'power_factor','UnitSymbol':'pf'},{'UnitName':'percent_relative_humidity','UnitSymbol':'%RH'},{'UnitName':'grams_of_water_per_kilogram_dry_air','UnitSymbol':'gH2O/kgAir'},{'UnitName':'volts_per_degree_kelvin','UnitSymbol':'V/K'},{'UnitName':'degree_days_celsius','UnitSymbol':'°daysC'},{'UnitName':'degree_days_fahrenheit','UnitSymbol':'°daysF'},{'UnitName':'percent_obscuration_per_foot','UnitSymbol':'%obsc/ft'},{'UnitName':'percent_obscuration_per_meter','UnitSymbol':'%obsc/m'},{'UnitName':'psi_per_degree_fahrenheit','UnitSymbol':'psi/°F'},{'UnitName':'square_meters_per_newton','UnitSymbol':'m²/N'},{'UnitName':'watts_per_square_meter_degree_kelvin','UnitSymbol':'W/m²K'},{'UnitName':'ampere_square_meter','UnitSymbol':'Am²'},{'UnitName':'db_milliVolt','UnitSymbol':'dBmV'},{'UnitName':'db_microVolt','UnitSymbol':'dBuV'},{'UnitName':'parts_per_unit','UnitSymbol':'ppu'},{'UnitName':'parts_per_million','UnitSymbol':'ppm'},{'UnitName':'parts_per_billion','UnitSymbol':'ppb'},{'UnitName':'grams_per_kilogram','UnitSymbol':'g/kg'},{'UnitName':'radian','UnitSymbol':'rad'},{'UnitName':'degrees_angular','UnitSymbol':'deg'},{'UnitName':'degrees_phase','UnitSymbol':'degPh'},{'UnitName':'steradian','UnitSymbol':'sr'},{'UnitName':'nephelometric_turbidity_units','UnitSymbol':'ntu'},{'UnitName':'formazin_nephelometric_unit','UnitSymbol':'fnu'},{'UnitName':'power_usage_effectiveness','UnitSymbol':'PUE'},{'UnitName':'data_center_infrastructure_efficiency','UnitSymbol':'DCIE'},]},{'UnitBaseName':'-- currency --','Unit':[{'UnitName':'australian_dollar','UnitSymbol':'AUD'},{'UnitName':'british_pound','UnitSymbol':'GBP|£'},{'UnitName':'canadian_dollar','UnitSymbol':'CAD'},{'UnitName':'chinese_yuan','UnitSymbol':'CNY|?'},{'UnitName':'euro','UnitSymbol':'EUR|€'},{'UnitName':'indian_rupee','UnitSymbol':'INR'},{'UnitName':'japanese_yen','UnitSymbol':'JPY|¥'},{'UnitName':'russian_ruble','UnitSymbol':'RUB|???'},{'UnitName':'south_korean_won','UnitSymbol':'KRW|?'},{'UnitName':'swedish_krona','UnitSymbol':'SEK|kr'},{'UnitName':'swiss_franc','UnitSymbol':'CHF|Fr'},{'UnitName':'taiwan_dollar','UnitSymbol':'TWD'},{'UnitName':'us_dollar','UnitSymbol':'USD|$'},]},{'UnitBaseName':'-- acceleration --','Unit':[{'UnitName':'meters_per_second_squared','UnitSymbol':'m/s²'},]},{'UnitBaseName':'-- angular acceleration --','Unit':[{'UnitName':'radians_per_second_squared','UnitSymbol':'rad/s²'},]},{'UnitBaseName':'-- angular momentum --','Unit':[{'UnitName':'joule_second','UnitSymbol':'Js'},]},{'UnitBaseName':'-- angular velocity --','Unit':[{'UnitName':'radians_per_second','UnitSymbol':'rad/s'},{'UnitName':'revolutions_per_minute','UnitSymbol':'rpm'},]},{'UnitBaseName':'-- area --','Unit':[{'UnitName':'square_meter','UnitSymbol':'m²'},{'UnitName':'square_millimeter','UnitSymbol':'mm²'},{'UnitName':'square_centimeter','UnitSymbol':'cm²'},{'UnitName':'square_kilometer','UnitSymbol':'km²'},{'UnitName':'square_inch','UnitSymbol':'in²'},{'UnitName':'square_foot','UnitSymbol':'ft²'},{'UnitName':'square_yard','UnitSymbol':'yd²'},{'UnitName':'square_mile','UnitSymbol':'mile²'},]},{'UnitBaseName':'-- capacitance --','Unit':[{'UnitName':'farad','UnitSymbol':'F'},]},{'UnitBaseName':'-- cooling efficiency --','Unit':[{'UnitName':'coefficient_of_performance','UnitSymbol':'COP'},{'UnitName':'kilowatt_per_ton','UnitSymbol':'kW/ton'},{'UnitName':'energy_efficiency_ratio','UnitSymbol':'Btu/Wh|EER'},]},{'UnitBaseName':'-- density --','Unit':[{'UnitName':'kilograms_per_cubic_meter','UnitSymbol':'kg/m³'},]},{'UnitBaseName':'-- electric charge --','Unit':[{'UnitName':'coulomb','UnitSymbol':'C'},]},{'UnitBaseName':'-- electric conductance --','Unit':[{'UnitName':'siemens','UnitSymbol':'S'},]},{'UnitBaseName':'-- electric current --','Unit':[{'UnitName':'ampere','UnitSymbol':'A'},{'UnitName':'milliampere','UnitSymbol':'mA'},]},{'UnitBaseName':'-- electric current density --','Unit':[{'UnitName':'amperes_per_square_meter','UnitSymbol':'A/m²'},]},{'UnitBaseName':'-- electric field strength --','Unit':[{'UnitName':'volts_per_meter','UnitSymbol':'V/m'},]},{'UnitBaseName':'-- electric potential --','Unit':[{'UnitName':'Volt','UnitSymbol':'V'},{'UnitName':'milliVolt','UnitSymbol':'mV'},{'UnitName':'kiloVolt','UnitSymbol':'kV'},{'UnitName':'megaVolt','UnitSymbol':'MV'},]},{'UnitBaseName':'-- electric resistance --','Unit':[{'UnitName':'ohm','UnitSymbol':'O|?'},{'UnitName':'kilohm','UnitSymbol':'kO|k?'},{'UnitName':'megohm','UnitSymbol':'MO|M?'},{'UnitName':'milliohm','UnitSymbol':'mO|m?'},]},{'UnitBaseName':'-- electrical conductivity --','Unit':[{'UnitName':'siemens_per_meter','UnitSymbol':'S/m'},]},{'UnitBaseName':'-- electrical resistivity --','Unit':[{'UnitName':'ohm_meter','UnitSymbol':'Om|?m'},]},{'UnitBaseName':'-- energy --','Unit':[{'UnitName':'joule','UnitSymbol':'J'},{'UnitName':'kilojoule','UnitSymbol':'kJ'},{'UnitName':'watt_hour','UnitSymbol':'Wh'},{'UnitName':'kilowatt_hour','UnitSymbol':'kWh'},{'UnitName':'megawatt_hour','UnitSymbol':'MWh'},{'UnitName':'btu','UnitSymbol':'BTU'},{'UnitName':'kilobtu','UnitSymbol':'kBTU'},{'UnitName':'megabtu','UnitSymbol':'MBTU|MMBTU'},{'UnitName':'horsepower_hour','UnitSymbol':'hph'},{'UnitName':'calorie','UnitSymbol':'cal'},{'UnitName':'tons_refrigeration_hour','UnitSymbol':'tonrefh'},{'UnitName':'megajoule','UnitSymbol':'MJ'},{'UnitName':'gigajoule','UnitSymbol':'GJ'},{'UnitName':'newton_meter','UnitSymbol':'Nm'},{'UnitName':'cubic_meters_natural_gas','UnitSymbol':'m³_gas'},{'UnitName':'cubic_feet_natural_gas','UnitSymbol':'ft³_gas'},]},{'UnitBaseName':'-- apparent energy --','Unit':[{'UnitName':'volt_ampere_hour','UnitSymbol':'VAh'},{'UnitName':'kilovolt_ampere_hour','UnitSymbol':'kVAh'},{'UnitName':'megavolt_ampere_hour','UnitSymbol':'MVAh'},]},{'UnitBaseName':'-- reactive energy --','Unit':[{'UnitName':'volt_ampere_reactive_hour','UnitSymbol':'VARh'},{'UnitName':'kilovolt_ampere_reactive_hour','UnitSymbol':'kVARh'},{'UnitName':'megavolt_ampere_reactive_hour','UnitSymbol':'MVARh'},]},{'UnitBaseName':'-- energy by area --','Unit':[{'UnitName':'joules_per_square_meter','UnitSymbol':'J/m²'},{'UnitName':'kilowatt_hours_per_square_meter','UnitSymbol':'kWh/m²'},{'UnitName':'kilowatt_hours_per_square_foot','UnitSymbol':'kWh/ft²'},{'UnitName':'megajoules_per_square_meter','UnitSymbol':'MJ/m²'},{'UnitName':'megajoules_per_square_foot','UnitSymbol':'MJ/ft²'},{'UnitName':'kilobtu_per_square_foot','UnitSymbol':'kBTU/ft²'},{'UnitName':'megabtu_per_square_foot','UnitSymbol':'MBTU/ft²'},]},{'UnitBaseName':'-- enthalpy --','Unit':[{'UnitName':'joules_per_gram','UnitSymbol':'J/g'},{'UnitName':'joules_per_kilogram','UnitSymbol':'J/kg'},{'UnitName':'joules_per_kilogram_dry_air','UnitSymbol':'J/kg_dry'},{'UnitName':'btu_per_pound','UnitSymbol':'BTU/lb'},{'UnitName':'btus_per_pound_dry_air','UnitSymbol':'btu/lb_dry'},{'UnitName':'kilojoules_per_kilogram','UnitSymbol':'kJ/kg'},{'UnitName':'kilojoules_per_kilogram_dry_air','UnitSymbol':'kJ/kg_dry'},{'UnitName':'megajoules_per_kilogram_dry_air','UnitSymbol':'MJ/kg_dry'},{'UnitName':'calorie_per_gram','UnitSymbol':'cal/g'},]},{'UnitBaseName':'-- entropy --','Unit':[{'UnitName':'joules_per_degree_kelvin','UnitSymbol':'J/°K'},{'UnitName':'kilojoules_per_degree_kelvin','UnitSymbol':'kJ/°K'},{'UnitName':'megajoules_per_degree_kelvin','UnitSymbol':'MJ/°K'},]},{'UnitBaseName':'-- force --','Unit':[{'UnitName':'newton','UnitSymbol':'N'},{'UnitName':'pound_force','UnitSymbol':'lbf'},]},{'UnitBaseName':'-- frequency --','Unit':[{'UnitName':'hertz','UnitSymbol':'Hz'},{'UnitName':'kilohertz','UnitSymbol':'kHz'},{'UnitName':'cycles_per_hour','UnitSymbol':'cph'},{'UnitName':'cycles_per_minute','UnitSymbol':'cpm'},{'UnitName':'megahertz','UnitSymbol':'MHz'},{'UnitName':'per_minute','UnitSymbol':'/min'},{'UnitName':'per_second','UnitSymbol':'/s'},{'UnitName':'per_hour','UnitSymbol':'/h'},{'UnitName':'percent_per_second','UnitSymbol':'%/s'},]},{'UnitBaseName':'-- grammage --','Unit':[{'UnitName':'kilograms_per_square_meter','UnitSymbol':'kg/m²'},{'UnitName':'grams_per_square_meter','UnitSymbol':'g/m²'},]},{'UnitBaseName':'-- heating rate --','Unit':[{'UnitName':'degrees_kelvin_per_second','UnitSymbol':'K/s'},{'UnitName':'degrees_celsius_per_hour','UnitSymbol':'°C/h'},{'UnitName':'degrees_celsius_per_minute','UnitSymbol':'°C/min'},{'UnitName':'degrees_fahrenheit_per_hour','UnitSymbol':'°F/h'},{'UnitName':'degrees_fahrenheit_per_minute','UnitSymbol':'°F/min'},{'UnitName':'degrees_kelvin_per_hour','UnitSymbol':'K/h'},{'UnitName':'degrees_kelvin_per_minute','UnitSymbol':'K/min'},]},{'UnitBaseName':'-- illuminance --','Unit':[{'UnitName':'lux','UnitSymbol':'lx'},{'UnitName':'candelas_per_square_meter','UnitSymbol':'cd/m²'},]},{'UnitBaseName':'-- inductance --','Unit':[{'UnitName':'henry','UnitSymbol':'H'},]},{'UnitBaseName':'-- irradiance --','Unit':[{'UnitName':'watts_per_square_meter_irradiance','UnitSymbol':'W/m²_irr'},{'UnitName':'watts_per_square_foot_irradiance','UnitSymbol':'W/ft²_irr'},]},{'UnitBaseName':'-- length --','Unit':[{'UnitName':'meter','UnitSymbol':'m'},{'UnitName':'micrometer','UnitSymbol':'um'},{'UnitName':'millimeter','UnitSymbol':'mm'},{'UnitName':'centimeter','UnitSymbol':'cm'},{'UnitName':'kilometer','UnitSymbol':'km'},{'UnitName':'inch','UnitSymbol':'in'},{'UnitName':'foot','UnitSymbol':'ft'},{'UnitName':'yard','UnitSymbol':'yd'},]},{'UnitBaseName':'-- luminescence --','Unit':[{'UnitName':'candela','UnitSymbol':'cd'},{'UnitName':'footcandle','UnitSymbol':'ftcd'},]},{'UnitBaseName':'-- luminous flux --','Unit':[{'UnitName':'lumen','UnitSymbol':'lm'},]},{'UnitBaseName':'-- magnetic field strength --','Unit':[{'UnitName':'amperes_per_meter','UnitSymbol':'A/m'},]},{'UnitBaseName':'-- magnetic flux --','Unit':[{'UnitName':'weber','UnitSymbol':'Wb'},]},{'UnitBaseName':'-- magnetic flux density --','Unit':[{'UnitName':'tesla','UnitSymbol':'T'},]},{'UnitBaseName':'-- mass --','Unit':[{'UnitName':'kilogram','UnitSymbol':'kg'},{'UnitName':'milligram','UnitSymbol':'mg'},{'UnitName':'gram','UnitSymbol':'g'},{'UnitName':'ounce','UnitSymbol':'oz'},{'UnitName':'pound','UnitSymbol':'lb'},{'UnitName':'kilopound','UnitSymbol':'klb'},{'UnitName':'metric_ton','UnitSymbol':'ton'},{'UnitName':'short_ton','UnitSymbol':'t'},]},{'UnitBaseName':'-- mass flow --','Unit':[{'UnitName':'kilograms_per_second','UnitSymbol':'kg/s'},{'UnitName':'kilograms_per_minute','UnitSymbol':'kg/min'},{'UnitName':'kilograms_per_hour','UnitSymbol':'kg/h'},{'UnitName':'pounds_per_minute','UnitSymbol':'lb/min'},{'UnitName':'pounds_per_hour','UnitSymbol':'lb/h'},{'UnitName':'pounds_per_second','UnitSymbol':'lb/s'},{'UnitName':'kilopounds_per_hour','UnitSymbol':'klb/h'},{'UnitName':'grams_per_second','UnitSymbol':'g/s'},{'UnitName':'grams_per_minute','UnitSymbol':'g/min'},{'UnitName':'metric_tons_per_hour','UnitSymbol':'ton/h'},]},{'UnitBaseName':'-- momentum --','Unit':[{'UnitName':'newton_second','UnitSymbol':'Ns'},]},{'UnitBaseName':'-- power --','Unit':[{'UnitName':'watt','UnitSymbol':'W'},{'UnitName':'milliwatt','UnitSymbol':'mW'},{'UnitName':'kilowatt','UnitSymbol':'kW'},{'UnitName':'megawatt','UnitSymbol':'MW'},{'UnitName':'gigawatt','UnitSymbol':'GW'},{'UnitName':'btus_per_hour','UnitSymbol':'BTU/h'},{'UnitName':'therms_per_hour','UnitSymbol':'therm/h'},{'UnitName':'horsepower','UnitSymbol':'hp'},{'UnitName':'foot_pounds_per_second','UnitSymbol':'ftlbs/sec'},{'UnitName':'tons_refrigeration','UnitSymbol':'tonref'},{'UnitName':'kilobtus_per_hour','UnitSymbol':'kBTU/h'},{'UnitName':'megabtus_per_hour','UnitSymbol':'MBTU/h|MMBTU/h'},{'UnitName':'joules_per_hour','UnitSymbol':'J/h'},{'UnitName':'kilojoules_per_hour','UnitSymbol':'kJ/h'},{'UnitName':'megajoules_per_hour','UnitSymbol':'MJ/h'},]},{'UnitBaseName':'-- power by area --','Unit':[{'UnitName':'watts_per_square_meter','UnitSymbol':'W/m²'},{'UnitName':'watts_per_square_foot','UnitSymbol':'W/ft²'},{'UnitName':'kilowatts_per_square_meter','UnitSymbol':'kW/m²'},{'UnitName':'kilowatts_per_square_foot','UnitSymbol':'kW/ft²'},{'UnitName':'kilobtus_per_hour_per_square_foot','UnitSymbol':'kBTU/h/ft²'},]},{'UnitBaseName':'-- power by volumetric flow --','Unit':[{'UnitName':'watts_per_cubic_meters_per_second','UnitSymbol':'W/m³/s'},{'UnitName':'watts_per_cubic_feet_per_minute','UnitSymbol':'W/cfm'},{'UnitName':'kilowatts_per_kilocubic_feet_per_minute','UnitSymbol':'kW/kcfm'},{'UnitName':'kilowatts_per_gallons_per_minute','UnitSymbol':'kW/gal/min'},]},{'UnitBaseName':'-- apparent power --','Unit':[{'UnitName':'volt_ampere','UnitSymbol':'VA'},{'UnitName':'kilovolt_ampere','UnitSymbol':'kVA'},{'UnitName':'megavolt_ampere','UnitSymbol':'mVA'},]},{'UnitBaseName':'-- reactive power --','Unit':[{'UnitName':'volt_ampere_reactive','UnitSymbol':'VAR'},{'UnitName':'kilovolt_ampere_reactive','UnitSymbol':'kVAR'},{'UnitName':'megavolt_ampere_reactive','UnitSymbol':'MVAR'},]},{'UnitBaseName':'-- pressure --','Unit':[{'UnitName':'pascal','UnitSymbol':'Pa'},{'UnitName':'kilopascal','UnitSymbol':'kPa'},{'UnitName':'atmosphere','UnitSymbol':'atm'},{'UnitName':'pounds_per_square_inch','UnitSymbol':'psi'},{'UnitName':'centimeters_of_water','UnitSymbol':'cmH2O'},{'UnitName':'inches_of_water','UnitSymbol':'inH2O'},{'UnitName':'millimeters_of_mercury','UnitSymbol':'mmHg'},{'UnitName':'centimeters_of_mercury','UnitSymbol':'cmHg'},{'UnitName':'inches_of_mercury','UnitSymbol':'inHg'},{'UnitName':'hectopascal','UnitSymbol':'hPa'},{'UnitName':'millibar','UnitSymbol':'mbar'},]},{'UnitBaseName':'-- specific entropy --','Unit':[{'UnitName':'joules_per_kilogram_degree_kelvin','UnitSymbol':'J/kg°K'},]},{'UnitBaseName':'-- surface tension --','Unit':[{'UnitName':'newtons_per_meter','UnitSymbol':'N/m'},]},{'UnitBaseName':'-- temperature --','Unit':[{'UnitName':'fahrenheit','UnitSymbol':'°F'},{'UnitName':'celsius','UnitSymbol':'°C'},{'UnitName':'kelvin','UnitSymbol':'K'},]},{'UnitBaseName':'-- temperature differential --','Unit':[{'UnitName':'fahrenheit_degrees','UnitSymbol':'?°F'},{'UnitName':'celsius_degrees','UnitSymbol':'?°C'},{'UnitName':'kelvin_degrees','UnitSymbol':'?K'},]},{'UnitBaseName':'-- thermal conductivity --','Unit':[{'UnitName':'watts_per_meter_degree_kelvin','UnitSymbol':'W/m°K'},]},{'UnitBaseName':'-- time --','Unit':[{'UnitName':'nanosecond','UnitSymbol':'ns'},{'UnitName':'microsecond','UnitSymbol':'us'},{'UnitName':'millisecond','UnitSymbol':'ms'},{'UnitName':'hundredths_second','UnitSymbol':'cs'},{'UnitName':'tenths_second','UnitSymbol':'ds'},{'UnitName':'second','UnitSymbol':'sec|s'},{'UnitName':'minute','UnitSymbol':'min'},{'UnitName':'hour','UnitSymbol':'hr|h'},{'UnitName':'week','UnitSymbol':'wk'},{'UnitName':'julian_month','UnitSymbol':'mo'},{'UnitName':'year','UnitSymbol':'yr'},]},{'UnitBaseName':'-- velocity --','Unit':[{'UnitName':'meters_per_second','UnitSymbol':'m/s'},{'UnitName':'kilometers_per_second','UnitSymbol':'km/s'},{'UnitName':'kilometers_per_hour','UnitSymbol':'km/h'},{'UnitName':'miles_per_hour','UnitSymbol':'mph'},{'UnitName':'feet_per_second','UnitSymbol':'ft/s'},{'UnitName':'feet_per_minute','UnitSymbol':'ft/min'},{'UnitName':'millimeters_per_second','UnitSymbol':'mm/s'},{'UnitName':'millimeters_per_minute','UnitSymbol':'mm/min'},{'UnitName':'meters_per_minute','UnitSymbol':'m/min'},{'UnitName':'meters_per_hour','UnitSymbol':'m/h'},]},{'UnitBaseName':'-- volume --','Unit':[{'UnitName':'cubic_meter','UnitSymbol':'m³'},{'UnitName':'cubic_millimeter','UnitSymbol':'mm³'},{'UnitName':'cubic_centimeter','UnitSymbol':'cm³'},{'UnitName':'milliliter','UnitSymbol':'mL'},{'UnitName':'liter','UnitSymbol':'L'},{'UnitName':'kiloliter','UnitSymbol':'kL'},{'UnitName':'cubic_inch','UnitSymbol':'in³'},{'UnitName':'cubic_foot','UnitSymbol':'ft³'},{'UnitName':'cubic_yard','UnitSymbol':'yd³'},{'UnitName':'gallon','UnitSymbol':'gal'},{'UnitName':'kilogallon','UnitSymbol':'kgal'},{'UnitName':'quart','UnitSymbol':'qt'},{'UnitName':'pint','UnitSymbol':'pt'},{'UnitName':'fluid_ounce','UnitSymbol':'fl_oz'},{'UnitName':'imperial_gallon','UnitSymbol':'galUK'},]},{'UnitBaseName':'-- volumetric flow --','Unit':[{'UnitName':'cubic_meters_per_second','UnitSymbol':'m³/s'},{'UnitName':'milliliters_per_second','UnitSymbol':'mL/s'},{'UnitName':'liters_per_second','UnitSymbol':'L/s'},{'UnitName':'cubic_feet_per_second','UnitSymbol':'cfs'},{'UnitName':'cubic_feet_per_minute','UnitSymbol':'cfm'},{'UnitName':'cubic_feet_per_hour','UnitSymbol':'cfh'},{'UnitName':'kilocubic_feet_per_minute','UnitSymbol':'kcfm'},{'UnitName':'imperial_gallons_per_minute','UnitSymbol':'galUK/min'},{'UnitName':'liters_per_minute','UnitSymbol':'L/min'},{'UnitName':'gallons_per_minute','UnitSymbol':'gal/min'},{'UnitName':'liters_per_hour','UnitSymbol':'L/h'},{'UnitName':'cubic_meters_per_minute','UnitSymbol':'m³/min'},{'UnitName':'cubic_meters_per_hour','UnitSymbol':'m³/h'},]},{'UnitBaseName':'-- bytes --','Unit':[{'UnitName':'kilobyte','UnitSymbol':'kB'},{'UnitName':'megabyte','UnitSymbol':'MB'},{'UnitName':'gigabyte','UnitSymbol':'GB'},{'UnitName':'terabyte','UnitSymbol':'TB'},{'UnitName':'petabyte','UnitSymbol':'PB'},]}]}"; }
        }

        public static UnitBase GetUnits()
        {
            UnitBase objUnitBase = JsonConvert.DeserializeObject<UnitBase>(Helper.unit);
            return objUnitBase;
        }


        public class UnitBase
        {
            public UnitBase()
            {
                Units = new List<lUnits>();
            }
            public IList<lUnits> Units { get; set; }
        }

        public class lUnits
        {

            public lUnits()
            {
                Unit = new List<UnitsProperty>();
            }

            public string UnitBaseName { get; set; }

            public IList<UnitsProperty> Unit { get; set; }

        }

        public class UnitsProperty
        {

            public string UnitName { get; set; }
            public string UnitSymbol { get; set; }

        }

        #endregion


        #region convert class to json
        /// <summary>
        /// This is speical method to convert the class object into json.
        /// </summary>
        /// <param name="obj"></param>
        /// <returns>json string</returns>
        public static string Convert_Object_To_Json(object obj)
        {
            return JsonConvert.SerializeObject(obj, Formatting.Indented);
        }
        #endregion

        #region log to file
        public static void WriteToFile(string text)
        {
            try
            {
                string path = "C:\\ms\\Console_Log_DataMigration.txt";
                using (StreamWriter writer = new StreamWriter(path, true))
                {
                    writer.WriteLine(string.Format(text, DateTime.Now.ToString("dd/MM/yyyy hh:mm:ss tt")));
                    writer.Close();
                }

            }
            catch (Exception ex)
            {

            }

        }
        #endregion
        /// <summary>
        /// This is the function to convert the month to last date of the month, If returns null it means the pass parameter is invalid
        /// </summary>
        /// <param name="year_month">Formate for the year_month parameter should be 201501 mean Jan 2015</param>
        public static DateTime? Get_Last_Day_Of_Month(long year_month)
        {

            try
            {
                var newDate = DateTime.ParseExact(year_month.ToString() + " 23:59:59",
                                  "yyyyMM HH:mm:ss",
                                   CultureInfo.InvariantCulture);
                //http://stackoverflow.com/questions/4655143/how-can-i-get-the-last-day-of-the-month-in-c
                return newDate.AddDays(1 - (newDate.Day)).AddMonths(1).AddDays(-1);


            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "passing parameter:- " + year_month);
                throw ex;
            }



        }
        /// <summary>
        /// Monday is the first day of the week, , we are following the Sql server
        /// SELECT DATEADD(wk, DATEDIFF(wk, 7, CURRENT_TIMESTAMP), 7) AS START_OF_WEEK
        /// </summary>
        /// <param name="year"></param>
        /// <param name="weekOfYear"></param>
        /// <returns></returns>
        public static DateTime? FirstDateOfWeekISO8601(long year_week)
        {
            try
            {
                int year, weekOfYear;

                int.TryParse(year_week.ToString().Substring(0, 4), out year);
                int.TryParse(year_week.ToString().Substring(4, 2), out weekOfYear);

                if (weekOfYear < 54 && weekOfYear > 0)
                {
                    DateTime jan1 = new DateTime(year, 1, 1, 23, 59, 59);
                    int daysOffset = DayOfWeek.Thursday - jan1.DayOfWeek;

                    DateTime firstThursday = jan1.AddDays(daysOffset);
                    var cal = CultureInfo.CurrentCulture.Calendar;
                    int firstWeek = cal.GetWeekOfYear(firstThursday, CalendarWeekRule.FirstFourDayWeek, DayOfWeek.Monday);

                    var weekNum = weekOfYear;
                    if (firstWeek <= 1)
                    {
                        weekNum -= 1;
                    }
                    var result = firstThursday.AddDays(weekNum * 7);
                    //Add three day for the first day of the week which will be sunday
                    result = result.AddDays(-3);

                    if (result.DayOfWeek == DayOfWeek.Sunday)
                        return result;
                    else
                        throw new Exception("Invalid week number, Provided Week Number:- " + weekOfYear);
                }
                else
                {
                    throw new Exception("Week number can not greater than 53 and less than 1, Provided Week Number:- " + weekOfYear);
                }

            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "passing parameters " + year_week);
                throw ex;
            }
        }

        /// <summary>
        /// Sunday is the last day fo the week, we are following the Sql server
        /// SELECT DATEADD(wk, DATEDIFF(wk, 6, CURRENT_TIMESTAMP), 6 + 7) AS END_OF_WEEK
        /// </summary>
        /// <param name="year"></param>
        /// <param name="weekOfYear"></param>
        /// <returns></returns>
        public static DateTime? LastDateOfWeekISO8601(long year_week)
        {
            try
            {
                int year, weekOfYear;

                int.TryParse(year_week.ToString().Substring(0, 4), out year);
                int.TryParse(year_week.ToString().Substring(4, 2), out weekOfYear);

                if (weekOfYear < 54 && weekOfYear > 0)
                {
                    DateTime jan1 = new DateTime(year, 1, 1, 23, 59, 59);
                    int daysOffset = DayOfWeek.Thursday - jan1.DayOfWeek;

                    DateTime firstThursday = jan1.AddDays(daysOffset);
                    var cal = CultureInfo.CurrentCulture.Calendar;
                    int firstWeek = cal.GetWeekOfYear(firstThursday, CalendarWeekRule.FirstFourDayWeek, DayOfWeek.Monday);

                    var weekNum = weekOfYear;
                    if (firstWeek <= 1)
                    {
                        weekNum -= 1;
                    }
                    var result = firstThursday.AddDays(weekNum * 7);
                    //Add three day for the last day of the week which will be sunday
                    result = result.AddDays(3);

                    if (result.DayOfWeek == DayOfWeek.Sunday)
                        return result;
                    else
                        throw new Exception("Invalid week number, Provided Week Number:- " + weekOfYear);
                }
                else
                {
                    throw new Exception("Week number can not greater than 53 and less than 1, Provided Week Number:- " + weekOfYear);
                }

            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "passing parameters " + year_week);
                throw ex;
            }
        }

        public static DateTime? Get_Last_Day_Of_Year(long year)
        {
            try
            {
                int _year;
                int.TryParse(year.ToString(), out _year);
                DateTime last_date_of_year = new DateTime(_year, 12, 31, 23, 59, 59);
                return last_date_of_year;
            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "passing parameters " + year);
                throw ex;
            }
        }

        public static DateTime? Get_Last_Hour(DateTime Hour_ID)
        {
            try
            {

                DateTime last_Hour = new DateTime(Hour_ID.Year, Hour_ID.Month, Hour_ID.Day, Hour_ID.Hour, 59, 59);
                return last_Hour;
            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "passing parameters " + Hour_ID);
                throw ex;
            }
        }

        public static DateTime? Get_Last_Day(DateTime Date_ID)
        {
            try
            {

                DateTime last_Date = new DateTime(Date_ID.Year, Date_ID.Month, Date_ID.Day, 23, 59, 59);
                return last_Date;
            }
            catch (Exception ex)
            {
                File_Log.SaveLog_ToFile(ex, Common.Enums.LoggingActions.Error, "passing parameters " + Date_ID);
                throw ex;
            }
        }

        public static long Get_Month_ID(int year, int month)
        {
            long month_id = 0;

            if (month < 10)
            {
                month_id = Convert.ToInt64(year + "0" + month);
            }
            else
            {
                month_id = Convert.ToInt64(year + "" + month);
            }

            return month_id;

        }

        /// <summary>
        /// The result will be something like this:201211 201212 201301 201302
        /// </summary>
        /// <param name="from_date"></param>
        /// <param name="to_date"></param>
        /// <returns></returns>
        public static List<Tuple<int, int, int>> Get_year_month_Between_Two_Date(DateTime from_date, DateTime to_date)
        {
            List<DateTime> datemonth = Enumerable.Range(0, (to_date.Year - from_date.Year) * 12 + (to_date.Month - from_date.Month + 1))
                          .Select(m => new DateTime(from_date.Year, from_date.Month, 1).AddMonths(m)).ToList();

            List<Tuple<int, int, int>> yearmonth = new List<Tuple<int, int, int>>();

            foreach (DateTime x in datemonth)
            {
                //add prefix with zero
                if (x.Month < 10)
                {
                    yearmonth.Add(new Tuple<int, int, int>(int.Parse(x.Year.ToString() + "0" + x.Month.ToString()), x.Year, x.Month));
                }
                else
                {
                    yearmonth.Add(new Tuple<int, int, int>(int.Parse(x.Year.ToString() + x.Month.ToString()), x.Year, x.Month));
                }
            }
            return yearmonth;
        }

        public static List<int> Get_years_Between_Two_Date(DateTime from_date, DateTime to_date)
        {
            List<int> years = new List<int>();
            for (int i = from_date.Year; i <= to_date.Year; i++)
            {
                years.Add(i);
            }
            return years;
        }



        public static IEnumerable<DateTime> GetDateRange(DateTime startDate, DateTime endDate)
        {
            if (endDate < startDate)
                throw new ArgumentException("endDate must be greater than or equal to startDate");

            while (startDate <= endDate)
            {
                yield return startDate;
                startDate = startDate.AddDays(1);
            }
        }
        /// <summary>
        ///  var data = "username=sdhfkjsdf&password=23423423&grant_type=password";
        /// </summary>
        /// <param name="url"></param>
        /// <param name="data"></param>
        /// <param name="httpmethod"></param>
        /// <returns></returns>
        public static string CreatHttpRequest(string url, string data)
        {
            try
            {
                var request = (HttpWebRequest)WebRequest.Create(url);
                var postData = data;
                var Date = Encoding.ASCII.GetBytes(postData);

                request.Timeout = 50000;
                request.Method = "POST";
                request.ContentType = "application/x-www-form-urlencoded";
                request.ContentLength = Date.Length;

                using (var stream = request.GetRequestStream())
                {
                    stream.Write(Date, 0, Date.Length);
                }

                var response = (HttpWebResponse)request.GetResponse();

                var responseString = new StreamReader(response.GetResponseStream()).ReadToEnd();

                return responseString;
            }
            catch(Exception ex)
            {
                throw ex;
            }
           

           
        }
    }

    public static class DoubleExtensions
    {
        public static double ToTwoDecialPlace(this double value)
        {

            return Math.Round(value, 2);
        }
    }

    public static class StringExtensions
    {
        public static string FormatNumber<T>(T number, int maxDecimals = 4)
        {
            return Regex.Replace(String.Format("{0:n" + maxDecimals + "}", number),
                                 @"[" + System.Globalization.NumberFormatInfo.CurrentInfo.NumberDecimalSeparator + "]?0+$", "");
        }   
    }

    
}
