//Hight number formate
Highcharts.setOptions({
    lang: {
        decimalPoint: '.',
        thousandsSep: ','
    }
});

// this variable use for save all chart objects, use for pdf export
var list_of_Charts = [];


var base_api_url = window.ApplicationSettings.ApiURL();
var current_bar = 0;
var current_bar_fixedplacement = 0;
var current_guage = 0;
var current_tree = 0;
var current_heatmap = 0;
var current_pie = 0;
var current_stacked = 0;
var current_line = 0;
var current_donut = 0;
var current_counter = 0;

var list_of_gauge = [];
var list_of_bar = [];
var list_of_bar_fixed_placement = [];
var list_of_tree_map = [];
var list_of_heat_map = [];
var list_of_pie = [];
var list_of_Stacked = [];
var list_of_Line = [];
var list_of_donut = [];
var list_of_counter = [];

function counter(counter_id, widget_loading_div_id, precision) {
    this.counter_id = counter_id;
    this.widget_loading_div_id = widget_loading_div_id;
    this.precision = precision;
}
function guage(guage_id, div_gauge_id, div_gauge_total_id, div_gauge_total_target, widget_loading_div_id, start_angle, end_angle, min, max, precision) {
    this.guage_id = guage_id;
    this.div_gauge_id = div_gauge_id;
    this.div_gauge_total_id = div_gauge_total_id;
    this.div_gauge_total_target = div_gauge_total_target;
    this.widget_loading_div_id = widget_loading_div_id;
    this.start_angle = start_angle;
    this.end_angle = end_angle;
    this.min = min;
    this.max = max;
    this.precision = precision;
}

function heatmap(heatmap_id, widget_loading_div_id, div_heatmap_id, chart_title, precision) {
    this.heatmap_id = heatmap_id;
    this.widget_loading_div_id = widget_loading_div_id;
    this.div_heatmap_id = div_heatmap_id;
    this.chart_title = chart_title;
    this.precision = precision;
}

function bar(bar_id, widget_loading_div_id, div_bar_id, chart_title, precision) {
    this.bar_id = bar_id;
    this.widget_loading_div_id = widget_loading_div_id;
    this.div_bar_id = div_bar_id;
    this.chart_title = chart_title;
    this.precision = precision;
}

function pie(pie_id, widget_loading_div_id, div_pie_id, chart_title, precision) {
    this.pie_id = pie_id;
    this.widget_loading_div_id = widget_loading_div_id;
    this.div_pie_id = div_pie_id;
    this.chart_title = chart_title;
    this.precision = precision;
}

function donut(donut_id, donutchart_footer_id, widget_loading_div_id, div_donut_id, chart_title, precision) {
    this.donut_id = donut_id;
    this.donutchart_footer_id = donutchart_footer_id;
    this.widget_loading_div_id = widget_loading_div_id;
    this.div_donut_id = div_donut_id;
    this.chart_title = chart_title;
    this.precision = precision;
}

function stacked(stacked_id, widget_loading_div_id, div_stacked_id, chart_title, precision) {
    this.stacked_id = stacked_id;
    this.widget_loading_div_id = widget_loading_div_id;
    this.div_stacked_id = div_stacked_id;
    this.chart_title = chart_title;
    this.precision = precision;
}

function line(line_id, widget_loading_div_id, div_line_id, chart_title, precision) {
    this.line_id = line_id;
    this.widget_loading_div_id = widget_loading_div_id;
    this.div_line_id = div_line_id;
    this.chart_title = chart_title;
    this.precision = precision;
}

function bar_Fixedplacement(bar_id, widget_loading_div_id, div_bar_id, chart_title, precision) {
    this.bar_id = bar_id;
    this.widget_loading_div_id = widget_loading_div_id;
    this.div_bar_id = div_bar_id;
    this.chart_title = chart_title;
    this.precision = precision;
}

function treemap(treemap_id, div_tree_map_id, widget_loading_div_id, precision) {
    this.treemap_id = treemap_id;
    this.div_tree_map_id = div_tree_map_id;
    this.widget_loading_div_id = widget_loading_div_id;
    this.precision = precision;
}