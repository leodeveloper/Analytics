using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Exceptions
{
   

    public class DashboardException : Exception
    {
        public DashboardException()
            : base()
        {
        }

        public DashboardException(string message)
            : base(message)
        {
        }

        public DashboardException(string message, Exception innerException)
            : base(message, innerException)
        {

        }
    }
}
