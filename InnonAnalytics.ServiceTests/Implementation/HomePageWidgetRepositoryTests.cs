using Microsoft.VisualStudio.TestTools.UnitTesting;
using InnonAnalytics.Service.Implementation;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Moq;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Repository;
using InnonAnalytics.Model.DTO;
using System.Data.Entity;

namespace InnonAnalytics.Service.Implementation.Tests
{

    [TestClass()]
    public class HomePageWidgetRepositoryTests
    {

        private Mock<InnonAnalyticsEngineEntities> _mockContext;
        private DashboardRepository _mockdashboardRep;
        //private ModelStateDictionary _modelState;
        private HomePageWidgetRepository _service;
       
        [TestInitialize]
        public void Initialize()
        {
            _mockContext = new Mock<InnonAnalyticsEngineEntities>();
            _mockdashboardRep = new DashboardRepository(_mockContext.Object);
            //_modelState = new ModelStateDictionary();
            _service = new HomePageWidgetRepository(_mockContext.Object, _mockdashboardRep);
        }

        private static Mock<DbSet<tblHomePage_Widget>> GetQueryableMockDocumentDbSet()
        {

            tblHomePage_Widget tbl_home_page_widget = new tblHomePage_Widget();

            tbl_home_page_widget.Widget_Id = 21;
            tbl_home_page_widget.User_Id = "65465sd4fsdfsdfsd";
            tbl_home_page_widget.widget_x = 0;
            tbl_home_page_widget.widget_y = 1;
            tbl_home_page_widget.widget_width = 10;
            tbl_home_page_widget.widget_height = 20;

            List<tblHomePage_Widget> list_tbl_home_page = new List<tblHomePage_Widget>();

            list_tbl_home_page.Add(tbl_home_page_widget);
           

            var data = list_tbl_home_page;
            var mockDocumentDbSet = new Mock<DbSet<tblHomePage_Widget>>();
            mockDocumentDbSet.As<IQueryable<tblHomePage_Widget>>().Setup(m => m.Provider).Returns(data.AsQueryable().Provider);
            mockDocumentDbSet.As<IQueryable<tblHomePage_Widget>>().Setup(m => m.Expression).Returns(data.AsQueryable().Expression);
            mockDocumentDbSet.As<IQueryable<tblHomePage_Widget>>().Setup(m => m.ElementType).Returns(data.AsQueryable().ElementType);
            mockDocumentDbSet.As<IQueryable<tblHomePage_Widget>>().Setup(m => m.GetEnumerator()).Returns(data.AsQueryable().GetEnumerator());

            mockDocumentDbSet.Setup(d => d.Add(It.IsAny<tblHomePage_Widget>())).Callback<tblHomePage_Widget>((s) => data.Add(s));

            return mockDocumentDbSet;
        }

        [TestMethod()]
        public void Get_HomePage_Widget()
        {

            var mockDocumentDbSet = GetQueryableMockDocumentDbSet();
            _mockContext.Setup(m => m.tblHomePage_Widget).Returns(mockDocumentDbSet.Object);
            _service = new HomePageWidgetRepository(_mockContext.Object, _mockdashboardRep);  
            Assert.IsNotNull(_service.Get_Widget_For_Home_Page(21, "65465sd4fsdfsdfsd"));
        }

        [TestMethod()]
        public void Widget_Pin_To_HomePageTest()
        {
            //https://msdn.microsoft.com/en-gb/data/dn314429.aspx

            var mockSet = new Mock<DbSet<tblHomePage_Widget>>();
            var mockSet2 = new Mock<DbSet<tblDashboard_Widget>>();
            _mockContext.Setup(m => m.tblDashboard_Widget).Returns(mockSet2.Object);
            _mockContext.Setup(m => m.tblHomePage_Widget).Returns(mockSet.Object);         
           

            Assert.IsTrue(_service.Widget_Pin_To_HomePage(21,"sdhfksjdhfkjsdhfkshd"));
            mockSet.Verify(m => m.Add(It.IsAny<tblHomePage_Widget>()), Times.Once());
            _mockContext.Verify(m => m.SaveChanges(), Times.Once());

        }

        [TestMethod()]
        public void Widget_UnPin_To_HomePageTest()
        {
            var mockSet = new Mock<DbSet<tblHomePage_Widget>>();           
            _mockContext.Setup(m => m.tblHomePage_Widget).Returns(mockSet.Object);           
            HomePage_WidgetDTO tbl_home_page_widget = new HomePage_WidgetDTO();

            tbl_home_page_widget.Widget_Id = 21;
            tbl_home_page_widget.User_Id = "65465sd4fsdfsdfsd";
            tbl_home_page_widget.widget_x = 0;
            tbl_home_page_widget.widget_y = 1;
            tbl_home_page_widget.widget_width = 10;
            tbl_home_page_widget.widget_height = 20;

            Assert.IsTrue(_service.Widget_UnPin_To_HomePage(21, "sdhfksjdhfkjsdhfkshd"));
            mockSet.Verify(m => m.Remove(It.IsAny<tblHomePage_Widget>()), Times.Once());
            _mockContext.Verify(m => m.SaveChanges(), Times.Once());
        }
        [ExpectedException(typeof(ArgumentNullException))]
        [TestMethod()]
        public void UpdateTest()
        {
            var mockSet = new Mock<DbSet<tblHomePage_Widget>>();         
            _mockContext.Setup(m => m.tblHomePage_Widget).Returns(mockSet.Object);          
            HomePage_WidgetDTO tbl_home_page_widget = new HomePage_WidgetDTO();
            tbl_home_page_widget.Widget_Id = 23;
            tbl_home_page_widget.User_Id = "4";
            tbl_home_page_widget.widget_x = 0;
            tbl_home_page_widget.widget_y = 1;
            tbl_home_page_widget.widget_width = 10;
            tbl_home_page_widget.widget_height = 20;


            Assert.IsNotNull(_service.Update(tbl_home_page_widget));
            _mockContext.Verify(m => m.SaveChanges(), Times.Once());
        }
    }
}