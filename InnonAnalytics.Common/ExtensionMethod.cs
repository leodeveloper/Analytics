using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Web;
using System.Web.Mvc;

namespace InnonAnalytics.Common
{
    public static class ExtensionMethod
    {

        /// <summary>
        /// this is the Extension Method returns the string with first letter uppper
        /// </summary>
        /// <param name="str"></param>
        /// <returns></returns>
        public static string ToUpperFirst(this String str)
        {
            if (String.IsNullOrEmpty(str))
                return String.Empty;

            return str.Substring(0, 1).ToUpper() + str.Substring(1, str.Length - 1).ToLower();
        }


        public static List<SelectListItem> EnumToSelectList(Type enumType)
        {
            return Enum
              .GetValues(enumType)
              .Cast<int>()
              .Select(i => new SelectListItem
              {
                  Value = i.ToString(),
                  Text = Enum.GetName(enumType, i),
              }
              )
              .ToList();
        }


        


        public static T ToType<T>(this String value)
        {
            object parsedValue = default(T);
            try
            {
                parsedValue = Convert.ChangeType(value, typeof(T));
            }
            catch (InvalidCastException)
            {
                parsedValue = null;
            }
            catch (ArgumentException)
            {
                parsedValue = null;
            }
            return (T)parsedValue;
        }
    }
}
