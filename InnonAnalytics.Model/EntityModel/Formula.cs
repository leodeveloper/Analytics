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
    
    public partial class Formula
    {
        public Formula()
        {
            this.FormulaItems = new HashSet<FormulaItem>();
        }
    
        public int ID { get; set; }
        public int DescriptionID_FK { get; set; }
        public bool SaveAsTemplate { get; set; }
        public int SelectionTypeValueID_FK { get; set; }
        public bool Disable { get; set; }
    
        public virtual SelectionTypeValue SelectionTypeValue { get; set; }
        public virtual ICollection<FormulaItem> FormulaItems { get; set; }
    }
}
