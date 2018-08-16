using InnonAnalytics.Common.Enums;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Common
{
    public class Unit_Convertion
    {
        /// <summary>
        /// 
        /// </summary>
        /// <param name="value"></param>
        /// <param name="actualUnit">The data is save in the warehouse with this unit</param>
        /// <param name="convertedunit">Convert the actualunit into this unit, return with this unit</param>
        /// <returns></returns>
        public static double Conversion(double value, string actualUnit, string convertedUnit)
        {
            UnitConvertion _actual_unit, _convertedunit;

            if (Enum.TryParse(actualUnit, out _actual_unit) && Enum.TryParse(convertedUnit, out _convertedunit))
            {
                if(_actual_unit == UnitConvertion.cubic_meter && _convertedunit == UnitConvertion.kilowatt_hour)
                {
                    Cubic_Meter_To_KiloWattHour_Conversion(ref value);
                }
                else if (_actual_unit == UnitConvertion.liter && _convertedunit == UnitConvertion.kilowatt_hour)
                {
                    liter_To_KiloWattHour_Conversion(ref value);
                }
            }
            else
            {
                Helper.WriteToFile(string.Format("{3}, Unit conversion, class Unit_Convertion, project Common parameters value ={0}, actualUnit={1}, convertedUnit={2}", value, actualUnit, convertedUnit, System.DateTime.Now));
            }

            return value;
        }

        /// <summary>
        /// 1 cubic meter of gas = 11.16382 kWh
        /// Convert cubic meter to kwh
        /// </summary>
        /// <param name="value"></param>
        public static void Cubic_Meter_To_KiloWattHour_Conversion( ref double value)
        {
            value=value * 11.16382;
        }

        /// <summary>
        /// 1 litre of oil = 12.2 kWh
        /// convert liter to kwh
        /// </summary>
        /// <param name="value"></param>
        /// <returns></returns>
        public static void liter_To_KiloWattHour_Conversion(ref double value)
        {
            value = value * 12.2;
        }
    }
}
