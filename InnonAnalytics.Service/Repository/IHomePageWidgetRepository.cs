using InnonAnalytics.Model.DTO;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Repository
{
    public interface IHomePageWidgetRepository
    {
        HomePage_WidgetDTO Get_Widget_For_Home_Page(int widget_id, string user_id);
        bool Widget_Pin_To_HomePage(int widget_id, string user_id);
        bool Widget_UnPin_To_HomePage(int widget_id, string user_id);

        bool Widget_Pin_UnPin_To_HomePage(int widget_id, string user_id);
    }
}
