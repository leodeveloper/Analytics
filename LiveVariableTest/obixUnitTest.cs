using InnonAnalytics.LiveVariables;
using System;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using InnonAnalytics.Common.Enums;

namespace InnonAnalytics.LiveVariables.Tests
{
    [TestClass()]
    public class obixUnitTest
    {
        [TestMethod()]
        public void SetLiveVariableTest()
        {

            ILiveVariable livevariable = new Obix("http://37.59.20.43:81/obix/config/", "ObixUser", "Andyefrumos1");
             string url3 = "http://37.59.20.43:81/obix/config/Folder/NumericWritable/";

            //  livevariable.SetLiveVariable(url, 1.2m);


            string url2 = "http://37.59.20.43:81/obix/config/Folder/BooleanWritable/";
            string url = "http://37.59.20.43:81/obix/config/Richmond/Flat$202/Outside$20Temp/";
            string url4 = "http://37.59.20.43:81/obix/config/Richmond/Flat%24202/Setpoint/";
            string url5 = "http://37.59.20.43:81/obix/config/Richmond/Flat%24202/Room%2420Temp/";

            livevariable.SetLiveVariable(url5, 35.66666666666666m);
        }

        [TestMethod()]
        public void SetLiveVariableTest1()
        {
            ILiveVariable livevariable = new Obix("http://37.59.20.43:81/obix/", "ObixUser", "Andyefrumos1");

            string url = "http://37.59.20.43:81/obix/config/Richmond/Flat%24202/Setpoint/";
            livevariable.SetValueLiveVariable<decimal>(url, 81m);
            url = "http://37.59.20.43:81/obix/config/Richmond/Flat$201/Lights/";
            livevariable.SetValueLiveVariable<bool>(url, false);
            url = "http://37.59.20.43:81/obix/config/Richmond/Flat$203/Switch/";
            livevariable.SetValueLiveVariable<Obix_Point_Enum>(url, Obix_Point_Enum.ON);
        }
    }
}

namespace LiveVariableTest
{
    [TestClass]
    public class obixUnitTest
    {
        [TestMethod]
        public void TestMethod1()
        {
        }
    }
}
