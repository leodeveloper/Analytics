using InnonAnalytics.Model.DTO;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace InnonAnalytics.WebUI.Models
{
    public class GeneralViewModels
    {
    }

    /// <summary>
    /// This calss used for update the user dashboard right, Please check Index file in the DashboardAdmin
    /// </summary>
    public class Bulk_Update_Dashboard_User_Rights
    {
        public List<UserDTO> userdto { get; set; }
        public List<Dashboard_Menu_DTO> dashboarddto { get; set; }
    }


    /// <summary>
    /// This calss used for update the user element right
    /// </summary>
    public class Bulk_Update_Element_User_Rights
    {
        public List<UserDTO> userdto { get; set; }
        public List<ElementDTO> elementdto { get; set; }
    }



    #region UserDataAdmin

    public class Bulk_Update_Metric_User_Rights
    {
        public List<UserDTO> userdto { get; set; }
        public List<MetricUserUIDTO> metricdto { get; set; }
    }


    public class MetricUserUIDTO
    {
        public int Id { get; set; }
        public string Metric_Name { get; set; }

        public int? Parent_Id { get; set; }
    }

    public class Convert_UserDataAdmin
    {
        //This _aprent_Id is used for the Metric top parent node, because we do not have any top parent node thats we need add this parent node
        const int _parent_Id = 214580361;

        public static MetricUserUIDTO Convert(MetricDTO metric_dto)
        {
            MetricUserUIDTO userdataadmin_dto = new MetricUserUIDTO();
            try
            {
                userdataadmin_dto.Id = metric_dto.Id;
                userdataadmin_dto.Metric_Name = metric_dto.Metric_Name;
                userdataadmin_dto.Parent_Id = _parent_Id;
            }
            catch (Exception ex)
            {

            }

            return userdataadmin_dto;
        }

        public static IList<MetricUserUIDTO> Convert(IList<MetricDTO> list_metric_dto)
        {
            IList<MetricUserUIDTO> userdataadmin_dtos = new List<MetricUserUIDTO>();

            userdataadmin_dtos.Add(new MetricUserUIDTO { Id = _parent_Id, Metric_Name = "Metric", Parent_Id = null });

            if (list_metric_dto != null)
            {
                int list_count = list_metric_dto.Count();
                for (int j = 0; j < list_count; j++)
                {
                    userdataadmin_dtos.Add(Convert(list_metric_dto[j]));
                }
            }

            return userdataadmin_dtos;
        }


        public static IList<MetricDTO> Convert(IList<MetricUserUIDTO> list_user_metric_dto)
        {
            IList<MetricDTO> list_metric_dtos = new List<MetricDTO>();

            if (list_user_metric_dto != null)
            {
                int list_count = list_user_metric_dto.Count();
                for (int j = 0; j < list_count; j++)
                {
                    if (list_user_metric_dto[j].Id != _parent_Id)
                        list_metric_dtos.Add(new MetricDTO() { Id = list_user_metric_dto[j].Id });
                }
            }

            return list_metric_dtos;
        }

        #endregion
    }
}