using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.DataWareHouseService.Exceptions
{
    public class Aggregate_Value_Exception : Exception
    {
        public Aggregate_Value_Exception()
            : base()
        {
        }

        public Aggregate_Value_Exception(string message)
            : base(message)
        {
        }

        public Aggregate_Value_Exception(string message, Exception innerException)
            : base(message, innerException)
        {
           
        }
    }
}
