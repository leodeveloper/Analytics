using System.Web;
using System.Web.Optimization;

namespace InnonAnalytics.WebUI
{
    public class BundleConfig
    {
        // For more information on bundling, visit http://go.microsoft.com/fwlink/?LinkId=301862
        public static void RegisterBundles(BundleCollection bundles)
        {

            bundles.Add(new ScriptBundle("~/bundles/jqueryval").Include());

           bundles.Add(new ScriptBundle("~/bundles/jquery").Include(
                        "~/Scripts/jquery-{version}.js"));

            // Use the development version of Modernizr to develop with and learn from. Then, when you're
            // ready for production, use the build tool at http://modernizr.com to pick only the tests you need.
            bundles.Add(new ScriptBundle("~/bundles/modernizr").Include(
                        "~/Scripts/modernizr-*"));

            bundles.Add(new ScriptBundle("~/bundles/bootstrap").Include(
                      "~/Scripts/bootstrap.js",
                      "~/Scripts/respond.js"));

            bundles.Add(new StyleBundle("~/Content/css").Include(
                      "~/Content/bootstrap.css",
                      "~/Content/site.css"));



            //Budling for the Account_Layout and login

            bundles.Add(new StyleBundle("~/content/css_Account_Layout").Include(
                "~/Content/fonts.googleapis.css",
                "~/Content/assets/plugins/jquery-ui/themes/base/minified/jquery-ui.min.css",
                "~/Content/assets/plugins/bootstrap/css/bootstrap.min.css",
                "~/Content/assets/plugins/font-awesome/css/font-awesome.min.css",
                "~/Content/assets/css/animate.min.css",
                "~/Content/assets/css/style.min.css",
                "~/Content/assets/css/style-responsive.min.css",
                "~/Content/assets/css/theme/default.css"
                ));

            bundles.Add(new ScriptBundle("~/bundles/jquery_Account_Layout").Include(
                "~/Content/assets/plugins/jquery/jquery-1.9.1.min.js",
                "~/Content/assets/plugins/jquery/jquery-migrate-1.1.0.min.js",
                "~/Content/assets/plugins/jquery-ui/ui/minified/jquery-ui.min.js",
                "~/Content/assets/plugins/bootstrap/js/bootstrap.min.js",
                "~/Content/assets/plugins/slimscroll/jquery.slimscroll.min.js",
                "~/Content/assets/plugins/jquery-cookie/jquery.cookie.js",
                "~/Content/assets/js/login-v2.demo.min.js",
                "~/Content/assets/js/apps.min.js"
                ));


            //end Budling for the Account_Layout and login


            //Bundling for the Home/Index
            bundles.Add(new ScriptBundle("~/bundles/Script_Home_Index").Include(
                "~/Content/customdatetime/js/moment.min.js",
                "~/Content/customdatetime/js/jquery.daterangepicker.js",
                //<!--the following xdomain request for the ie9 and ie8-->
                "~/Scripts/jquery.xdomainrequest.min.js",

                "~/Scripts/lodash.min.js",
                // "~/Scripts/JQueryShorten.js",
                "~/Scripts/gridster/dist/gridstack.js",
                "~/Scripts/application/helper.js",
                "~/Scripts/application/settings.js",
                "~/Scripts/application/Ajax_Request_Response.js",
                "~/Scripts/application/homepage_widget.js",
                "~/Scripts/application/loading.js",
                "~/Scripts/highcharts.js",
                "~/Scripts/exporting.js",
                "~/Scripts/application/bar_chart.js",
                "~/Scripts/application/bar_fixed_placement_chart.js",
                "~/Scripts/application/timeline_get_dates.js",
                "~/Scripts/data.js",
                "~/Scripts/heatmap.js"
                ));

            bundles.Add(new StyleBundle("~/bundles/Css_Home_Index").Include(

                "~/Content/customdatetime/css/daterangepicker.css"
             //   "~/Scripts/gridster/dist/gridstack.css"

                ));
            //End Bundling


            //_Layout Bundling

            bundles.Add(new StyleBundle("~/bundles/Css_Layout")
                //.Include("~/Content/Site.css")
                //.Include("~/Content/kendo/2014.3.1119/kendo.common.min.css")
                //.Include("~/Content/kendo/2014.3.1119/kendo.mobile.all.min.css", new CssRewriteUrlTransform())
                //.Include("~/Content/kendo/2014.3.1119/kendo.dataviz.min.css")
                //.Include("~/Content/kendo/2014.3.1119/kendo.dataviz.moonlight.min.css")
                //.Include("~/Content/kendo/2014.3.1119/kendo.moonlight.min.css")
                .Include(
                     //  < !-- ================== Kendo ================== -->
                     "~/Content/Site.css",
                     "~/Content/kendo/2014.3.1119/kendo.common.min.css",
                     "~/Content/kendo/2014.3.1119/kendo.mobile.all.min.css",
                     "~/Content/kendo/2014.3.1119/kendo.dataviz.min.css",
              //       "~/Content/kendo/2014.3.1119/kendo.dataviz.moonlight.min.css",
              //       "~/Content/kendo/2014.3.1119/kendo.moonlight.min.css",

                    //    < !-- ================== BEGIN BASE CSS STYLE ================== -->
                    // < link href = "http://fonts.googleapis.com/css?family=Open+Sans:300,400,600,700" rel = "stylesheet" />
                    //"~/Content/assets/plugins/jquery-ui/themes/base/minified/jquery-ui.min.css",
                    "~/Content/assets/plugins/bootstrap/css/bootstrap.min.css",
                    //"~/Content/assets/plugins/font-awesome/css/font-awesome.min.css",
                    "~/Content/assets/css/animate.min.css",
                    "~/Content/assets/css/style.min.css",
                    "~/Content/assets/css/style-responsive.min.css",
                    "~/Content/assets/css/theme/default.css",
                    //    < !-- ================== END BASE CSS STYLE ================== -->
                    //    < !-- ================== BEGIN PAGE LEVEL STYLE ================== -->
                    "~/Content/assets/plugins/jquery-jvectormap/jquery-jvectormap-1.2.2.css",
                     //    < !--Using custome date control so do not need this-- >
                     "~/Content/assets/plugins/bootstrap-datepicker/css/datepicker.css",
                     "~/Content/assets/plugins/bootstrap-datepicker/css/datepicker3.css",
                     "~/Content/assets/plugins/gritter/css/jquery.gritter.css"

                //  < !-- ================== END PAGE LEVEL STYLE ================== -->
                )
                .Include("~/Content/kendo/2014.3.1119/kendo.dataviz.moonlight.min.css", new CssRewriteUrlTransform())
                 .Include("~/Content/kendo/2014.3.1119/kendo.moonlight.min.css", new CssRewriteUrlTransform())
                .Include("~/Content/assets/plugins/jquery-ui/themes/base/minified/jquery-ui.min.css", new CssRewriteUrlTransform())
                .Include("~/Content/assets/plugins/font-awesome/css/font-awesome.min.css", new CssRewriteUrlTransform()));
                


            bundles.Add(new ScriptBundle("~/bundles/Script_Layout").Include(
                   // ================== BEGIN BASE JS ================== 
                   "~/Content/assets/plugins/jquery/jquery-1.9.1.min.js",
                   "~/Content/assets/plugins/jquery/jquery-migrate-1.1.0.min.js",
                   "~/Content/assets/plugins/jquery-ui/ui/minified/jquery-ui.min.js",
                   "~/Scripts/html2canvas/html2canvas.js",
                   "~/Content/assets/plugins/bootstrap/js/bootstrap.min.js",
                   "~/Scripts/jquery.validate.min.js",
                   "~/Scripts/jquery.validate.unobtrusive.min.js",

                   "~/Content/assets/plugins/slimscroll/jquery.slimscroll.min.js",
                   "~/Content/assets/plugins/jquery-cookie/jquery.cookie.js",
                   //================== END BASE JS ================== 
                   // ================== BEGIN PAGE LEVEL JS ================== 
                   "~/Content/assets/plugins/gritter/js/jquery.gritter.js",
                   "~/Content/assets/plugins/flot/jquery.flot.min.js",
                   "~/Content/assets/plugins/flot/jquery.flot.time.min.js",
                   "~/Content/assets/plugins/flot/jquery.flot.resize.min.js",
                   "~/Content/assets/plugins/flot/jquery.flot.pie.min.js",
                   "~/Content/assets/plugins/sparkline/jquery.sparkline.js",
                   "~/Content/assets/plugins/jquery-jvectormap/jquery-jvectormap-1.2.2.min.js",
                   "~/Content/assets/plugins/jquery-jvectormap/jquery-jvectormap-world-mill-en.js",
                   "~/Content/assets/plugins/bootstrap-datepicker/js/bootstrap-datepicker.js",
                   "~/Content/assets/js/dashboard.min.js",
                   "~/Content/assets/js/apps.js",
                    // ================== END PAGE LEVEL JS ================== 
                   //  < !-- ================== Kendo ================== -->
                    "~/Scripts/kendo/2014.3.1119/jszip.min.js",
                    "~/Scripts/kendo/2014.3.1119/kendo.all.min.js",
                    "~/Scripts/kendo/2014.3.1119/kendo.aspnetmvc.min.js",
                    "~/Scripts/kendo.modernizr.custom.js",
                    //   < !-- ================== Kendo End ================== -->

                    "~/Scripts/application/notes.js", //For notes
                    "~/Scripts/application/audit.js" //For notes
                ));
            //End _LayoutBundling
            BundleTable.EnableOptimizations = true;
        }
    }
}
