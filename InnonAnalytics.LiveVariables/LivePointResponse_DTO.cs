using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.LiveVariables
{

    //public class LivePoint_ResponseDTO
    //{
    //    public virtual string Value { get; set; }
    //}




    public class LivePoint_ResponseDTO
    {
        public decimal? dValue { get; set; }

        public bool? bValue { get; set; }

        public string Unit { get; set; }

        public string Data_Type { get; set; }

        /// <summary>
        /// For Audit use
        /// </summary>
        public string Old_Value { get; set; }
    }
}
