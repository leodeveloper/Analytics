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
    
    public partial class tblMetric
    {
        public tblMetric()
        {
            this.tblChart_Bar = new HashSet<tblChart_Bar>();
            this.tblChart_Bar1 = new HashSet<tblChart_Bar>();
            this.tblChart_Gauge = new HashSet<tblChart_Gauge>();
            this.tblChart_Gauge1 = new HashSet<tblChart_Gauge>();
            this.tblChart_Heatmap = new HashSet<tblChart_Heatmap>();
            this.tblChart_Metric = new HashSet<tblChart_Metric>();
            this.tblChart_TreeMap = new HashSet<tblChart_TreeMap>();
            this.tblChart_TreeMap1 = new HashSet<tblChart_TreeMap>();
            this.tblChart_Counter = new HashSet<tblChart_Counter>();
            this.AspNetUserMetrics = new HashSet<AspNetUserMetric>();
        }
    
        public int Id { get; set; }
        public string Metric_Name { get; set; }
        public string Rollup_Function { get; set; }
        public string Source { get; set; }
        public int Unit_Id { get; set; }
    
        public virtual ICollection<tblChart_Bar> tblChart_Bar { get; set; }
        public virtual ICollection<tblChart_Bar> tblChart_Bar1 { get; set; }
        public virtual ICollection<tblChart_Gauge> tblChart_Gauge { get; set; }
        public virtual ICollection<tblChart_Gauge> tblChart_Gauge1 { get; set; }
        public virtual ICollection<tblChart_Heatmap> tblChart_Heatmap { get; set; }
        public virtual ICollection<tblChart_Metric> tblChart_Metric { get; set; }
        public virtual ICollection<tblChart_TreeMap> tblChart_TreeMap { get; set; }
        public virtual tblUnit tblUnit { get; set; }
        public virtual ICollection<tblChart_TreeMap> tblChart_TreeMap1 { get; set; }
        public virtual ICollection<tblChart_Counter> tblChart_Counter { get; set; }
        public virtual ICollection<AspNetUserMetric> AspNetUserMetrics { get; set; }
    }
}