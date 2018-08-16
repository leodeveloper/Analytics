using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.DataMigrationConsole.Model
{
   

    public class Point_Measure_Fact
    {
        #region Instance Properties

        public int ID { get; set; }

        public DateTime Date_ID { get; set; }

        public string External_ID { get; set; }

        public long Client_ID { get; set; }

        public long Point_ID { get; set; }

        public DateTime Timestamp_From { get; set; }

        public DateTime Timestamp_To { get; set; }

        public DateTime Hour_ID { get; set; }

        public string Unit_Of_Measurement { get; set; }

        public double? Min_Value { get; set; }

        public double? Max_Value { get; set; }

        public long? DataRecordingFrequency { get; set; }

        public int? Schedule_ID { get; set; }

        public double Value { get; set; }

        public DateTime Last_Update_Time { get; set; } 

        #endregion Instance Properties
    }


}
