// <copyright file="HomePageWidgetRepositoryTest.cs" company="Hewlett-Packard">Copyright © Hewlett-Packard 2014</copyright>
using System;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Service.Implementation;
using Microsoft.Pex.Framework;
using Microsoft.Pex.Framework.Validation;
using Microsoft.VisualStudio.TestTools.UnitTesting;

namespace InnonAnalytics.Service.Implementation.Tests
{
    /// <summary>This class contains parameterized unit tests for HomePageWidgetRepository</summary>
    [PexClass(typeof(HomePageWidgetRepository))]
    [PexAllowedExceptionFromTypeUnderTest(typeof(InvalidOperationException))]
    [PexAllowedExceptionFromTypeUnderTest(typeof(ArgumentException), AcceptExceptionSubtypes = true)]
    [TestClass]
    public partial class HomePageWidgetRepositoryTest
    {
        /// <summary>Test stub for Widget_UnPin_To_HomePage(HomePage_WidgetDTO)</summary>
        [PexMethod]
        public void Widget_UnPin_To_HomePageTest(
            [PexAssumeUnderTest]HomePageWidgetRepository target,
            HomePage_WidgetDTO home_page_widget_dto
        )
        {
            target.Widget_UnPin_To_HomePage(home_page_widget_dto);
            // TODO: add assertions to method HomePageWidgetRepositoryTest.Widget_UnPin_To_HomePageTest(HomePageWidgetRepository, HomePage_WidgetDTO)
        }

        /// <summary>Test stub for Widget_Pin_To_HomePage(HomePage_WidgetDTO)</summary>
        [PexMethod]
        public void Widget_Pin_To_HomePageTest(
            [PexAssumeUnderTest]HomePageWidgetRepository target,
            HomePage_WidgetDTO home_page_widget_dto
        )
        {

            home_page_widget_dto = new HomePage_WidgetDTO();

            // tbl_home_page_widget.Widget_Id = 21;
            home_page_widget_dto.User_Id = "65465sd4fsdfsdfsd";
            home_page_widget_dto.widget_x = 0;
            home_page_widget_dto.widget_y = 1;
            home_page_widget_dto.widget_width = 10;
            home_page_widget_dto.widget_height = 20;

            target.Widget_Pin_To_HomePage(home_page_widget_dto);
            // TODO: add assertions to method HomePageWidgetRepositoryTest.Widget_Pin_To_HomePageTest(HomePageWidgetRepository, HomePage_WidgetDTO)
        }
    }
}
