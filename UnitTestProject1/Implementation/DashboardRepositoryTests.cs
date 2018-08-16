using Microsoft.VisualStudio.TestTools.UnitTesting;
using InnonAnalytics.Service.Implementation;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Moq;
using InnonAnalytics.Model.EntityModel;
using System.Data.Entity;

namespace InnonAnalytics.Service.Implementation.Tests
{
    [TestClass()]
    public class DashboardRepositoryTests
    {


        private Mock<InnonAnalyticsEngineEntities> _mockContext;
        private DashboardRepository _mockdashboardRep;


        [TestInitialize]
        public void Initialize()
        {
            _mockContext = new Mock<InnonAnalyticsEngineEntities>();
            _mockdashboardRep = new DashboardRepository(_mockContext.Object);

        }


        //private static Mock<DbSet<AspNetUserDashboard>> GetQueryableMockDocumentDbSet()
        //{
        //    List<AspNetUserDashboard> list = new List<AspNetUserDashboard>();
        //    list.Add(new AspNetUserDashboard { DashBoard_Id = 1, User_Id = "suleman" });
        //    list.Add(new AspNetUserDashboard { DashBoard_Id = 2, User_Id = "suleman" });
        //    list.Add(new AspNetUserDashboard { DashBoard_Id = 3, User_Id = "suleman" });
        //    list.Add(new AspNetUserDashboard { DashBoard_Id = 1, User_Id = "Noman" });
        //    list.Add(new AspNetUserDashboard { DashBoard_Id = 2, User_Id = "Noman" });
        //    list.Add(new AspNetUserDashboard { DashBoard_Id = 3, User_Id = "Noman" });

        //    var data = list;
        //    var mockDocumentDbSet = new Mock<DbSet<AspNetUserDashboard>>();
        //    mockDocumentDbSet.As<IQueryable<AspNetUserDashboard>>().Setup(m => m.Provider).Returns(data.AsQueryable().Provider);
        //    mockDocumentDbSet.As<IQueryable<AspNetUserDashboard>>().Setup(m => m.Expression).Returns(data.AsQueryable().Expression);
        //    mockDocumentDbSet.As<IQueryable<AspNetUserDashboard>>().Setup(m => m.ElementType).Returns(data.AsQueryable().ElementType);
        //    mockDocumentDbSet.As<IQueryable<AspNetUserDashboard>>().Setup(m => m.GetEnumerator()).Returns(data.AsQueryable().GetEnumerator());

        //    mockDocumentDbSet.Setup(d => d.Add(It.IsAny<AspNetUserDashboard>())).Callback<AspNetUserDashboard>((s) => data.Add(s));

        //    return mockDocumentDbSet;
        //}


        //[TestMethod()]
        //public void User_Dashboard_UpdateTest()
        //{
        //    var mockDocumentDbSet = GetQueryableMockDocumentDbSet();
        //    _mockContext.Setup(m => m.AspNetUserDashboards).Returns(mockDocumentDbSet.Object);


        //    string[] user_id = { "suleman", "Adnan" };
        //    //int[] dashboard_id = { 1, 2, 3 };


        //    //Assert.IsTrue(_mockdashboardRep.User_Dashboard_Update(dashboard_id, user_id));
        //}

        //[TestMethod()]
        //public void Get_All_Parent_Child_Dashboards_By_User_IdTest()
        //{
        //    var mockDocumentDbSet = GetQueryableMockDocumentDbSet();
        //    _mockContext.Setup(m => m.AspNetUserDashboards).Returns(mockDocumentDbSet.Object);


        //    string[] user_id = { "suleman", "Adnan" };          


        //    _mockdashboardRep.Get_All_Parent_Child_Dashboards_By_User_Id(user_id.AsEnumerable());
        //}
    }
}