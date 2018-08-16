using InnonAnalytics.Model;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Common;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace InnonAnalytics.WebApi.Models
{
    public class ChartsDTO
    {

    }

    public class Gauge_Chart
    {

        public Gauge_Chart()
        {
            this.Mertric_Unit = new Unit_Of_Measurement_DTO();
            this.Target_Mertric_Unit = new Unit_Of_Measurement_DTO();
        }

        public string Metric_Name { get; set; }

        public string Target_Metric_Name { get; set; }

        public Unit_Of_Measurement_DTO Mertric_Unit { get; set; }
        public Unit_Of_Measurement_DTO Target_Mertric_Unit { get; set; }

        public double Sum_Value { get; set; }

        public double Sum_Value_String { get { return this.Sum_Value.ToTwoDecialPlace(); } }

        public double Sum_Value_Target { get; set; }

        public double Sum_Value_Target_String { get { return this.Sum_Value_Target.ToTwoDecialPlace(); } }
    }

    public class Gauge_Chart_Convert
    {
        public static Gauge_Chart Convert_Aggregate_To_Gauge_Chart(Aggregate_DTO_Metric aggregate_dto)
        {
            Gauge_Chart gauge_chart = new Gauge_Chart();
            gauge_chart.Metric_Name = aggregate_dto.Metric_Name;
            gauge_chart.Target_Metric_Name = aggregate_dto.Target_Metric_Name;

            gauge_chart.Mertric_Unit = aggregate_dto.Mertric_Unit;
            gauge_chart.Target_Mertric_Unit = aggregate_dto.Target_Mertric_Unit;

            gauge_chart.Sum_Value = aggregate_dto.Aggregate_Value;
            gauge_chart.Sum_Value_Target = aggregate_dto.Aggregate_Target_Value;
            return gauge_chart;
        }
    }

    public class Counter_Chart
    {

        public Counter_Chart()
        {
            this.Mertric_Unit = new Unit_Of_Measurement_DTO();
          
        }

        public string Metric_Name { get; set; }     

        public Unit_Of_Measurement_DTO Mertric_Unit { get; set; }       

        public double Value { get; set; }

        public double Value_String { get { return this.Value.ToTwoDecialPlace(); } }

       
    }

    public class Counter_Chart_Convert
    {
        public static Counter_Chart Convert_Aggregate_To_Counter_Chart(Aggregate_DTO_Metric aggregate_dto)
        {
            Counter_Chart Counter_chart = new Counter_Chart();
            Counter_chart.Metric_Name = aggregate_dto.Metric_Name;
            Counter_chart.Mertric_Unit = aggregate_dto.Mertric_Unit;
            Counter_chart.Value = aggregate_dto.Aggregate_Value;            
            return Counter_chart;
        }
    }

    public class Basic_Column_Chart
    {
        public Basic_Column_Chart()
        {
            this.Json_Data = new List<Json_Class>();
            this.Categories = new List<string>();
            this.Y_Axis = new List<string>();
        }

        public IList<string> Categories { get; set; }
        public IList<string> Y_Axis { get; set; }

        public List<Json_Class> Json_Data { get; set; }

    }

    public class Fixed_Placement_Column_Chart
    {
        public Fixed_Placement_Column_Chart()
        {
            this.Json_Data = new List<Json_Class_Fixed>();
            this.Categories = new List<string>();
            this.Y_Axis = new List<string>();
        }

        public IList<string> Categories { get; set; }

        public IList<string> Y_Axis { get; set; }

        public List<Json_Class_Fixed> Json_Data { get; set; }

    }


    public class Basic_Column_Chart_Convert
    {

        public static Basic_Column_Chart Basic_Column_Chart_Convert_To_Column_Basic(Aggregate_DTO_Group_By_Aggregation_Type aggregate_dto)
        {
            Basic_Column_Chart basic_column_chart = new Basic_Column_Chart();

            List<Json_Class> _j_class = new List<Json_Class>();

            _j_class.Add(new Json_Class { name = aggregate_dto.Metric_Name });
            _j_class.Add(new Json_Class { name = aggregate_dto.Target_Metric_Name });

            #region Y-Axis
            if (!basic_column_chart.Y_Axis.Any(g_by => g_by.Equals(aggregate_dto.Mertric_Unit.Unit_Symbol)))
                basic_column_chart.Y_Axis.Add(aggregate_dto.Mertric_Unit.Unit_Symbol);

            if (!basic_column_chart.Y_Axis.Any(g_by => g_by.Equals(aggregate_dto.Target_Mertric_Unit.Unit_Symbol)))
                basic_column_chart.Y_Axis.Add(aggregate_dto.Target_Mertric_Unit.Unit_Symbol);
            #endregion


            Aggregate_DTO_Group_By_Aggregation_Type_Value _aggregate_value;
            Aggregate_DTO_Group_By_Aggregation_Type_Value _aggregate_value_target;
            foreach (Aggregate_DTO_Group_By_Aggregation_Type_Value aggregate_value in aggregate_dto.Aggregate_Value)
            {

                try
                {
                    basic_column_chart.Categories.Add(aggregate_value.Group_By);


                    _aggregate_value = aggregate_dto.Aggregate_Value.SingleOrDefault(d => d.Group_By.Equals(aggregate_value.Group_By));

                    _aggregate_value_target = aggregate_dto.Aggregate_Target_Value.SingleOrDefault(d => d.Group_By.Equals(aggregate_value.Group_By));

                    if (_aggregate_value != null)
                        _j_class[0].data.Add(_aggregate_value.Value);
                    else
                        _j_class[0].data.Add(0);

                    if (_aggregate_value_target != null)
                        _j_class[1].data.Add(_aggregate_value_target.Value);
                    else
                        _j_class[1].data.Add(0);



                }
                catch (Exception ex)
                {

                }



            }

            basic_column_chart.Json_Data.AddRange(_j_class);

            return basic_column_chart;

        }
    }


    public class Fixed_Placement_Chart_Convert
    {



        public static Fixed_Placement_Column_Chart Fixed_Placement_Chart_Convert_To_Fixed_Placement(Aggregate_DTO_Group_By_Aggregation_Type aggregate_dto)
        {

            double pointPadding1 = 0.4;
            double pointPlacement1 = -0.2;

            double pointPadding2 = 0.3;
            double pointPlacement2 = -0.2;

            Fixed_Placement_Column_Chart fixed_placement_chart = new Fixed_Placement_Column_Chart();

            List<Json_Class_Fixed> _j_class = new List<Json_Class_Fixed>();

            //First we need to aad the target than the value
            _j_class.Add(new Json_Class_Fixed { name = aggregate_dto.Target_Metric_Name, pointPadding = pointPadding2, pointPlacement = pointPlacement2 });
            _j_class.Add(new Json_Class_Fixed { name = aggregate_dto.Metric_Name, pointPadding = pointPadding1, pointPlacement = pointPlacement1 });
            

            #region Y-Axis
            if (!fixed_placement_chart.Y_Axis.Any(g_by => g_by.Equals(aggregate_dto.Mertric_Unit.Unit_Symbol)))
                fixed_placement_chart.Y_Axis.Add(aggregate_dto.Mertric_Unit.Unit_Symbol);

            if (!fixed_placement_chart.Y_Axis.Any(g_by => g_by.Equals(aggregate_dto.Target_Mertric_Unit.Unit_Symbol)))
                fixed_placement_chart.Y_Axis.Add(aggregate_dto.Target_Mertric_Unit.Unit_Symbol);
            #endregion

            Aggregate_DTO_Group_By_Aggregation_Type_Value _aggregate_value;
            Aggregate_DTO_Group_By_Aggregation_Type_Value _aggregate_value_target;
            foreach (Aggregate_DTO_Group_By_Aggregation_Type_Value aggregate_value in aggregate_dto.Aggregate_Value)
            {

                try
                {



                    fixed_placement_chart.Categories.Add(aggregate_value.Group_By);
                    
                    _aggregate_value = aggregate_dto.Aggregate_Value.SingleOrDefault(d => d.Group_By.Equals(aggregate_value.Group_By));

                    _aggregate_value_target = aggregate_dto.Aggregate_Target_Value.SingleOrDefault(d => d.Group_By.Equals(aggregate_value.Group_By));

                    if (_aggregate_value != null)
                        _j_class[1].data.Add(_aggregate_value.Value);
                    else
                        _j_class[1].data.Add(0);

                    if (_aggregate_value_target != null)
                        _j_class[0].data.Add(_aggregate_value_target.Value);
                    else
                        _j_class[0].data.Add(0);
                }
                catch (Exception ex)
                {

                }



            }

            fixed_placement_chart.Json_Data.AddRange(_j_class);

            return fixed_placement_chart;

        }
    }


    /// <summary>
    /// For normal bar chart
    /// </summary>
    public class Json_Class
    {

        public Json_Class()
        {
            this.data = new List<double>();
        }

        public string name { get; set; }

        public IList<double> data { get; set; }


    }

    /// <summary>
    /// For bar Fixed placement chart
    /// </summary>
    public class Json_Class_Fixed
    {

        public Json_Class_Fixed()
        {
            this.data = new List<double>();
        }

        public string name { get; set; }

        public IList<double> data { get; set; }

        public double pointPadding { get; set; }
        public double pointPlacement { get; set; }
    }

    /// <summary>
    /// http://stackoverflow.com/questions/24612618/highchart-heatmap-with-json-data
    /// </summary>
    public class Heapmap_Chart
    {
        public Heapmap_Chart()
        {
            this.Categories = new List<string>();
            this.Json_String = new List<string>();
        }

        public string metric_name { get; set; }
        public string unit_name { get; set; }
        public string unit_symbol { get; set; }

        public DateTime MinValue_YAxis { get; set; }
        public DateTime MaxValue_YAxis { get; set; }

        public double MinValue { get; set; }
        public double MaxValue { get; set; }

        public IList<string> Categories { get; set; }

        //[ ["2013-04-01",0,-0.7], ["2013-04-02",0,-3.4], ["2013-04-03",0,-1.1] ]
        public IList<string> Json_String { get; set; }

    }

    public class Aggregate_DTO_Group_By_Aggregation_Type_Value_Convert
    {
        public static Heapmap_Chart Aggregate_DTO_Group_By_Aggregation_Type_Value_Heatmap_Chart(Aggregate_DTO_Group_By_Aggregation_Type list_aggregate_dto, DateTime _fromDate, DateTime _toDate)
        {
            DateTime _datetime;

            //This variable used for to get min nad max date
            List<DateTime> _datetime_min_max = new List<DateTime>();

            Heapmap_Chart _heatmap_chart = new Heapmap_Chart();

            if (list_aggregate_dto.Aggregate_Value.Count > 0)
            {
                foreach (Aggregate_DTO_Group_By_Aggregation_Type_Value aggregate_dto in list_aggregate_dto.Aggregate_Value)
                {
                    try
                    {

                        if (DateTime.TryParse(aggregate_dto.Group_By, out _datetime))
                        {

                            _datetime_min_max.Add(_datetime);

                            _heatmap_chart.Categories.Add(aggregate_dto.Group_By);
                            _heatmap_chart.Json_String.Add(string.Format("{0},{1},{2}", _datetime.ToString("yyyy-MM-dd"), _datetime.ToString("HH"), aggregate_dto.Value));
                        }
                        else
                            throw new Exception("Invalid date and time");
                    }
                    catch { }
                }


                _heatmap_chart.MinValue = list_aggregate_dto.Aggregate_Value.Min(value => value.Value_String);
                _heatmap_chart.MaxValue = list_aggregate_dto.Aggregate_Value.Max(value => value.Value_String);
            }

            _heatmap_chart.metric_name = list_aggregate_dto.Metric_Name;
            _heatmap_chart.unit_name = list_aggregate_dto.Mertric_Unit.Unit_Name;
            _heatmap_chart.unit_symbol = list_aggregate_dto.Mertric_Unit.Unit_Symbol;
            _heatmap_chart.MinValue_YAxis = _fromDate;
            _heatmap_chart.MaxValue_YAxis = _toDate;


            
            return _heatmap_chart;
        }
    }

    public class Pie_Chart_DTO
    {

        public Pie_Chart_DTO()
        {
            this.data = new HashSet<Pie_Chart_DTO_Json>();
        }

        public ICollection<Pie_Chart_DTO_Json> data { get; set; }
    }

    public class Pie_Chart_DTO_Json
    {
        public Pie_Chart_DTO_Json()
        {

        }

        public string name { get; set; }
        public double y { get; set; }

        public string unit_name { get; set; }
        public string unit_symbol { get; set; }

    }

    public class Pie_Chart_Convert
    {
        public static Pie_Chart_DTO Pie_Chart_Convert_Aggregate_Metric_To_Pie_Chart_DTO(List<Aggregate_Metric_Elements_Value> list_metric_values)
        {
            Pie_Chart_DTO pie_chart_dto = new Pie_Chart_DTO();
            foreach (Aggregate_Metric_Elements_Value metric_value in list_metric_values)
            {
                pie_chart_dto.data.Add(new Pie_Chart_DTO_Json() { name = metric_value.Metric.Metric_Name, y = metric_value.Value, unit_name = metric_value.Metric.Mertric_Unit.Unit_Name, unit_symbol = metric_value.Metric.Mertric_Unit.Unit_Symbol });
            }
            return pie_chart_dto;
        }
    }

    public class Stacked_Chart
    {
        public Stacked_Chart()
        {
            this.Json_Data = new List<Stacked_Json_Class>();
            this.Categories = new List<string>();
            this.Y_Axis = new List<string>();
        }
        public IList<string> Categories { get; set; }

        public IList<string> Y_Axis { get; set; }

        public List<Stacked_Json_Class> Json_Data { get; set; }
    }

    public class Stacked_Json_Class
    {

        public Stacked_Json_Class()
        {
            this.data = new List<double>();
        }

        public string name { get; set; }

        public string unit_name { get; set; }
        public string unit_symbol { get; set; }

        public IList<double> data { get; set; }


    }

    public class Stacked_Column_Chart_Convert
    {

        public static Stacked_Chart Aggregate_Convert_To_Stacked_Chart(IList<Aggregate_DTO_Group_By_Aggregation_Type> aggregate_dtos)
        {

            Stacked_Chart Stacked_chart = new Stacked_Chart();
            int i = 0;

            aggregate_dtos.Select(a => a.Aggregate_Value);

            foreach (Aggregate_DTO_Group_By_Aggregation_Type aggregate_dto in aggregate_dtos)
            {

                foreach (Aggregate_DTO_Group_By_Aggregation_Type_Value aggregate_value in aggregate_dto.Aggregate_Value)
                {
                    try
                    {
                        if (!Stacked_chart.Categories.Any(g_by => g_by.Equals(aggregate_value.Group_By)))
                            Stacked_chart.Categories.Add(aggregate_value.Group_By);
                    }
                    catch (Exception ex)
                    {

                    }
                }
            }

            //this order by function when the group by day, hour, min ect
            DateTime dt = new DateTime();
            Stacked_chart.Categories = Stacked_chart.Categories.OrderBy(x => DateTime.TryParse(x, out dt) ? DateTime.Parse(x) : dt).ToList();
            //End

            foreach (Aggregate_DTO_Group_By_Aggregation_Type aggregate_dto in aggregate_dtos)
            {

                if (!Stacked_chart.Y_Axis.Any(g_by => g_by.Equals(aggregate_dto.Mertric_Unit.Unit_Symbol)))
                    Stacked_chart.Y_Axis.Add(aggregate_dto.Mertric_Unit.Unit_Symbol);

                i++;
                List<Stacked_Json_Class> _j_class = new List<Stacked_Json_Class>();
                _j_class.Add(new Stacked_Json_Class { name = aggregate_dto.Metric_Name, unit_name = aggregate_dto.Mertric_Unit.Unit_Name, unit_symbol = aggregate_dto.Mertric_Unit.Unit_Symbol });

                List<Aggregate_DTO_Group_By_Aggregation_Type_Value> _aggregate_values;
                foreach (string group_by in Stacked_chart.Categories)
                {
                    _aggregate_values = aggregate_dto.Aggregate_Value.Where(d => d.Group_By.Equals(group_by)).ToList();

                    foreach (Aggregate_DTO_Group_By_Aggregation_Type_Value _aggregate_value in _aggregate_values)
                    {
                        _j_class[0].data.Add(_aggregate_value.Value);
                    }

                    if (_aggregate_values.Count == 0)
                        _j_class[0].data.Add(0);


                }

                Stacked_chart.Json_Data.AddRange(_j_class);
            }

            return Stacked_chart;

        }
    }





    #region line chart


    public class Line_Chart
    {
        public Line_Chart()
        {
            this.Json_Data = new List<Line_Json_Class>();
            this.Categories = new List<string>();
            this.Y_Axis = new List<string>();
        }
        public IList<string> Categories { get; set; }

        public IList<string> Y_Axis { get; set; }

        public List<Line_Json_Class> Json_Data { get; set; }
    }


    public class Line_Json_Class
    {

        public Line_Json_Class()
        {
            this.data = new List<double>();
        }

        public string name { get; set; }

        public string unit_name { get; set; }
        public string unit_symbol { get; set; }

        public IList<double> data { get; set; }


    }

    public class Line_Column_Chart_Convert
    {

        public static Line_Chart Aggregate_Convert_To_Line_Chart(IList<Aggregate_DTO_Group_By_Aggregation_Type> aggregate_dtos)
        {

            Line_Chart Line_chart = new Line_Chart();
            int i = 0;

            aggregate_dtos.Select(a => a.Aggregate_Value);

            foreach (Aggregate_DTO_Group_By_Aggregation_Type aggregate_dto in aggregate_dtos)
            {

                foreach (Aggregate_DTO_Group_By_Aggregation_Type_Value aggregate_value in aggregate_dto.Aggregate_Value)
                {
                    try
                    {
                        if (!Line_chart.Categories.Any(g_by => g_by.Equals(aggregate_value.Group_By)))
                            Line_chart.Categories.Add(aggregate_value.Group_By);
                    }
                    catch (Exception ex)
                    {

                    }
                }
            }

            //this order by function when the group by day, hour, min ect
            DateTime dt = new DateTime();
            Line_chart.Categories = Line_chart.Categories.OrderBy(x => DateTime.TryParse(x, out dt) ? DateTime.Parse(x) : dt).ToList();
            //End

            foreach (Aggregate_DTO_Group_By_Aggregation_Type aggregate_dto in aggregate_dtos)
            {

                if (!Line_chart.Y_Axis.Any(g_by => g_by.Equals(aggregate_dto.Mertric_Unit.Unit_Symbol)))
                    Line_chart.Y_Axis.Add(aggregate_dto.Mertric_Unit.Unit_Symbol);

                i++;
                List<Line_Json_Class> _j_class = new List<Line_Json_Class>();
                _j_class.Add(new Line_Json_Class { name = aggregate_dto.Metric_Name, unit_name = aggregate_dto.Mertric_Unit.Unit_Name, unit_symbol = aggregate_dto.Mertric_Unit.Unit_Symbol });

                List<Aggregate_DTO_Group_By_Aggregation_Type_Value> _aggregate_values;
                foreach (string group_by in Line_chart.Categories)
                {
                    _aggregate_values = aggregate_dto.Aggregate_Value.Where(d => d.Group_By.Equals(group_by)).ToList();

                    foreach (Aggregate_DTO_Group_By_Aggregation_Type_Value _aggregate_value in _aggregate_values)
                    {
                        _j_class[0].data.Add(_aggregate_value.Value);
                    }

                    if (_aggregate_values.Count == 0)
                        _j_class[0].data.Add(0);


                }

                Line_chart.Json_Data.AddRange(_j_class);
            }

            return Line_chart;

        }
    }
    #endregion

}