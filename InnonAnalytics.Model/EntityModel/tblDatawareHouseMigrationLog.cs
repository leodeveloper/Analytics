//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated from a template.
//
//     Manual changes to this file may cause unexpected behavior in your application.
//     Manual changes to this file will be overwritten if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace InnonAnalytics.Model.EntityModel
{
    using System;
    using System.Collections.Generic;
    
    public partial class tblDatawareHouseMigrationLog
    {
        public long ID { get; set; }
        public long Element_ID { get; set; }
        public System.DateTime Last_Run_Start { get; set; }
        public Nullable<System.DateTime> Last_Run_End { get; set; }
        public long Total_Record_Fetch { get; set; }
        public bool Is_Black_List { get; set; }
        public System.DateTime Timestamp_From { get; set; }
        public Nullable<System.DateTime> Timestamp_To { get; set; }
    }
}
