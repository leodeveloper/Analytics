using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Exceptions
{
    public class TagException : Exception
    {
        public TagException()
            : base()
        {
        }

        public TagException(string message)
            : base(message)
        {
        }

        public TagException(string message, Exception innerException)
            : base(message, innerException)
        {
           
        }
    }
}
