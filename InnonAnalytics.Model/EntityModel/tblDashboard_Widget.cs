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
    
    public partial class tblDashboard_Widget
    {
        public tblDashboard_Widget()
        {
            this.tblChart_Gauge = new HashSet<tblChart_Gauge>();
            this.tblChart_Bar = new HashSet<tblChart_Bar>();
            this.tblChart_Donut = new HashSet<tblChart_Donut>();
            this.tblChart_Pie = new HashSet<tblChart_Pie>();
            this.tblChart_Stacked = new HashSet<tblChart_Stacked>();
            this.tblChart_TreeMap = new HashSet<tblChart_TreeMap>();
            this.tblChart_Heatmap = new HashSet<tblChart_Heatmap>();
            this.tblChart_Counter = new HashSet<tblChart_Counter>();
            this.tblHomePage_Widget = new HashSet<tblHomePage_Widget>();
            this.tblChart_Line = new HashSet<tblChart_Line>();
        }
    
        public int Id { get; set; }
        public string Widget_Title { get; set; }
        public string Chart_Type { get; set; }
        public int Dashboard_Id { get; set; }
        public bool Is_Deleted { get; set; }
        public int widget_x { get; set; }
        public int widget_y { get; set; }
        public int widget_width { get; set; }
        public int widget_height { get; set; }
    
        public virtual tblDashboard tblDashboard { get; set; }
        public virtual ICollection<tblChart_Gauge> tblChart_Gauge { get; set; }
        public virtual ICollection<tblChart_Bar> tblChart_Bar { get; set; }
        public virtual ICollection<tblChart_Donut> tblChart_Donut { get; set; }
        public virtual ICollection<tblChart_Pie> tblChart_Pie { get; set; }
        public virtual ICollection<tblChart_Stacked> tblChart_Stacked { get; set; }
        public virtual ICollection<tblChart_TreeMap> tblChart_TreeMap { get; set; }
        public virtual ICollection<tblChart_Heatmap> tblChart_Heatmap { get; set; }
        public virtual ICollection<tblChart_Counter> tblChart_Counter { get; set; }
        public virtual ICollection<tblHomePage_Widget> tblHomePage_Widget { get; set; }
        public virtual ICollection<tblChart_Line> tblChart_Line { get; set; }
    }
}