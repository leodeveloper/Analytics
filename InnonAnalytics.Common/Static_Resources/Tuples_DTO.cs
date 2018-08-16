using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Common.Static_Resources
{
    public static class Tuples_DTO
    {

        #region Filter Option
        /// <summary>
        /// he following property is retun the filter by option, for example want to search "Site" "Contains/Is Equal to/etc" "Sainsbury's"
        /// </summary>
        public static List<Tuple<int, string>> Filter_Options { get { return Get_Filter_By_Options(); } }


        /// <summary>
        /// The following function is retun the filter by option, for example want to search "Site" "Contains/Is Equal to/etc" "Sainsbury's"
        /// </summary>
        /// <returns>List<Tuple<int, string>></returns>
        private static List<Tuple<int, string>> Get_Filter_By_Options()
        {
            List<Tuple<int, string>> filter_options = new List<Tuple<int, string>>();
            filter_options.Add(new Tuple<int, string>(1, "Is equal to"));
            filter_options.Add(new Tuple<int, string>(2, "Is not equal to"));
            filter_options.Add(new Tuple<int, string>(3, "Starts with"));
            filter_options.Add(new Tuple<int, string>(4, "Contains"));
            filter_options.Add(new Tuple<int, string>(5, "Does not contain"));
            filter_options.Add(new Tuple<int, string>(6, "Ends with"));

            return filter_options;
        }

        public static string Get_Filter_By_Option_Value(int? filter_option)
        {
            try
            {
                if (filter_option == null)
                    return null;

                if (filter_option > 0)
                    return Filter_Options.SingleOrDefault(t => t.Item1 == filter_option).Item2;
                else
                    return null;
            }
            catch {

                return null;
            
            }

        }
        #endregion

        #region Timeline

        /// <summary>
        /// he following property is retun the timeline by option, 
        /// </summary>
        public static List<Tuple<int, string>> Timeline_Options { get { return Get_Timeline_Options(); } }


        /// <summary>
        /// The following function is retun the timeline by option, 
        /// </summary>
        /// <returns>List<Tuple<int, string>></returns>
        private static List<Tuple<int, string>> Get_Timeline_Options()
        {
            List<Tuple<int, string>> timeline_options = new List<Tuple<int, string>>();
            timeline_options.Add(new Tuple<int, string>(0, "Custom"));
            timeline_options.Add(new Tuple<int, string>(1, "Today"));
            timeline_options.Add(new Tuple<int, string>(2, "Last 24 hr"));
            timeline_options.Add(new Tuple<int, string>(3, "Yesterday"));
            timeline_options.Add(new Tuple<int, string>(4, "Week to date"));
            timeline_options.Add(new Tuple<int, string>(5, "Last week"));
            timeline_options.Add(new Tuple<int, string>(6, "Month to date"));
            timeline_options.Add(new Tuple<int, string>(7, "Last month"));
            timeline_options.Add(new Tuple<int, string>(8, "Month to date"));
            timeline_options.Add(new Tuple<int, string>(9, "Year to date"));
            timeline_options.Add(new Tuple<int, string>(10, "Last year"));
            //timeline_options.Add(new Tuple<int, string>(11, "All date"));


            return timeline_options;
        }

        public static string Get_Timeline_Option_Value(int timeline_option)
        {
            try
            {
                if (timeline_option > 0)
                    return Timeline_Options.SingleOrDefault(t => t.Item1 == timeline_option).Item2;
                else
                    return null;
            }
            catch
            {

                return null;

            }

        }

        #endregion


        #region start rollup
        public static List<Tuple<int, string>> Rollup_Options { get { return Get_Rollup_By_Options(); } }

        /// <summary>
        /// The following function is retun the filter by option, for example want to search "Site" "Contains/Is Equal to/etc" "Sainsbury's"
        /// </summary>
        /// <returns>List<Tuple<int, string>></returns>
        private static List<Tuple<int, string>> Get_Rollup_By_Options()
        {
            List<Tuple<int, string>> rollup_options = new List<Tuple<int, string>>();
            rollup_options.Add(new Tuple<int, string>(1, "1 Sec"));
            rollup_options.Add(new Tuple<int, string>(2, "5 Sec"));
            rollup_options.Add(new Tuple<int, string>(3, "30 Sec"));
            rollup_options.Add(new Tuple<int, string>(4, "1 Min"));
            rollup_options.Add(new Tuple<int, string>(5, "3 Min"));
            rollup_options.Add(new Tuple<int, string>(6, "5 Min"));
            rollup_options.Add(new Tuple<int, string>(7, "15 Min"));
            rollup_options.Add(new Tuple<int, string>(8, "30 Min"));
            rollup_options.Add(new Tuple<int, string>(9, "Hour"));
            rollup_options.Add(new Tuple<int, string>(10, "Day"));
            rollup_options.Add(new Tuple<int, string>(11, "Month"));
            rollup_options.Add(new Tuple<int, string>(12, "Week"));

            return rollup_options;
        }

        public static string Get_Rollup_By_Option_Value(int rollup_option)
        {
            try
            {
                if (rollup_option > 0)
                    return Rollup_Options.SingleOrDefault(t => t.Item1 == rollup_option).Item2;
                else
                    return null;
            }
            catch
            {

                return null;

            }

        }
        #endregion


        #region layout option
        public static List<Tuple<int, string, string>> Layout_Options { get { return Get_Layout_By_Options(); } }

        /// <summary>
        /// The following function is retun the filter by option, for example want to search "Site" "Contains/Is Equal to/etc" "Sainsbury's"
        /// </summary>
        /// <returns>List<Tuple<int, string>></returns>
        private static List<Tuple<int, string, string>> Get_Layout_By_Options()
        {
            List<Tuple<int, string, string>> layout_options = new List<Tuple<int, string,string>>();
            layout_options.Add(new Tuple<int, string, string>(1, "One Column", "100%"));
            layout_options.Add(new Tuple<int, string, string>(2, "Two Column", "50%"));
            layout_options.Add(new Tuple<int, string, string>(3, "Three Column", "33%"));
            layout_options.Add(new Tuple<int, string, string>(4, "Four Column", "25%"));
            return layout_options;
        }

        public static string Get_Layout_By_Option_Value(int layout_option)
        {
            try
            {
                if (layout_option > 0)
                    return Layout_Options.SingleOrDefault(t => t.Item1 == layout_option).Item2;
                else
                    return null;
            }
            catch
            {

                return null;

            }

        }

        #endregion

    }
}

