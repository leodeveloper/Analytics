function populate_counter_chart(chart_id, counter_value ,metric_name, metric_unit) {



    var counter_chart = new Highcharts.Chart({

        chart: {
            renderTo: chart_id,
            backgroundColor: '#00acac',
            events: {
                load: function () {

                    // Draw the flow chart
                    var ren = this.renderer,
                        colors = Highcharts.getOptions().colors;

                    ren.label(metric_name, 10, 10)
                        .css({
                            //fontWeight: 'bold',
                            color: 'white'
                        })
                        .add();

                    // SaaS client label
                    ren.label(counter_value + ' ' + metric_unit, 10, 40)
                        .attr({
                            //fill: colors[0],
                            // stroke: 'white',
                            // 'stroke-width': 2,
                            //  padding: 5,
                            //  width: 500,
                            //   r: 5
                        })
                        .css({
                            fontSize: '25px',
                            color: 'white'
                        })
                        .add();
                        //.shadow(true);




                }
            }
        },
        exporting: {
            enabled: false
        },
        title: {
            text: '',
            style: {
                color: 'black'
            }
        }
    });



    list_of_Charts.push(counter_chart);

}