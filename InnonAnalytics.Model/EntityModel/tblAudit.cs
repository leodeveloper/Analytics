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
    
    public partial class tblAudit
    {
        public int Id { get; set; }
        public string User_Id { get; set; }
        public string Table_Row_Id { get; set; }
        public string Table_Name { get; set; }
        public string Old_Values { get; set; }
        public string New_Values { get; set; }
        public string Comments { get; set; }
        public System.DateTime Last_Update { get; set; }
    }
}
