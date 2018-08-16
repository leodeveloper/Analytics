﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Exceptions
{
    public class ElementException : Exception
    {
         public ElementException()
            : base()
        {
        }

        public ElementException(string message)
            : base(message)
        {
        }

        public ElementException(string message, Exception innerException)
            : base(message, innerException)
        {
           
        }
    }
}
