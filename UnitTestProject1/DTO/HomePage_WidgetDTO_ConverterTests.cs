using System;
using System.Text;
using System.Collections.Generic;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using Moq;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using AutoMapper;
using InnonAnalytics.Model.AutoMapper.Mapping;
using InnonAnalytics.Model.AutoMapper;
using InnonAnalytics.Common.Enums;

namespace UnitTestProject1.DTO
{
    [TestClass]
    public class HomePage_WidgetDTO_ConverterTests
    {
        public HomePage_WidgetDTO_ConverterTests()
        {
            //
            // TODO: Add constructor logic here

            Mapper.CreateMap<tblHomePage_Widget, HomePage_WidgetDTO>().ReverseMap();
            Mapper.CreateMap<Dashboard_Widget_DTO, HomePage_WidgetDTO>();
            //
        }

        private TestContext testContextInstance;

        /// <summary>
        ///Gets or sets the test context which provides
        ///information about and functionality for the current test run.
        ///</summary>
        public TestContext TestContext
        {
            get
            {
                return testContextInstance;
            }
            set
            {
                testContextInstance = value;
            }
        }

        #region Additional test attributes
        //
        // You can use the following additional attributes as you write your tests:
        //
        // Use ClassInitialize to run code before running the first test in the class
        [ClassInitialize()]
        public static void MyClassInitialize(TestContext testContext) { }

        //
        // Use ClassCleanup to run code after all tests in a class have run
        // [ClassCleanup()]
        // public static void MyClassCleanup() { }
        //
        // Use TestInitialize to run code before running each test 
        // [TestInitialize()]
        // public void MyTestInitialize() { }
        //
        // Use TestCleanup to run code after each test has run
        // [TestCleanup()]
        // public void MyTestCleanup() { }
        //
        #endregion

        [TestMethod]
        public void TestMethodHomePage_Widget_Table_DTO()
        {

            tblHomePage_Widget tbl_home_page_widget = new tblHomePage_Widget();

             tbl_home_page_widget.Widget_Id = 21;
            tbl_home_page_widget.User_Id = "65465sd4fsdfsdfsd";
            tbl_home_page_widget.widget_x = 0;
            tbl_home_page_widget.widget_y = 1;
            tbl_home_page_widget.widget_width = 10;
            tbl_home_page_widget.widget_height = 20;

            HomePage_WidgetDTO dto = HomePage_WidgetDTO_Converter.Convert(tbl_home_page_widget);
            Assert.IsNotNull(dto);

            tbl_home_page_widget = HomePage_WidgetDTO_Converter.Convert(dto);

            Assert.IsNotNull(tbl_home_page_widget);


            IList<tblHomePage_Widget> list_tbl_home_page = new List<tblHomePage_Widget>();

            list_tbl_home_page.Add(tbl_home_page_widget);
            list_tbl_home_page.Add(tbl_home_page_widget);
            list_tbl_home_page.Add(tbl_home_page_widget);
            list_tbl_home_page.Add(tbl_home_page_widget);
            list_tbl_home_page.Add(tbl_home_page_widget);


            IList<HomePage_WidgetDTO> listdto = HomePage_WidgetDTO_Converter.Convert(list_tbl_home_page);
            Assert.IsNotNull(listdto);

            Assert.AreEqual(listdto.Count, 5);
        }


        [TestMethod]
        public void Convert_Dashboard_Widget_Dto_TO_HomePage_Widget_DTO()
        {
            Dashboard_Widget_DTO dashboard_widget_dto = new Dashboard_Widget_DTO(ChartType.Gauge);            
            HomePage_WidgetDTO dto = HomePage_WidgetDTO_Converter.Convert(dashboard_widget_dto);
            Assert.IsNotNull(dto);

        }
    }
}
