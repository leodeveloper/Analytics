
//http://stackoverflow.com/questions/14635897/highchart-multiple-bar-charts-in-a-single-webpage
var GraphOptions = {
    chart: { renderTo: null, type: 'column' },
    title: { text: null },
    subtitle: { text: null },
    xAxis: {
        categories: null,
        crosshair: false
    },
    yAxis: { min: 0, title: { text: "kWH" }, labels: { overflow: 'justify' } },
    //tooltip: { formatter: function () { return '' + this.x + ' = ' + this.y; } },
    tooltip: {
        shared: true
    },
    //plotOptions: {
    //    column: {
    //        grouping: false,
    //        pointPadding: 0.2,
    //        shadow: false,
    //        borderWidth: 0
    //    }
    //},
    plotOptions: {
        bar: {
            dataLabels: {
                enabled: true
            }
        }
    },
    //legend: {
    //    layout: 'vertical',
    //    align: 'right',
    //    verticalAlign: 'top',
    //    x: -40,
    //    y: 80,
    //    floating: true,
    //    borderWidth: 1,
    //    backgroundColor: ((Highcharts.theme && Highcharts.theme.legendBackgroundColor) || '#FFFFFF'),
    //    shadow: true
    //},
    credits: {
        enabled: false
    },
    exporting: {
        enabled: true,
        scale: 2,
        sourceHeight: 400,
        sourceWidth: 1500
    },
    series: []
};
var GraphSeries = {
    name: "",
    data: [],
    point: { events: { click: null } }
};

var chart;
function populate_bar_chart(series, div_barchart_id, chart_title, precision) {

    var graphSeries = eval("GraphSeries");
    graphSeries.data = [];

    graphSeries.name = div_barchart_id;


    var graphOptions = eval("GraphOptions");
    graphOptions.series = [];
    graphOptions.tooltip = {
        formatter: function () {
            return '<b>' + this.x + '</b><br/>' +
                this.series.name + ': ' + this.y.format(precision, 3, ',', '.');
        }
    };
    graphOptions.title = "Hello";
    graphOptions.xAxis.categories = series.Categories;//["-", "Atrium", "Bereavement & Mortuary", "Critical Care", "Day Care", "Emergency & Rainbow", "Imaging", "Materials Management", "Medical Engineering", "Miscellaneous", "Offices L2", "OPD", "Pathology", "Pharmacy", "Theatres", "Ward 1 & Neo-natal", "Ward 2", "Ward 3 & Renal OPD", "Ward 4", "Ward 5", "Ward 5b", "Ward 7 & Oncology"];// cate; //  ['Africa', 'America', 'Asia', 'Europe', 'Oceania'];
    graphOptions.yAxis.title.text = series.Y_Axis;
    graphOptions.chart.renderTo = div_barchart_id;
    graphOptions.series = series.Json_Data;
    // graphOptions.series.push(graphSeries2);

    var bar_chart = new Highcharts.Chart(graphOptions);   
    list_of_Charts.push(bar_chart);
}
