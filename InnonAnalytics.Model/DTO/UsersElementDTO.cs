using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class UsersElementDTO
    {
        public string User_Id { get; set; }
        public long Element_Id { get; set; }
    }

    public static class Convert_ElementUsers
    {
        public static List<AspNetUserElement> Convert_List_Table(IEnumerable<long> Element_ids, IEnumerable<string> user_ids)
        {
            List<AspNetUserElement> tbl_AspnetUserElement = new List<AspNetUserElement>();
            foreach (var user_id in user_ids)
            {
                try
                {
                    foreach (var Element_id in Element_ids)
                    {
                        tbl_AspnetUserElement.Add(new AspNetUserElement { Element_Id = Element_id, User_Id = user_id });
                    }
                }
                catch (Exception ex)
                {

                }
            }
            return tbl_AspnetUserElement;
        }
    }
}
