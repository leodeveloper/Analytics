using AutoMapper;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class HomePage_WidgetDTO
    {
        public int Widget_Id { get; set; }

        public string User_Id { get; set; }

        public int widget_x { get; set; }

        public int widget_y { get; set; }

        public int widget_width { get; set; }

        public int widget_height { get; set; }
    }

    public static class HomePage_WidgetDTO_Converter
    {
        public static HomePage_WidgetDTO Convert(tblHomePage_Widget tbl_homepage_widget)
        {
            HomePage_WidgetDTO homepage_widget_dto = new HomePage_WidgetDTO();
            try
            {
                homepage_widget_dto = Mapper.Map<tblHomePage_Widget, HomePage_WidgetDTO>(tbl_homepage_widget, homepage_widget_dto);
            }
            catch(Exception ex)
            {

            }
            return homepage_widget_dto;
        }

        public static List<HomePage_WidgetDTO> Convert(IEnumerable<tblHomePage_Widget> tbl_homepage_widget)
        {
            List<HomePage_WidgetDTO> listof_homepage_widgetDTO = new List<HomePage_WidgetDTO>();
            foreach (var homepage_widget in tbl_homepage_widget)
            {
                try
                {
                    listof_homepage_widgetDTO.Add(Mapper.Map<tblHomePage_Widget, HomePage_WidgetDTO>(homepage_widget));
                }
                catch(Exception ex)
                {

                }                
            }
            return listof_homepage_widgetDTO;
        }

        public static tblHomePage_Widget Convert(HomePage_WidgetDTO homepage_widget_dto)
        {
            tblHomePage_Widget tbl_homepage_widget = new tblHomePage_Widget();
            try
            {
                tbl_homepage_widget = Mapper.Map<HomePage_WidgetDTO, tblHomePage_Widget>(homepage_widget_dto, tbl_homepage_widget);
            }
            catch (Exception ex)
            {

            }            
            return tbl_homepage_widget;
        }

        public static HomePage_WidgetDTO Convert(Dashboard_Widget_DTO dashboard_widget_dto)
        {
            HomePage_WidgetDTO homepage_widget_dto = new HomePage_WidgetDTO();
            try
            {
                homepage_widget_dto = Mapper.Map<Dashboard_Widget_DTO, HomePage_WidgetDTO>(dashboard_widget_dto, homepage_widget_dto);
            }
            catch (Exception ex)
            {

            }
            return homepage_widget_dto;
        }
    }
}
