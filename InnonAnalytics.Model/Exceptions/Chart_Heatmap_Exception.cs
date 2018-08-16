using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.Exceptions
{
    public class Chart_Heatmap_Exception : Exception
    {
        public Chart_Heatmap_Exception()
            : base()
        {
        }

        public Chart_Heatmap_Exception(string message)
            : base(message)
        {
        }

        public Chart_Heatmap_Exception(string message, Exception innerException)
            : base(message, innerException)
        {

        }
    }
}
