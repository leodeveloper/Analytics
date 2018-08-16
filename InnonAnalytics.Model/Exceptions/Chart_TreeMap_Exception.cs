using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.Exceptions
{
    public class Chart_TreeMap_Exception:Exception
    {
         public Chart_TreeMap_Exception()
            : base()
        {
        }

        public Chart_TreeMap_Exception(string message)
            : base(message)
        {
        }

        public Chart_TreeMap_Exception(string message, Exception innerException)
            : base(message, innerException)
        {

        }
    }
}
