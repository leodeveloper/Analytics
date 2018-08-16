


var handle_widget_wizard = function () {
    "use strict";
    //$("#wizard1").hide();
    $("#wizard2").hide();
    $("#wizard3").hide();
};

var Widget_Wizard = function () {
    "use strict";
    return {
        //main function
        init: function () {
            handle_widget_wizard();
        },


        load_next_widget: function (form_wizard_id, partialview_url, dashboard_id, chart_type, widget_title, widget_id) {
            //console.log(form_wizard_id);
            var $form = $("#frm_wizard_10");
            if ($form.valid()) {
                //Ajax call here

                if (form_wizard_id == 1) {
                    $.ajax({
                        url: partialview_url,
                        data: { 'dashboard_Id': dashboard_id, 'chart_type': chart_type, 'widget_title': widget_title, 'widget_Id': widget_id },
                        type: "GET",
                        dataType: "html",
                        cache: false,
                        success: function (data) {
                            $('#step2').html(data); //write the dialog content into the diaog container
                            $('#step2').removeClass('wizard-step-2 hide');
                            $('#step2').addClass('wizard-step-2 bwizard-activated');
                            $('#li-step2').addClass('active');

                            $('#step1').removeClass('wizard-step-1 bwizard-activated')
                            $('#step1').addClass('wizard-step-1 hide');
                            $('#li-step1').removeClass('active');

                            $('#step3').removeClass('wizard-step-1 bwizard-activated')
                            $('#step3').addClass('wizard-step-1 hide');
                            $('#li-step3').removeClass('active');
                        },
                        error: function (xhr, ajaxOptions, thrownError) {
                            alert('Error');
                        }
                    });
                }

            }
        }

        ,

        Save_Widget: function () {
            $.validator.unobtrusive.parse($('#frm_wizard_1'));
            $("#frm_wizard_1").submit(function (e) {               

                if ($(this).valid()) {

                    var postData = $(this).serialize();  
                    var formURL = $(this).attr("action");
                    $.ajax(
                    {
                        url: formURL,
                        type: "POST",
                       // contentType:'json',// 'application/x-www-form-urlencoded; charset=UTF-8',
                        data: postData
                    }).done(function (data) {
                        //console.log(data);
                        if (data.success === true) {

                            $('#message').html(data.message); //write the dialog content into the diaog container
                            $('#step3').removeClass('wizard-step-2 hide');
                            $('#step3').addClass('wizard-step-2 bwizard-activated');
                            $('#li-step3').addClass('active');
                            $('#step2').removeClass('wizard-step-1 bwizard-activated')
                            $('#step2').addClass('wizard-step-1 hide');
                            $('#li-step2').removeClass('active');

                            //load_dashboard(data.dashboard_id);
                            //alert(data.message);
                        }
                        else
                            alert(data.message);
                    })
            .fail(function (data) {
                OnFail(data.message);
            })
            .always(function () {
                //OnSuccess()
            });
                    e.preventDefault(); //STOP default action
                    //  e.unbind(); //unbind. to stop multiple form submit.
                }

            });
            $("#frm_wizard_1").submit(); //Submit  the FORM
        },

    }
}();

