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
    
    public partial class FormulaItem
    {
        public int ID { get; set; }
        public int FormulaID_FK { get; set; }
        public Nullable<int> SelectionTypeItemValueID_FK { get; set; }
        public string SelectionType { get; set; }
        public Nullable<decimal> Value { get; set; }
    
        public virtual Formula Formula { get; set; }
        public virtual SelectionTypeValue SelectionTypeValue { get; set; }
    }
}
