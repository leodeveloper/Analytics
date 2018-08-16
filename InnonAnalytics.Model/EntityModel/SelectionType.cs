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
    
    public partial class SelectionType
    {
        public SelectionType()
        {
            this.SelectionRoles = new HashSet<SelectionRole>();
            this.SelectionTypeValues = new HashSet<SelectionTypeValue>();
        }
    
        public int ID { get; set; }
        public int DescriptionID_FK { get; set; }
        public string DefaultValue { get; set; }
        public bool Disabled { get; set; }
    
        public virtual Description Description { get; set; }
        public virtual ICollection<SelectionRole> SelectionRoles { get; set; }
        public virtual ICollection<SelectionTypeValue> SelectionTypeValues { get; set; }
    }
}
