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
    
    public partial class tblDescription
    {
        public tblDescription()
        {
            this.tblLanguageDescriptions = new HashSet<tblLanguageDescription>();
            this.tblTags = new HashSet<tblTag>();
        }
    
        public long ID { get; set; }
        public Nullable<long> ExternalID { get; set; }
    
        public virtual ICollection<tblLanguageDescription> tblLanguageDescriptions { get; set; }
        public virtual ICollection<tblTag> tblTags { get; set; }
    }
}
