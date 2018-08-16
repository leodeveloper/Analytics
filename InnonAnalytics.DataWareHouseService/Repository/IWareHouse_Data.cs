using InnonAnalytics.Common.Enums;
using InnonAnalytics.DataWareHouseService.Model;
using System;
using System.Collections.Generic;


namespace InnonAnalytics.DataWareHouseService.Repository
{
    public interface IWareHouse_Data
    {
        IList<Warehouse_DTO> Get_Data_From(long point_id, DateTime from_date, DateTime to_date, AggerationType aggregaretype);
    }
}
