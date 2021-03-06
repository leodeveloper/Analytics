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
    
    public partial class ElementType
    {
        public ElementType()
        {
            this.Attributes = new HashSet<Attribute>();
            this.AttributeTypeElementTypes = new HashSet<AttributeTypeElementType>();
            this.Elements = new HashSet<Element>();
        }
    
        public int ID { get; set; }
        public int DescriptionID_FK { get; set; }
        public bool Disabled { get; set; }
    
        public virtual ICollection<Attribute> Attributes { get; set; }
        public virtual ICollection<AttributeTypeElementType> AttributeTypeElementTypes { get; set; }
        public virtual Description Description { get; set; }
        public virtual ICollection<Element> Elements { get; set; }
    }
}
