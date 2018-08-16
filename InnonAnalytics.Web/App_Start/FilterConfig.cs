using System;
using System.Web;
using System.Web.Mvc;

namespace InnonAnalytics.Web
{
    public class FilterConfig
    {
        public static void RegisterGlobalFilters(GlobalFilterCollection filters)
        {
            filters.Add(new HandleErrorAttribute());
        }
    }


    //[AttributeUsage(AttributeTargets.Class | AttributeTargets.Method, AllowMultiple = true, Inherited = true)]
    //public class HandleErrorWithViewDataAttribute : HandleErrorAttribute
    //{
    //    public override void OnException(ExceptionContext filterContext)
    //    {
    //        //skip if already handled
    //        if (filterContext.ExceptionHandled == true)
    //            return;
    //        base.OnException(filterContext);
    //        //skip if not handled by base
    //        if (filterContext.ExceptionHandled == false)
    //            return;
    //        var result = filterContext.Result as ViewResult;
    //        //Skip if not ViewResult
    //        if (result == null)
    //            return;
    //        //Skip the keys that is already in ViewResult's ViewData
    //        //var keysToBeAdded = filterContext.Controller
    //        //.ViewData
    //        //.Where(item => !result.ViewData.ContainsKey(item.Key));
    //        //foreach (var item in keysToBeAdded)
    //        //{
    //        //    result.ViewData.Add(item);
    //        //}
    //    }
    //}
}
