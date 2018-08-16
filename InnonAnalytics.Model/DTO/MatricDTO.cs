using InnonAnalytics.Common.Enums;
using InnonAnalytics.Common.Static_Resources;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class MatricDTO
    {
        public int Id { get; set; }

        public string Matric_Name { get; set; }
        /// <summary>
        /// source json { Tags:[{TagID: 1},{TagID: 2}], Points: [{ElementId:1},{ElementId:1}] }
        /// </summary>
        public Source_Json Source { get; set; }

        public Rollup_Function_Option Rollup_Function { get; set; }
        /// <summary>
        /// In json response to client Rollup_Function return the enum value instead of text, the following property returns the text of enum
        /// </summary>
        public string Rollup_Function_Text { get { return this.Rollup_Function.ToString(); } } 

        public int? Group_By { get; set; }

        public int? Filter_By { get; set; }

        public int? Filter_By_Option { get; set; }

        /// <summary>
        /// This following property return Text against the value the  Filter_By_Option
        /// </summary>
        public string Filter_By_Option_Text { get { return Tuples_DTO.Get_Filter_By_Option_Value(this.Filter_By_Option); } }

        public string Filter_Text { get; set; }

        public void Convert_DTO_T0_Table(MatricDTO matric_dto)
        {
            tblMatric tbl_Matric = new tblMatric();
            tbl_Matric.Id = matric_dto.Id;
            tbl_Matric.Matric_Name = matric_dto.Matric_Name;
            tbl_Matric.Source = null;
            tbl_Matric.Rollup_Function = matric_dto.Rollup_Function.ToString();
            tbl_Matric.Group_By = matric_dto.Group_By;
            tbl_Matric.Filter_By = matric_dto.Filter_By;
            tbl_Matric.Filter_By_Option = matric_dto.Filter_By_Option;
            tbl_Matric.Filter_Text = matric_dto.Filter_Text;

        }
    }

    public class Tag
    {
        public int TagID { get; set; }
    }

    public class Point
    {
        public int ElementId { get; set; }
    }

    public class Source_Json
    {
        public IList<Tag> Tags { get; set; }
        public IList<Point> Points { get; set; }

    }
}
