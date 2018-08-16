using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    
    public class RawDataDTO
    {
        public int ID { get; set; }
        public DateTime? TIMESTAMP { get; set; }

        public double? VALUE { get; set; }

        public string STATUS_TAG { get; set; }

        /// <summary>
        /// Val is Totalised Values
        /// </summary>
        public double? VAL { get; set; }
    }
}
