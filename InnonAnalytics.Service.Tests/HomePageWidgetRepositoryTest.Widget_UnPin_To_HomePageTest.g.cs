using System.Data.Entity;
using Microsoft.Pex.Framework.Generated;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Implementation;
// <copyright file="HomePageWidgetRepositoryTest.Widget_UnPin_To_HomePageTest.g.cs" company="Hewlett-Packard">Copyright © Hewlett-Packard 2014</copyright>
// <auto-generated>
// This file contains automatically generated tests.
// Do not modify this file manually.
// 
// If the contents of this file becomes outdated, you can delete it.
// For example, if it no longer compiles.
// </auto-generated>
using System;

namespace InnonAnalytics.Service.Implementation.Tests
{
    public partial class HomePageWidgetRepositoryTest
    {

[TestMethod]
[PexGeneratedBy(typeof(HomePageWidgetRepositoryTest))]
[PexRaisedException(typeof(NullReferenceException))]
public void Widget_UnPin_To_HomePageTestThrowsNullReferenceException273()
{
    HomePageWidgetRepository homePageWidgetRepository;
    homePageWidgetRepository =
      new HomePageWidgetRepository((IInnonAnalyticsEngineEntities)null);


    this.Widget_UnPin_To_HomePageTest
        (homePageWidgetRepository, (HomePage_WidgetDTO)null);
}
    }
}
