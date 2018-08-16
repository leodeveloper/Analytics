using System;
using DotNet.Highcharts;
using DotNet.Highcharts.Enums;
using DotNet.Highcharts.Helpers;
using DotNet.Highcharts.Options;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using System.Drawing;
using InnonAnalytics.WebApi.Models;

namespace InnonAnalytics.WebApi.Controllers
{
    public class StockChartsController : ApiController
    {
        [System.Web.Http.AcceptVerbs("GET", "POST")]
        [System.Web.Http.HttpGet]
        public HttpResponseMessage Index()
        {

            
            Highcharts chart = new Highcharts("StockChart")
              .InitChart(new Chart { ZoomType = ZoomTypes.Xy })
              .SetExporting(new Exporting { Enabled = true,  })
              .SetTitle(new Title { Text = "Average Monthly Weather Data for Tokyo" })
              .SetSubtitle(new Subtitle { Text = "Source: WorldClimate.com" })
              .SetXAxis(new XAxis { Categories = new[] { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" } })
              .SetYAxis(new[]
                {
                    new YAxis
                    {
                        Labels = new YAxisLabels
                        {
                            Formatter = "function() { return this.value +'°C'; }",
                            Style = "color: '#89A54E'"
                        },
                        Title = new YAxisTitle
                        {
                            Text = "Temperature",
                            Style = "color: '#89A54E'"
                        },
                        Opposite = true
                    },
                    new YAxis
                    {
                        Labels = new YAxisLabels
                        {
                            Formatter = "function() { return this.value +' mm'; }",
                            Style = "color: '#4572A7'"
                        },
                        Title = new YAxisTitle { Style = "color: '#4572A7'" },
                        GridLineWidth = 0
                    },
                    new YAxis
                    {
                        Labels = new YAxisLabels
                        {
                            Formatter = "function() { return this.value +' mb'; }",
                            Style = "color: '#AA4643'"
                        },
                        Title = new YAxisTitle
                        {
                            Text = "Sea-Level Pressure",
                            Style = "color: '#AA4643'"
                        },
                        GridLineWidth = 0,
                        Opposite = true
                    }
                })

              .SetTooltip(new Tooltip { Formatter = "TooltipFormatter" })
              .AddJavascripFunction("TooltipFormatter",
                  @"var unit = {
                   'Rainfall': 'mm',
                   'Temperature': '°C',
                   'Sea-Level Pressure': 'mb'
                 }[this.series.name];
            
                return ''+
                   this.x +': '+ this.y +' '+ unit;")
              .SetLegend(new Legend
              {
                  Layout = Layouts.Vertical,
                  Align = HorizontalAligns.Left,
                  X = 120,
                  VerticalAlign = VerticalAligns.Top,
                  Y = 80,
                  Floating = true,
                  BackgroundColor = new BackColorOrGradient(ColorTranslator.FromHtml("#FFFFFF"))
              })
              .SetPlotOptions(new PlotOptions
              {
                  Line = new PlotOptionsLine
                  {
                      Marker = new PlotOptionsLineMarker { Enabled = false },
                      DashStyle = DashStyles.ShortDot
                  }
              })
              .SetSeries(new[]
                {
                    new Series
                    {
                        Name = "Rainfall",
                        Color = ColorTranslator.FromHtml("#4572A7"),
                        Type = ChartTypes.Column,
                        YAxis = "1",
                    //    Data = new Data(new object[] { 49.9, 71.5, 106.4, 129.2, 144.0, 176.0, 135.6, 148.5, 216.4, 194.1, 95.6, 54.4 })
                         Data = new Data(new object[] { 49.9, 71.5, 106.4, 129.2, 144.0, 176.0, 135.6, 148.5, 216.4, 194.1, 95.6, 54.4 })
                    },
                    new Series
                    {
                        Name = "Sea-Level Pressure",
                        Color = ColorTranslator.FromHtml("#AA4643"),
                        Type = ChartTypes.Spline,
                        YAxis = "2",
                        Data = new Data(new object[] { 1016, 1016, 1015.9, 1015.5, 1012.3, 1009.5, 1009.6, 1010.2, 1013.1, 1016.9, 1018.2, 1016.7 }),
                        PlotOptionsSpline = new PlotOptionsSpline
                        {
                            Marker = new PlotOptionsSplineMarker { Enabled = false },
                            DashStyle = DashStyles.ShortDot
                        }
                    },
                    new Series
                    {
                        Name = "Temperature",
                        Color = ColorTranslator.FromHtml("#89A54E"),
                        Type = ChartTypes.Spline,
                        Data = new Data(new object[] { 7.0, 6.9, 9.5, 14.5, 18.2, 21.5, 25.2, 26.5, 23.3, 18.3, 13.9, 9.6 })
                    }
                });


            try
            {
                

                string a = chart.ToHtmlString();

               var t=  JsonSerializer.Serialize(chart.ChartContainerHtmlString());

                return Request.CreateResponse(HttpStatusCode.OK, new APIResponseWrapper()
                {
                    Data = a
                });
            }
            catch (Exception ex)
            {
                return Request.CreateResponse(HttpStatusCode.BadRequest, new APIResponseWrapper()
                {
                    Message = ex.Message,
                    Errors = ex.InnerException != null ? ex.InnerException.Message : null

                });
            }
        }
    }
}
