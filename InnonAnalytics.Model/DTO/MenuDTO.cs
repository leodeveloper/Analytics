using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class MenuDTO : DescriptionTextDTO
    {

        public MenuDTO()
        {
            this.SubMenuList = new HashSet<MenuDTO>();
            this.SubMenu = new MenuDTO();
        }

        public int ID { get; set; }
        public int DescriptionID_FK { get; set; }
        public Nullable<int> ParentID { get; set; }
        public string NavigateToURL { get; set; }

     //   public DescriptionDTO Description { get; set; }

     //   public DescriptionTextDTO Text { get; set; }

        public virtual ICollection<MenuDTO> SubMenuList { get; set; }
          
        public MenuDTO SubMenu;

        public bool Disable { get; set; }

     
    }

    public static class MenuConvert
    {
        //public static void MenuConvertTableToDTO(IEnumerable<Menu> tblMenu)
        //{
        //   // tblMenu.ToList()[0].Description.LanguageDescriptions.FirstOrDefault().LongDescription

        //    List<MenuDTO> objMenuList = new List<MenuDTO>();

        //    MenuDTO objMenu;// = new MenuDTO();

        //    foreach(var vMenuDTO in tblMenu )
        //    {
        //        objMenu = new MenuDTO();
        //        objMenu = MenuConvertTableToDTO(vMenuDTO);
        //        objMenuList.Add(objMenu);
        //    }

        //}

        //public static MenuDTO MenuConvertTableToDTO(Menu tblMenu)
        //{
        //    MenuDTO objMenu = new MenuDTO();
        //    objMenu = new MenuDTO();
        //    objMenu.ID = tblMenu.ID;
        //    objMenu.NavigateToURL = tblMenu.NavigateToURL;
        //    objMenu.ParentID = tblMenu.ParentID;

        //    objMenu.ShortDescription = tblMenu.Description.LanguageDescriptions.FirstOrDefault().ShortDescription;
        //    objMenu.LongDescription = tblMenu.Description.LanguageDescriptions.FirstOrDefault().LongDescription;

        //    if (tblMenu.Menu1.Count > 0)
        //    {

        //    }


        //    return objMenu;

        //}
    }
}
