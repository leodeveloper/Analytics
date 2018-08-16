using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.Exceptions
{
    public class Chart_Gauge_Exception : Exception
    {
        public Chart_Gauge_Exception()
            : base()
        {
        }

        public Chart_Gauge_Exception(string message)
            : base(message)
        {
        }

        public Chart_Gauge_Exception(string message, Exception innerException)
            : base(message, innerException)
        {

        }
    }

   
}
