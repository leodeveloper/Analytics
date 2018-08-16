using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.DTO;
using System;
using System.Collections.Generic;
namespace InnonAnalytics.DataWareHouseService.Repository
{
    public interface IAggregate_Data
    {
        Tree_Map_Aggregate_DTO Get_Aggregate(TagType group_by, DateTime from_date, DateTime to_date);
        double Get_Aggregate(IEnumerable<ElementDTO_WareHouse> list_element, Rollup_Function_Option rollup_function_option, Unit_Of_Measurement_DTO metric_unit, DateTime from_date, DateTime to_date);
        void Get_Aggregate(long element_id);
        void Get_Aggregate(long element_id, InnonAnalytics.Common.Enums.AggerationType group_by);
        List<Aggregate_DTO_Group_By_Aggregation_Type_Value> Get_Aggregate(IEnumerable<ElementDTO_WareHouse> list_element_id, Rollup_Function_Option rollup_function_option, Unit_Of_Measurement_DTO metric_unit, string group_by, DateTime from_date, DateTime to_date);

        List<Aggregate_DTO_Group_By_Aggregation_Type_Value> Get_Aggregate(IEnumerable<ElementDTO_WareHouse> list_element, Rollup_Function_Option roll_up_function, Unit_Of_Measurement_DTO metric_unit, AggerationType group_by, DateTime from_date, DateTime to_date);

        
    }
}
