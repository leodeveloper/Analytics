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
    
    public partial class SelectionRole
    {
        public int ID { get; set; }
        public int SelectionTypeID_FK { get; set; }
        public int RoleID_FK { get; set; }
    
        public virtual SelectionType SelectionType { get; set; }
    }
}
