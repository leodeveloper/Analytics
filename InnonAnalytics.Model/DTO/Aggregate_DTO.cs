using System;
using InnonAnalytics.Common;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Common.Enums;

namespace InnonAnalytics.Model.DTO
{
    


    public class Chart_Diagram_Aggregate_DTO
    {

        public Chart_Diagram_Aggregate_DTO()
        {
            this.Mertric_Unit = new Unit_Of_Measurement_DTO();
        }

        public int Metric_Id { get; set; }
        public string Metric_Name { get; set; }

        public Unit_Of_Measurement_DTO Mertric_Unit { get; set; }

        public double Value { get; set; }

        public double Value_String { get { return this.Value.ToTwoDecialPlace(); } }


        

    }

    public class Chart_Diagram_Aggregate_DTO_Convert
    {
        public static Chart_Diagram_Aggregate_DTO Convert_Aggregate_To_Diagram(Aggregate_Metric_Elements Metric_ElementIds, double value)
        {
            Chart_Diagram_Aggregate_DTO _dto = new Chart_Diagram_Aggregate_DTO();
            _dto.Metric_Id = Metric_ElementIds.Metric_Id;
            _dto.Metric_Name = Metric_ElementIds.Metric_Name;
            _dto.Mertric_Unit = Metric_ElementIds.Mertric_Unit;
            _dto.Value = value;
            return _dto;
        }

        public static List<Chart_Diagram_Aggregate_DTO> Convert_Aggregate_Metric_List_To_Diagram(List<Aggregate_Metric_Elements_Value> metric_element_values)
        {
            List<Chart_Diagram_Aggregate_DTO> diagram_dto = new List<Chart_Diagram_Aggregate_DTO>();
            foreach (Aggregate_Metric_Elements_Value metric_element_value in metric_element_values)
            {
                diagram_dto.Add(Convert_Aggregate_To_Diagram(metric_element_value.Metric, metric_element_value.Value));
            }
            return diagram_dto;
        }
    }

    public class Tree_Map_Aggregate_DTO
    {

        public Tree_Map_Aggregate_DTO()
        {
            this.Items = new HashSet<Tree_Map_Aggregate_DTO>();
        }

        public string Name { get; set; }        

        public double Value { get; set; }

        public double Target_Value { get; set; }

        public double Value_String { get { return this.Value.ToTwoDecialPlace(); } }

        public string Color { get; set; }

        public ICollection<Tree_Map_Aggregate_DTO> Items { get; set; }

    }

    public class Convert_Aggregate_DTO_Group_By_To_Tree_Map_Aggregate_DTO
    {

        


        public static Tree_Map_Aggregate_DTO Convert(Aggregate_DTO_Group_By_Aggregation_Type aggregate_dto_Group_By_aggregation_type)
        {

            Aggregate_DTO_Group_By_Aggregation_Type_Value target_aggregate_dto_Group_By_value;

            string _Top_Name = Resources.Tree_Map_Chart_Top_Name;
            Tree_Map_Aggregate_DTO tree_map_dto = new Tree_Map_Aggregate_DTO();
            //double total = 0;
            tree_map_dto.Name = aggregate_dto_Group_By_aggregation_type.Target_Metric_Name;            
            //Set the total target value, do not change sum, it is already giving what roll up function
            tree_map_dto.Value = aggregate_dto_Group_By_aggregation_type.Aggregate_Target_Value.Sum(aggre => aggre.Value);
            tree_map_dto.Color = "#A4A4A4";
            double percentage = 0.0;
            double _target_value = 0.0;
            string str_color = "#D3D3D3"; //grey, if no target found
            foreach (Aggregate_DTO_Group_By_Aggregation_Type_Value aggregate_dto_Group_By in aggregate_dto_Group_By_aggregation_type.Aggregate_Value)
            {

               target_aggregate_dto_Group_By_value = aggregate_dto_Group_By_aggregation_type.Aggregate_Target_Value.Find(z => z.Group_By == aggregate_dto_Group_By.Group_By);

               if (target_aggregate_dto_Group_By_value != null)
               {
                   percentage = (aggregate_dto_Group_By.Value / target_aggregate_dto_Group_By_value.Value) * 100;
                   _target_value = target_aggregate_dto_Group_By_value.Value;
               }
               else //If no target found
               {
                   percentage = 0.0;
                   _target_value = 0.0;
               }
               if (percentage > 0 && percentage <= 95)
                   str_color = "#21610B"; //green
               else if (percentage >= 96 && percentage <= 105)
                   str_color = "#ff7a00"; // Yellow
               else if (percentage > 105)
                   str_color = "#FF0000"; //red
               else
                   str_color = "#D3D3D3";//grey, if no target found

               tree_map_dto.Items.Add(new Tree_Map_Aggregate_DTO { 
                   Name = aggregate_dto_Group_By.Group_By,                   
                   Value = aggregate_dto_Group_By.Value, 
                   Color = str_color, 
                   Target_Value = _target_value 
               });
            }

           
            return tree_map_dto;
        }
    }




    public class Aggregate_Metric_Elements_Value
    {
        public Aggregate_Metric_Elements_Value()
        {
            Metric = new Aggregate_Metric_Elements();        
        }
        public Aggregate_Metric_Elements Metric { get; set; } 
        public double Value { get; set; }
        public double Value_String { get { return this.Value.ToTwoDecialPlace(); } }
    }

    public class Aggregate_Metric_Elements
    {

        public Aggregate_Metric_Elements()
        {
            this.Elements = new Aggregate_Element_Ids();
            this.Mertric_Unit = new Unit_Of_Measurement_DTO();
        }

        public int Metric_Id { get; set; }

        public string Metric_Name { get; set; }

        public Unit_Of_Measurement_DTO Mertric_Unit { get; set; }
        public Rollup_Function_Option Mertric_Rollup_Function { get; set; }

        public Aggregate_Element_Ids Elements { get; set; }
    }

    public class Aggregate_Element_Ids
    {

        public Aggregate_Element_Ids()
        {
            this.Mertric_Unit = new Unit_Of_Measurement_DTO();
            this.Target_Mertric_Unit = new Unit_Of_Measurement_DTO();
        }

        public string Metric_Name { get; set; }

        public string Target_Metric_Name { get; set; }

        public Unit_Of_Measurement_DTO Mertric_Unit { get; set; }
        public Unit_Of_Measurement_DTO Target_Mertric_Unit { get; set; }

        public Rollup_Function_Option Mertric_Rollup_Function { get; set; }
        public Rollup_Function_Option Mertric_Target_Rollup_Function { get; set; }

        public IEnumerable<ElementDTO_WareHouse> Element_Ids { get; set; }
        public IEnumerable<ElementDTO_WareHouse> Target_Element_Ids { get; set; }
    }

    public class Aggregate_DTO_Group_By_Aggregation_Type
    {

        public Aggregate_DTO_Group_By_Aggregation_Type()
        {
            this.Aggregate_Value = new List<Aggregate_DTO_Group_By_Aggregation_Type_Value>();
            this.Aggregate_Target_Value = new List<Aggregate_DTO_Group_By_Aggregation_Type_Value>();

            this.Mertric_Unit = new Unit_Of_Measurement_DTO();
            this.Target_Mertric_Unit = new Unit_Of_Measurement_DTO();
        }

        public string Metric_Name { get; set; }

        public string Target_Metric_Name { get; set; }

        public Unit_Of_Measurement_DTO Mertric_Unit { get; set; }
        public Unit_Of_Measurement_DTO Target_Mertric_Unit { get; set; }
        public Rollup_Function_Option Rollup_Function { get; set; }
        public List<Aggregate_DTO_Group_By_Aggregation_Type_Value> Aggregate_Value { get; set; }
        public List<Aggregate_DTO_Group_By_Aggregation_Type_Value> Aggregate_Target_Value { get; set; }   
    }


    public class Aggregate_DTO_Group_By_Aggregation_Type_Value
    {
        
        public string Group_By { get; set; }
        public double Value { get; set; }
        public double Value_String { get { return this.Value.ToTwoDecialPlace(); } }

    }

    public class Aggregate_DTO_Aggregation_Type_Value : Aggregate_DTO_Group_By_Aggregation_Type_Value
    {
        public long Point_ID { get; set; }      

    }

    //public class Aggregate_DTO_Aggregation_Type_Value_Multiple_Group_By : Aggregate_DTO_Group_By_Aggregation_Type_Value
    //{
    //    public long Point_ID { get; set; }
    //    public string Group_By2 { get; set; }

    //}


    /// <summary>
    /// This is for the single metric calculation guage, counter, No group by 
    /// </summary>
    public class Aggregate_DTO_Metric
    {

        public Aggregate_DTO_Metric()
        {           

            this.Mertric_Unit = new Unit_Of_Measurement_DTO();
            this.Target_Mertric_Unit = new Unit_Of_Measurement_DTO();
        }

        public string Metric_Name { get; set; }

        public string Target_Metric_Name { get; set; }

        public Unit_Of_Measurement_DTO Mertric_Unit { get; set; }
        public Unit_Of_Measurement_DTO Target_Mertric_Unit { get; set; }
        public Rollup_Function_Option Rollup_Function { get; set; }
        public double Aggregate_Value { get; set; }
        public double Aggregate_Target_Value { get; set; }
    }

   
}