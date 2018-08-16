
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
    exporting: { enabled: true },
    series: []
};
var GraphSeries = {
    name: "",
    data: [],
    point: { events: { click: null } }
};

var chart;
function populate_bar_chart(series, div_barchart_id, chart_title) {
    

   


    //var json = [{
    //    name: 'Year 1800',
    //    data: [107, 31, 635, 203, 2]
    //}, {
    //    name: 'Year 1900',
    //    data: [133, 156, 947, 408, 6]
    //}, {
    //    name: 'Year 2012',
    //    data: [1052, 954, 4250, 740, 38]
    //}];

  //  var json = [{ "name": "Matric", "data": [49990.299999952316, 334915.33999997954, 32437.300072953105, 542745.6592672497, 371536.56635380455, 22755.099828332663, 24002.299117565155, 7015.000095933676, 15194.600195214152, 46772.10094726086, 1042425.4596456264, 1300096.5031999757, 20949.59962157905, 23844.600206837058, 117234.49999950826, 35912.2027336061, 15256.699999138713, 21279.199736773968, 19422.800579950213, 17448.400122448802, 9381.60048827529, 579.2999999523163] }, { "name": "Target", "data": [0, 332455.33999993483, 0, 524032.4599998028, 301632.56620008417, 0, 0, 0, 0, 0, 1037776.2793995116, 1300096.5031999757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0] }]
   

    //var xCategories = [];

    //for (i = 0; i < series.Aggregate_Value.length; i++) {
    //    cat = series.Aggregate_Value[i].Group_By;
    //    if (xCategories.indexOf(cat) === -1) {
    //        xCategories[xCategories.length] = cat;
    //    }
    //}

    //console.log(xCategories);

    var graphSeries = eval("GraphSeries");
        graphSeries.data = [];

        graphSeries.name = div_barchart_id;

        //for (i = 0; i < series.Aggregate_Value.length; i++) {
        //    val = series.Aggregate_Value[i].Value;

        //    console.log(series.Aggregate_Tagret_Value.lenght);

        //    if (series.Aggregate_Tagret_Value.lenght > i)
        //        val2 = series.Aggregate_Tagret_Value[i].Value;
        //    else
        //        val2 = 0;

        //    graphSeries.name = "series" + i;
        //    graphSeries.data[graphSeries.data.length] = val;
        //    graphSeries.data[graphSeries.data.length] = val2;
        //    //graphSeries.data.push({
        //    //    y: parseInt(val),
        //    //    //color: 'red'
        //    //});
        //}


       
        //var cate = JSON.stringify(series.Categories);
        //console.log(JSON.stringify(series.Categories));
        //console.log(JSON.stringify(series.Json_Data));

        

        var graphOptions = eval("GraphOptions");
        graphOptions.series = [];

        graphOptions.title = "Hello";
        graphOptions.xAxis.categories = series.Categories;//["-", "Atrium", "Bereavement & Mortuary", "Critical Care", "Day Care", "Emergency & Rainbow", "Imaging", "Materials Management", "Medical Engineering", "Miscellaneous", "Offices L2", "OPD", "Pathology", "Pharmacy", "Theatres", "Ward 1 & Neo-natal", "Ward 2", "Ward 3 & Renal OPD", "Ward 4", "Ward 5", "Ward 5b", "Ward 7 & Oncology"];// cate; //  ['Africa', 'America', 'Asia', 'Europe', 'Oceania'];
        graphOptions.chart.renderTo = div_barchart_id;
        graphOptions.series = series.Json_Data;
       // graphOptions.series.push(graphSeries2);

        new Highcharts.Chart(graphOptions);
  
}
