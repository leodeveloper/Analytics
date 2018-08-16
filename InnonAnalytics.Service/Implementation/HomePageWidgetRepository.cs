using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Data.Entity;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
    public class HomePageWidgetRepository : IHomePageWidgetRepository
    {

        private IInnonAnalyticsEngineEntities _dbcontext;
        private IDashboardRepository _dashboadRepository;
        public HomePageWidgetRepository(IInnonAnalyticsEngineEntities db, IDashboardRepository dashboadRepository)
        {
            _dbcontext = db;
            _dashboadRepository = dashboadRepository;
        }

        public HomePage_WidgetDTO Get_Widget_For_Home_Page(int widget_id, string user_id)
        {
            tblHomePage_Widget tbl_homepage_widget = _dbcontext.tblHomePage_Widget.SingleOrDefault(homepage => homepage.Widget_Id == widget_id && homepage.User_Id == user_id);
            return HomePage_WidgetDTO_Converter.Convert(tbl_homepage_widget);
        }

        public List<HomePage_WidgetDTO> Get_Widgets_For_Home_Page(string user_id)
        {
            IEnumerable<tblHomePage_Widget> tbl_homepage_widget = _dbcontext.tblHomePage_Widget.Where(homepage => homepage.User_Id == user_id);
            return HomePage_WidgetDTO_Converter.Convert(tbl_homepage_widget);
        }


        public bool Widget_Pin_UnPin_To_HomePage(int widget_id, string user_id)
        {
            if (Get_Widget_For_Home_Page(widget_id, user_id) != null)
            {
                return Widget_UnPin_To_HomePage(widget_id, user_id);
            }
            else
                return Widget_Pin_To_HomePage(widget_id, user_id);
        }

        /// <summary>
        /// Add Widget to homepage
        /// </summary>
        /// <param name="home_page_widget_dto"></param>
        public bool Widget_Pin_To_HomePage(int widget_id, string user_id)
        {

            if (Get_Home_Page_By_ID_And_User_ID(widget_id, user_id) == null)
            {
                try
                {
                    tblHomePage_Widget tbl_homepage_widget = HomePage_WidgetDTO_Converter.Convert(Get_Dashboard_Widget_By_Widget_ID_For_Home_Page(widget_id));
                    tbl_homepage_widget.User_Id = user_id;
                    _dbcontext.tblHomePage_Widget.Add(tbl_homepage_widget);
                    _dbcontext.SaveChanges();
                    return true;
                }
                catch(Exception ex)
                {
                    throw ex;
                }               
            }
            else
                throw new Exception(Resources.widget_all_ready_added);
            
            
        }

        private HomePage_WidgetDTO Get_Dashboard_Widget_By_Widget_ID_For_Home_Page(int widget_id)
        {
            Dashboard_Widget_DTO dashboard_widget_dto = _dashboadRepository.Get_Dashboard_Widget_By_Id(widget_id);
            return HomePage_WidgetDTO_Converter.Convert(dashboard_widget_dto);
        }

        private tblHomePage_Widget Get_Home_Page_By_ID_And_User_ID(int widget_Id, string user_id)
        {
            return _dbcontext.tblHomePage_Widget.Find(widget_Id, user_id); 
        }

        /// <summary>
        /// Remove widget from home page
        /// </summary>
        /// <param name="home_page_widget_dto"></param>
        public bool Widget_UnPin_To_HomePage(int widget_id, string user_id)
        {
            tblHomePage_Widget tbl_homepage_widget = Get_Home_Page_By_ID_And_User_ID(widget_id,  user_id);
            _dbcontext.tblHomePage_Widget.Remove(tbl_homepage_widget);
            _dbcontext.SaveChanges();
            return true;
        }

        public HomePage_WidgetDTO Update(HomePage_WidgetDTO home_page_widget_dto)
        {
            tblHomePage_Widget tbl_home_page_update = Get_Home_Page_By_ID_And_User_ID(home_page_widget_dto.Widget_Id, home_page_widget_dto.User_Id);
            try
            {
                if(tbl_home_page_update != null)
                {
                    tbl_home_page_update = HomePage_WidgetDTO_Converter.Convert(home_page_widget_dto);
                    _dbcontext.tblHomePage_Widget.Attach(tbl_home_page_update);
                    _dbcontext.Entry(tbl_home_page_update).State = EntityState.Modified;

                    _dbcontext.SaveChanges();
                    return home_page_widget_dto;
                }
                else
                {
                    throw new ArgumentNullException("Home Page widget not forund");
                }                
            }
            catch { throw; }
           
        }


    }
}
