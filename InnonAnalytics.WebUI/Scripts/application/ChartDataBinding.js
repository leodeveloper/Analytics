
var Error_In_ChartBinding = "Error in chart data binding please check the data API";
//Chart binding
function chart_data_binding(fn)
{
    //base_api_url is deifned inthe InitializeCharts.js
    var _url = base_api_url + '/API/Widget/Get_Data_By_Chart';
    var data = "";   


        if (current_bar < list_of_bar.length) {
            data = "";
            $("#" + list_of_bar[current_bar].widget_loading_div_id).html("<img src=\"/Content/images/loading.gif\" />");

            var bar_from_time_line;
            var bar_to_time_line;
            if ($('#div_bar_fromdate_' + list_of_bar[current_bar].bar_id).text() === '' || $('#div_bar_todate_' + list_of_bar[current_bar].bar_id).text() === '') {
                bar_from_time_line = $("#fromdate").val();
                bar_to_time_line = $("#todate").val();
                $('#div_bar_fromdate_' + list_of_bar[current_bar].bar_id).text()
                $('#div_bar_todate_' + list_of_bar[current_bar].bar_id).text()
            }
            else {
                bar_from_time_line = $('#div_bar_fromdate_' + list_of_bar[current_bar].bar_id).text();
                bar_to_time_line = $('#div_bar_todate_' + list_of_bar[current_bar].bar_id).text();
            }

            data = { 'chart_type': 'Bar', 'chart_id': list_of_bar[current_bar].bar_id, 'from_date': bar_from_time_line, 'to_date': bar_to_time_line },
            AjaxRequestResponse.Send(_url, data, "GET", "json", true, BarBinding);
        }
        else if (current_heatmap < list_of_heat_map.length) {
            data = "";

            $("#" + list_of_heat_map[current_heatmap].widget_loading_div_id).html("<img src=\"/Content/images/loading.gif\" />");

            var heatmap_from_time_line;
            var heatmap_to_time_line;
            if ($('#div_heatmap_fromdate_' + list_of_heat_map[current_heatmap].heatmap_id).text() === '' || $('#div_heatmap_todate_' + list_of_heat_map[current_heatmap].heatmap_id).text() === '') {
                heatmap_from_time_line = $("#fromdate").val();
                heatmap_to_time_line = $("#todate").val();
                $('#div_heatmap_fromdate_' + list_of_heat_map[current_heatmap].heatmap_id).text()
                $('#div_heatmap_todate_' + list_of_heat_map[current_heatmap].heatmap_id).text()
            }
            else {
                heatmap_from_time_line = $('#div_heatmap_fromdate_' + list_of_heat_map[current_heatmap].heatmap_id).text();
                heatmap_to_time_line = $('#div_heatmap_todate_' + list_of_heat_map[current_heatmap].heatmap_id).text();
            }

            data = { 'chart_type': 'HeatMap', 'chart_id': list_of_heat_map[current_heatmap].heatmap_id, 'from_date': heatmap_from_time_line, 'to_date': heatmap_to_time_line },
            AjaxRequestResponse.Send(_url, data, "GET", "json", true, HeatmapBinding);
        }
        else if (current_bar_fixedplacement < list_of_bar_fixed_placement.length) {
            data = "";
            $("#" + list_of_bar_fixed_placement[current_bar_fixedplacement].widget_loading_div_id).html("<img src=\"/Content/images/loading.gif\" />");

            var barfixed_from_time_line;
            var barfixed_to_time_line;
            if ($('#div_barfixed_fromdate_' + list_of_bar_fixed_placement[current_bar_fixedplacement].bar_id).text() === '' || $('#div_barfixed_todate_' + list_of_bar_fixed_placement[current_bar_fixedplacement].bar_id).text() === '') {
                barfixed_from_time_line = $("#fromdate").val();
                barfixed_to_time_line = $("#todate").val();
                $('#div_barfixed_fromdate_' + list_of_bar_fixed_placement[current_bar_fixedplacement].bar_id).text()
                $('#div_barfixed_todate_' + list_of_bar_fixed_placement[current_bar_fixedplacement].bar_id).text()
            }
            else {
                barfixed_from_time_line = $('#div_barfixed_fromdate_' + list_of_bar_fixed_placement[current_bar_fixedplacement].bar_id).text();
                barfixed_to_time_line = $('#div_barfixed_todate_' + list_of_bar_fixed_placement[current_bar_fixedplacement].bar_id).text();
            }
            data= { 'chart_type': 'BarFixedPlacement', 'chart_id': list_of_bar_fixed_placement[current_bar_fixedplacement].bar_id, 'from_date': barfixed_from_time_line, 'to_date': barfixed_to_time_line };
            AjaxRequestResponse.Send(_url, data, "GET", "json", true, BarfixedplacementBinding);
        }
        else if (current_pie < list_of_pie.length) {
            data = "";
            $("#" + list_of_pie[current_pie].widget_loading_div_id).html("<img src=\"/Content/images/loading.gif\" />");

            var pie_from_time_line;
            var pie_to_time_line;
            if ($('#div_pie_fromdate_' + list_of_pie[current_pie].pie_id).text() === '' || $('#div_pie_todate_' + list_of_pie[current_pie].pie_id).text() === '') {
                pie_from_time_line = $("#fromdate").val();
                pie_to_time_line = $("#todate").val();
                $('#div_pie_fromdate_' + list_of_pie[current_pie].pie_id).text()
                $('#div_pie_todate_' + list_of_pie[current_pie].pie_id).text()
            }
            else {
                pie_from_time_line = $('#div_pie_fromdate_' + list_of_pie[current_pie].pie_id).text();
                pie_to_time_line = $('#div_pie_todate_' + list_of_pie[current_pie].pie_id).text();
            }
            data = { 'chart_type': 'Pie', 'chart_id': list_of_pie[current_pie].pie_id, 'from_date': pie_from_time_line, 'to_date': pie_to_time_line };
            AjaxRequestResponse.Send(_url, data, "GET", "json", true, PieBinding);
        }
        else if (current_donut < list_of_donut.length) {
            data = "";

            $("#" + list_of_donut[current_donut].widget_loading_div_id).html("<img src=\"/Content/images/loading.gif\" />");

            var donut_from_time_line;
            var donut_to_time_line;
            if ($('#div_donut_fromdate_' + list_of_donut[current_donut].donut_id).text() === '' || $('#div_donut_todate_' + list_of_donut[current_donut].donut_id).text() === '') {
                donut_from_time_line = $("#fromdate").val();
                donut_to_time_line = $("#todate").val();
                $('#div_donut_fromdate_' + list_of_donut[current_donut].donut_id).text()
                $('#div_donut_todate_' + list_of_donut[current_donut].donut_id).text()
            }
            else {
                donut_from_time_line = $('#div_donut_fromdate_' + list_of_donut[current_donut].donut_id).text();
                donut_to_time_line = $('#div_donut_todate_' + list_of_donut[current_donut].donut_id).text();
            }

            data = { 'chart_type': 'Donut', 'chart_id': list_of_donut[current_donut].donut_id, 'from_date': donut_from_time_line, 'to_date': donut_to_time_line };
            AjaxRequestResponse.Send(_url, data, "GET", "json", true, DonutBinding);
        }
        else if (current_stacked < list_of_Stacked.length) {
            data = "";
            $("#" + list_of_Stacked[current_stacked].widget_loading_div_id).html("<img src=\"/Content/images/loading.gif\" />");
            var stacked_from_time_line;
            var stacked_to_time_line;
            if ($('#div_stacked_fromdate_' + list_of_Stacked[current_stacked].stacked_id).text() === '' || $('#div_stacked_todate_' + list_of_Stacked[current_stacked].stacked_id).text() === '') {
                stacked_from_time_line = $("#fromdate").val();
                stacked_to_time_line = $("#todate").val();
                $('#div_stacked_fromdate_' + list_of_Stacked[current_stacked].stacked_id).text()
                $('#div_stacked_todate_' + list_of_Stacked[current_stacked].stacked_id).text()
            }
            else {
                stacked_from_time_line = $('#div_stacked_fromdate_' + list_of_Stacked[current_stacked].stacked_id).text();
                stacked_to_time_line = $('#div_stacked_todate_' + list_of_Stacked[current_stacked].stacked_id).text();
            }

            data = { 'chart_type': 'Stacked', 'chart_id': list_of_Stacked[current_stacked].stacked_id, 'from_date': stacked_from_time_line, 'to_date': stacked_to_time_line };
            AjaxRequestResponse.Send(_url, data, "GET", "json", true, StackedBinding);
        }
        else if (current_line < list_of_Line.length) {
            data = "";
            $("#" + list_of_Line[current_line].widget_loading_div_id).html("<img src=\"/Content/images/loading.gif\" />");
            var line_from_time_line;
            var line_to_time_line;
            if ($('#div_Line_fromdate_' + list_of_Line[current_line].line_id).text() === '' || $('#div_Line_todate_' + list_of_Line[current_line].line_id).text() === '') {
                line_from_time_line = $("#fromdate").val();
                line_to_time_line = $("#todate").val();
                $('#div_Line_fromdate_' + list_of_Line[current_line].line_id).text()
                $('#div_Line_todate_' + list_of_Line[current_line].line_id).text()
            }
            else {
                line_from_time_line = $('#div_Line_fromdate_' + list_of_Line[current_line].line_id).text();
                line_to_time_line = $('#div_Line_todate_' + list_of_Line[current_line].line_id).text();
            }

            data = { 'chart_type': 'Line', 'chart_id': list_of_Line[current_line].line_id, 'from_date': line_from_time_line, 'to_date': line_to_time_line };
            AjaxRequestResponse.Send(_url, data, "GET", "json", true, LineBinding);
        }
        else if (current_counter < list_of_counter.length) {
            data = "";
            $("#" + list_of_counter[current_counter].widget_loading_div_id).html("<img src=\"/Content/images/loading.gif\" />");


            var counter_from_time_line;
            var counter_to_time_line;
            if ($('#div_counter_fromdate_' + list_of_counter[current_counter].counter_id).text() === '' || $('#div_counter_todate_' + list_of_counter[current_counter].counter_id).text() === '') {
                counter_from_time_line = $("#fromdate").val();
                counter_to_time_line = $("#todate").val();
                $('#div_counter_fromdate_' + list_of_counter[current_counter].counter_id).text()
                $('#div_counter_todate_' + list_of_counter[current_counter].counter_id).text()
            }
            else {
                counter_from_time_line = $('#div_counter_fromdate_' + list_of_counter[current_counter].counter_id).text();
                counter_to_time_line = $('#div_counter_todate_' + list_of_counter[current_counter].counter_id).text();
            }
            data = { 'chart_type': 'Counter', 'chart_id': list_of_counter[current_counter].counter_id, 'from_date': counter_from_time_line, 'to_date': counter_to_time_line };
            AjaxRequestResponse.Send(_url, data, "GET", "json", true, CounterBinding);
        }
        else if (current_guage < list_of_gauge.length) {

            data = "";
            $("#" + list_of_gauge[current_guage].widget_loading_div_id).html("<img src=\"/Content/images/loading.gif\" />");
            var calpercentage = 0;
            var gauge_from_time_line;
            var gauge_to_time_line;
            if ($('#div_gauge_fromdate_' + list_of_gauge[current_guage].guage_id).text() === '' || $('#div_gauge_todate_' + list_of_gauge[current_guage].guage_id).text() === '') {
                gauge_from_time_line = $("#fromdate").val();
                gauge_to_time_line = $("#todate").val();
                $('#div_gauge_fromdate_' + list_of_gauge[current_guage].guage_id).text()
                $('#div_gauge_todate_' + list_of_gauge[current_guage].guage_id).text()
            }
            else {
                gauge_from_time_line = $('#div_gauge_fromdate_' + list_of_gauge[current_guage].guage_id).text();
                gauge_to_time_line = $('#div_gauge_todate_' + list_of_gauge[current_guage].guage_id).text();
            }

            data = { 'chart_type': 'Gauge', 'chart_id': list_of_gauge[current_guage].guage_id, 'from_date': gauge_from_time_line, 'to_date': gauge_to_time_line };
            AjaxRequestResponse.Send(_url, data, "GET", "json", true, GuageBinding);
        }
        else if (current_tree < list_of_tree_map.length) {
            $("#" + list_of_tree_map[current_tree].widget_loading_div_id).html("<img src=\"/Content/images/loading.gif\" />");

            var treemap_from_time_line;
            var treemap_to_time_line;
            if ($('#div_treemap_fromdate_' + list_of_tree_map[current_tree].treemap_id).text() === '' || $('#div_treemap_todate_' + list_of_tree_map[current_tree].treemap_id).text() === '') {
                treemap_from_time_line = $("#fromdate").val();
                treemap_to_time_line = $("#todate").val();
                $('#div_treemap_fromdate_' + list_of_tree_map[current_tree].treemap_id).text()
                $('#div_treemap_todate_' + list_of_tree_map[current_tree].treemap_id).text()
            }
            else {
                treemap_from_time_line = $('#div_treemap_fromdate_' + list_of_tree_map[current_tree].treemap_id).text();
                treemap_to_time_line = $('#div_treemap_todate_' + list_of_tree_map[current_tree].treemap_id).text();
            }
            data = { 'chart_type': 'TreeMap', 'chart_id': list_of_tree_map[current_tree].treemap_id, 'from_date': treemap_from_time_line, 'to_date': treemap_to_time_line };
            AjaxRequestResponse.Send(_url, data, "GET", "json", true, TreeBinding);
        }
        else {
            current_bar = 0;
            current_guage = 0;
            current_tree = 0;
            current_bar_fixedplacement = 0;
            current_heatmap = 0;
            current_pie = 0;
            current_stacked = 0;
            current_line = 0;
            current_donut = 0;
            current_counter = 0;

            try {
                do_ajax_diagram();
            }
            catch (err) {

            }
        }

}


//Individual chart binding function
function BarBinding(ServerResponse)
{
   
    if (ServerResponse.Data) {
        $("#" + list_of_bar[current_bar].widget_loading_div_id).html("");
        var returnedData = ServerResponse.Data;
        //  console.log(returnedData);
        populate_bar_chart(returnedData, list_of_bar[current_bar].div_bar_id, list_of_bar[current_bar].chart_title, list_of_bar[current_bar].precision);
    }
    else
    {
        $("#" + list_of_bar[current_bar].widget_loading_div_id).html(Error_In_ChartBinding);
        if (console) {
            console.log(ServerResponse);
        }
    }
    current_bar++;
    chart_data_binding(BarBinding);
}


function GuageBinding(ServerResponse)
{
    var calpercentage = 0;
    if (ServerResponse.Data) {
        var returnedData = ServerResponse.Data;        

        $("#" + list_of_gauge[current_guage].div_gauge_total_id).text(returnedData.Sum_Value.format(list_of_gauge[current_guage].precision, 3, ',', '.'));
        $("#" + list_of_gauge[current_guage].div_gauge_total_target).text(returnedData.Sum_Value_Target.format(list_of_gauge[current_guage].precision, 3, ',', '.'));

        $('#div_metric_unit_' + list_of_gauge[current_guage].guage_id).text(returnedData.Mertric_Unit.Unit_Symbol);
        $('#div_target_metric_unit_' + list_of_gauge[current_guage].guage_id).text(returnedData.Target_Mertric_Unit.Unit_Symbol);

        $("#" + list_of_gauge[current_guage].widget_loading_div_id).html("");

        if (returnedData.Sum_Value > 0 && returnedData.Sum_Value_Target > 0) {
            calpercentage = (returnedData.Sum_Value / returnedData.Sum_Value_Target) * 100;
        }

            $("#div-per-" + list_of_gauge[current_guage].guage_id).text(calpercentage.toFixed(2));
            $("#gauge-" + list_of_gauge[current_guage].guage_id).data("kendoRadialGauge").value(calpercentage);

        calpercentage = Number((calpercentage).toFixed(2));
        populate_gauge(list_of_gauge[current_guage].div_gauge_id, returnedData, list_of_gauge[current_guage].precision, list_of_gauge[current_guage].start_angle, list_of_gauge[current_guage].end_angle, list_of_gauge[current_guage].min, list_of_gauge[current_guage].max, calpercentage);
    }
    else
    {
        $("#" + list_of_gauge[current_guage].widget_loading_div_id).html(Error_In_ChartBinding);
        if (console) {
            console.log(ServerResponse);
        }
       
        $("#" + list_of_gauge[current_guage].div_gauge_total_id).text(0);
        $("#" + list_of_gauge[current_guage].div_gauge_total_target).text(0);
        $("#div-per-" + list_of_gauge[current_guage].guage_id).text(0);
        $("#gauge-" + list_of_gauge[current_guage].guage_id).data("kendoRadialGauge").value(calpercentage);
    }  


    current_guage++;
    chart_data_binding(GuageBinding);
}

function TreeBinding(ServerResponse) {
   

    if (ServerResponse.Data) {
        var returnedData = ServerResponse.Data;
        if (list_of_tree_map[current_tree] != undefined)
        {
            $("#" + list_of_tree_map[current_tree].widget_loading_div_id).html("");

            var return_data = [{ name: "No Data", value: 0, Items: [] }];
            if (returnedData !== null && returnedData !== undefined) {
                return_data = jQuery.parseJSON('[' + JSON.stringify(returnedData) + ']');
            }
            var dataSource = new kendo.data.HierarchicalDataSource({
                data: return_data,
                schema: {
                    model: {
                        children: "Items"
                    }
                }
            });
            var treeMap = $("#" + list_of_tree_map[current_tree].div_tree_map_id).getKendoTreeMap();
            treeMap.setDataSource(dataSource);
        }
    }
    else {

        var return_data = [{ name: "No Data", value: 0, Items: [] }];
        var dataSource = new kendo.data.HierarchicalDataSource({
            data: return_data,
            schema: {
                model: {
                    children: "Items"
                }
            }
        });
        var treeMap = $("#" + list_of_tree_map[current_tree].div_tree_map_id).getKendoTreeMap();
        treeMap.setDataSource(dataSource);
        $("#" + list_of_tree_map[current_tree].widget_loading_div_id).html(Error_In_ChartBinding);
        if (console) {
            console.log(ServerResponse);
        }
    }
    current_tree++;
    chart_data_binding(TreeBinding);
}

function BarfixedplacementBinding(ServerResponse) {
    

    if (ServerResponse.Data) {
        $("#" + list_of_bar_fixed_placement[current_bar_fixedplacement].widget_loading_div_id).html("");
        var returnedData = ServerResponse.Data;
        //  console.log(returnedData);
        populate_fixed_placement_chart(returnedData, list_of_bar_fixed_placement[current_bar_fixedplacement].div_bar_id, list_of_bar_fixed_placement[current_bar_fixedplacement].chart_title, list_of_bar_fixed_placement[current_bar_fixedplacement].precision);
    }
    else {
        $("#" + list_of_bar_fixed_placement[current_bar_fixedplacement].widget_loading_div_id).html(Error_In_ChartBinding);
        if (console) {
            console.log(ServerResponse);
        }
    }

    current_bar_fixedplacement++;
    chart_data_binding(BarfixedplacementBinding);
}

function HeatmapBinding(ServerResponse) {
  

    if (ServerResponse.Data) {
        $("#" + list_of_heat_map[current_heatmap].widget_loading_div_id).html("");
        var returnedData = ServerResponse.Data;

        $("#heatmap-metric-" + list_of_heat_map[current_heatmap].heatmap_id).html(returnedData.metric_name);

        //console.log(returnedData);
        //console.log(list_of_heat_map[current_heatmap].div_heatmap_id);
        $("#csv2").html('');
        var strdata = "Date, Time, Temperature" + "\n";
        $.each(returnedData.Json_String, function (k, v) {
            strdata += v + "\n";
        });

        $("#csv2").append(strdata);

        BindHighChart(list_of_heat_map[current_heatmap].div_heatmap_id, returnedData.MinValue, returnedData.MaxValue, returnedData.unit_symbol, list_of_heat_map[current_heatmap].precision);
    }
    else {
        $("#" + list_of_heat_map[current_heatmap].widget_loading_div_id).html(Error_In_ChartBinding);
        if(console)
        {
            console.log(ServerResponse);
        }

    }

    current_heatmap++;
    chart_data_binding(HeatmapBinding);
}

function PieBinding(ServerResponse) {
   

    if (ServerResponse.Data) {
        $("#" + list_of_pie[current_pie].widget_loading_div_id).html("");
        var ResponseData = ServerResponse.Data;
        populate_Pie_Chart(list_of_pie[current_pie].div_pie_id, ResponseData.data, list_of_pie[current_pie].precision);
    }
    else {
        $("#" + list_of_pie[current_pie].widget_loading_div_id).html(Error_In_ChartBinding);
        if (console) {
            console.log(ServerResponse);
        }
    }
    current_pie++;
    chart_data_binding(PieBinding);
}

function StackedBinding(ServerResponse) {
    

    if (ServerResponse.Data) {
        $("#" + list_of_Stacked[current_stacked].widget_loading_div_id).html("");
        var ResponseData = ServerResponse;
        populate_Stacked_Chart(list_of_Stacked[current_stacked].div_stacked_id, ResponseData.Data, list_of_Stacked[current_stacked].precision);
    }
    else {
        $("#" + list_of_Stacked[current_stacked].widget_loading_div_id).html(Error_In_ChartBinding);
        if (console) {
            console.log(ServerResponse);
        }
    }
    current_stacked++;
    chart_data_binding(StackedBinding);
}

function LineBinding(ServerResponse) {


    if (ServerResponse.Data) {
        $("#" + list_of_Line[current_line].widget_loading_div_id).html("");
        var ResponseData = ServerResponse;
        populate_Line_Chart(list_of_Line[current_line].div_line_id, ResponseData.Data, list_of_Line[current_line].precision);
    }
    else {
        $("#" + list_of_Line[current_line].widget_loading_div_id).html(Error_In_ChartBinding);
        if (console) {
            console.log(ServerResponse);
        }
    }
    current_line++;
    chart_data_binding(LineBinding);
}

function DonutBinding(ServerResponse) {
   

    if (ServerResponse.Data) {
        $("#" + list_of_donut[current_donut].widget_loading_div_id).html("");
        var ResponseData = ServerResponse.Data;
        populate_donut_Chart(list_of_donut[current_donut].div_donut_id, list_of_donut[current_donut].donutchart_footer_id, ResponseData.data, list_of_donut[current_donut].precision);
    }
    else {
        $("#" + list_of_donut[current_donut].widget_loading_div_id).html(Error_In_ChartBinding);
        if (console) {
            console.log(ServerResponse);
        }
    }
    current_donut++;
    chart_data_binding(DonutBinding);
}

function CounterBinding(ServerResponse) {
    

    if (ServerResponse.Data) {
        $("#" + list_of_counter[current_counter].widget_loading_div_id).html("");
        var ResponseData = ServerResponse.Data;

        //$("#div_metric_name_" + list_of_counter[current_counter].counter_id).text(ResponseData.Metric_Name);
        //$("#div_counter_value_" + list_of_counter[current_counter].counter_id).text(ResponseData.Value.format(list_of_counter[current_counter].precision, 3, ',', '.'));
        //$("#div_metric_unit_" + list_of_counter[current_counter].counter_id).text(ResponseData.Mertric_Unit.Unit_Symbol);
        populate_counter_chart('div_counter_' + list_of_counter[current_counter].counter_id, ResponseData.Value.format(list_of_counter[current_counter].precision, 3, ',', '.'), ResponseData.Metric_Name, ResponseData.Mertric_Unit.Unit_Symbol);
    }
    else {
        $("#" + list_of_counter[current_counter].widget_loading_div_id).html(Error_In_ChartBinding);
        if (console) {
            console.log(ServerResponse);
        }
    }
    current_counter++;
    chart_data_binding(CounterBinding);
}


function Add_New_Widget(dashboard_id) {
    $.ajax({
        url: '../Dashboard/Add_Dashboard_Widget',
        data: { 'dashboard_Id': dashboard_id },
        type: "GET",
        dataType: "html",
        cache: false,
        success: function (data) {
            $('#dashboad_widget').html(data); //write the dialog content into the diaog container
        },
        error: function (xhr, ajaxOptions, thrownError) {
            alert('Error');
        }
    });
}


function Add_New_Tab(widget_id) {
    $.ajax({
        url: '../Dashboard/Add_New_Tab',
        data: { 'widget_Id': widget_id },
        type: "GET",
        dataType: "html",
        cache: false,
        success: function (data) {
            $('#dashboad_widget').html(data); //write the dialog content into the diaog container
        },
        error: function (xhr, ajaxOptions, thrownError) {
            alert('Error');
        }
    });
}

function get_Time_Line(widget_id, chart_type) {


    $.ajax({
        url: '../Dashboard/Get_Widget_Time_Line',
        data: { 'widget_id': widget_id, 'chart_type': chart_type },
        type: "GET",
        dataType: "html",
        cache: false,
        success: function (data) {
            $('#time_line_widget').html(data); //write the dialog content into the diaog container

            $('#widget_id').val(widget_id);
            $('#chart_type').val(chart_type);

        },
        error: function (xhr, ajaxOptions, thrownError) {
            alert('Error in loding the time line');
        }
    });
}

function get_Raw_Data(chart_id, chart_type, from_date, to_date) {

   // console.log(from_date + "-" + to_date)
    $("#rawdata_widget").html("<img src=\"/Content/images/loading.gif\" />");

    if (from_date === '' && to_date === '') {
        from_date = $("#fromdate").val();
        to_date = $("#todate").val();
    }

    from_date = moment.utc($("#fromdate").val()).format('YYYY-MM-DD HH:mm:ss');
    to_date = moment.utc($("#todate").val()).format('YYYY-MM-DD HH:mm:ss');

    $.ajax({
        url: '../Metric/Get_Raw_Data',
        data: { 'chart_id': chart_id, 'chart_type': chart_type, 'from_date': from_date, 'to_date': to_date },
        type: "GET",
        dataType: "html",
        cache: false,
        success: function (data) {
            $('#rawdata_widget').html(data); //write the dialog content into the diaog container

        },
        error: function (xhr, ajaxOptions, thrownError) {
            alert('Error in getting raw data');
            $('#rawdata_widget').html("");
        }
    });
}

function Edit_Dashboard_Widget(_chart_type, chart_id) {
    $.ajax({
        url: '../Dashboard/Edit_Dashboard_Widget',
        data: { 'chart_type': _chart_type, 'chart_id': chart_id },
        type: "GET",
        dataType: "html",
        cache: false,
        success: function (data) {
            $('#dashboad_widget').html(data); //write the dialog content into the diaog container
        },
        error: function (xhr, ajaxOptions, thrownError) {
            alert('Error');
        }
    });
}

function Get_Widgets_By_Dashboard_Id(dashboard_id) {
    $.ajax({
        url: '../Dashboard/Get_Dashboard_Widgets_By_Dashboard_Id',
        data: { 'dashboard_Id': dashboard_id },
        type: "GET",
        dataType: "json",
        cache: false,
        success: function (data) {
            $.each(data, function (key, val) {
                //console.log(val.Name_Widget);
            });
        },
        error: function (xhr, ajaxOptions, thrownError) {
            alert('Error');
        }
    });
}


//Section start for the Partial View _Customize_Dashboard_Layout

function Customize_Dashboard_Layout(dashboard_id) {
    $.ajax({
        url: '../Dashboard/Customize_Dashboard_Layout',
        //data: { 'dashboard_Id': dashboard_id },
        type: "GET",
        dataType: "html",
        cache: false,
        success: function (data) {
            $('#customize_layout').html(data); //write the dialog content into the diaog container
            //set the dahboard_id in the hiddin field
            $("#Dashboard_Id").val(dashboard_id);
        },
        error: function (xhr, ajaxOptions, thrownError) {
            alert('Error');
        }
    });
}

function Customize_layout_onDataBound(arg) {
    var widget = this;
    widget.items().each(function (_, item) {
        var data = widget.dataItem(item);

        if (data.Item1 == '@Model.Layout_Option') {
            $("#Layout_Id").val(data.Item1);
            widget.select(item);
        }
    });

    //remove this handler
    widget.unbind("dataBound", arguments.callee);
}

function Customize_layout_onChange() {
    var index = this.select().index(),
       dataItem = this.dataSource.view()[index];
    $("#Layout_Id").val(dataItem.Item1);
}

//Section Ends

function get_Global_Dates() {
    return obj_global_dates = {
        startDateTime: $("#fromdate").val(),
        endDateTime: $("#todate").val()
    };
}

function reloadtree(treemapid, treemapwidgetId) {

    $("#" + treemapid).css("width", $("#" + treemapwidgetId).width());
    var treeMap = $("#" + treemapid).getKendoTreeMap();
    treeMap.resize();
}


function Remove_Chart(chart_type, chart_id, dashboard_id) {

    if (confirm(deletemesg)) {

        //Change Is_Delete in the dashboard_widget
        $.ajax({
            url: '../Dashboard/Remove_Chart_From_Widget',
            data: { 'chart_type': chart_type, 'chart_id': chart_id },
            type: "GET",
            dataType: "html",
            cache: false,
            success: function (data) {
                load_dashboard(dashboard_id);
                //alert(data);
            },
            error: function (xhr, ajaxOptions, thrownError) {
                alert('Error in deleting chart');
            }
        });
    } else {
        //t.tooltip('destroy');
    }
}



/**
 * Create a global getSVG method that takes an array of charts as an argument
 */
Highcharts.getSVG = function (charts) {
    var svgArr = [],
        top = 0,
        width = 0;

    $.each(charts, function (i, chart) {
        var svg = chart.getSVG();     
        svg = svg.replace('<svg', '<g transform="translate(0,' + top + ')" ');
        svg = svg.replace('</svg>', '</g>');

        top += chart.chartHeight;
        width = Math.max(width, chart.chartWidth);

        svgArr.push(svg);
    });

    return '<svg height="' + top + '" width="' + width + '" version="1.1" xmlns="http://www.w3.org/2000/svg">' + svgArr.join('') + '</svg>';
};

/**
 * Create a global exportCharts method that takes an array of charts as an argument,
 * and exporting options as the second argument
 */
Highcharts.exportCharts = function (charts, options) {  

    // Merge the options
    options = Highcharts.merge(Highcharts.getOptions().exporting, options);
    // Post to export server
    Highcharts.post(options.url, {
        filename: options.filename || 'chart',
        type: options.type,
        width: options.width,
        svg: Highcharts.getSVG(charts)
    });

};

function renderPdf(imgData) {
    var doc = new jsPDF();

    doc.setFontSize(40);
    doc.text(35, 25, "This is a value report");
    doc.addImage(imgData, 'JPEG', 15, 40, 400, 100);
    doc.output('datauri');

    doc.addPage();
    doc.text(20, 20, 'Do you like that?');
}


