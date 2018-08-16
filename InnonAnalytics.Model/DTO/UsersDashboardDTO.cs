using AutoMapper;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class UsersDashboardDTO
    {
        public string User_Id { get; set; }
        public int DashBoard_Id { get; set; }
    }


    public static class Convert_DashboardMenuUsers
    {
        public static AspNetUserDashboard Convert_DTO_Table(UsersDashboardDTO user_dashboard_dto)
        {
            AspNetUserDashboard tbl_AspnetUserDashboard = new AspNetUserDashboard();
            try
            {
                tbl_AspnetUserDashboard = Mapper.Map<UsersDashboardDTO, AspNetUserDashboard>(user_dashboard_dto, tbl_AspnetUserDashboard);
            }
            catch (Exception ex)
            {
                throw;
            }
            return tbl_AspnetUserDashboard;
        }


        public static List<AspNetUserDashboard> Convert_List_DTO_Table(IEnumerable<UsersDashboardDTO> user_dashboard_dtos)
        {
            List<AspNetUserDashboard> tbl_AspnetUserDashboard = new List<AspNetUserDashboard>();
            foreach (var user_dashboard_dto in user_dashboard_dtos)
            {
                try
                {
                    tbl_AspnetUserDashboard.Add(Mapper.Map<UsersDashboardDTO, AspNetUserDashboard>(user_dashboard_dto));
                }
                catch (Exception ex)
                {

                }
            }
            return tbl_AspnetUserDashboard;
        }

        public static List<AspNetUserDashboard> Convert_List_Table(IEnumerable<int> dashboard_ids, IEnumerable<string> user_ids)
        {
            List<AspNetUserDashboard> tbl_AspnetUserDashboard = new List<AspNetUserDashboard>();
            foreach (var user_id in user_ids)
            {
                try
                {
                    foreach (var dashboard_id in dashboard_ids)
                    {
                        tbl_AspnetUserDashboard.Add(new AspNetUserDashboard { DashBoard_Id = dashboard_id, User_Id = user_id });
                    }
                }
                catch (Exception ex)
                {

                }
            }
            return tbl_AspnetUserDashboard;
        }


    }
}
