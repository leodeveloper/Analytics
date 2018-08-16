using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.Exceptions
{
    public class DataConnectorExcetion : Exception
    {
        public DataConnectorExcetion()
            : base()
        {
        }

        public DataConnectorExcetion(string message)
            : base(message)
        {
        }

        public DataConnectorExcetion(string message, Exception innerException)
            : base(message, innerException)
        {

        }
    }
}
