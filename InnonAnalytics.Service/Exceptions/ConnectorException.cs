using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Exceptions
{
    public class ConnectorException : Exception
    {
        public ConnectorException()
            : base()
        {
        }

        public ConnectorException(string message)
            : base(message)
        {
        }

        public ConnectorException(string message, Exception innerException)
            : base(message, innerException)
        {
           
        }
    }
}
