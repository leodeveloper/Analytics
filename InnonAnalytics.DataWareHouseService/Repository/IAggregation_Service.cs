using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.DataWareHouseService.Repository
{
    public interface IAggregation_Service
    {
         void Calculate_and_Save_Aggregation_WareHouse_By_ElementID(long Element_ID);
    }
}
