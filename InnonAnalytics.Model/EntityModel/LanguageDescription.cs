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
    
    public partial class LanguageDescription
    {
        public int ID { get; set; }
        public int DescriptionID_FK { get; set; }
        public int LanguageID_FK { get; set; }
        public string ShortDescription { get; set; }
        public string LongDescription { get; set; }
    
        public virtual Description Description { get; set; }
        public virtual Language Language { get; set; }
    }
}
