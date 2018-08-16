using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Exceptions
{
   


    public class UnitException : Exception
    {
        public UnitException()
            : base()
        {
        }

        public UnitException(string message)
            : base(message)
        {
        }

        public UnitException(string message, Exception innerException)
            : base(message, innerException)
        {

        }
    }
}
