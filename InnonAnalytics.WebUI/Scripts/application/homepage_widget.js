function WidgetPintoHomePage(widget_id)
{    
    $.ajax({
        url: '../Widget/Widget_Pin_To_Home_Page',
        data: { 'widget_id': widget_id },
        type: "Post",
        dataType: "json",
        cache: false,
        success: function (data) {
            $('#modal-popup-message').modal('show');
            if (data.Error !== "null")
            {
                
                $("#message_box_heading").html('Message');
                $("#popup-message").html('<div class="alert alert-danger fade in m-b-15"><strong>Error! </strong> ' + data.Error + ' </div>');
            }
            else
            {
                $("#message_box_heading").html('Message');
                $("#popup-message").html('<div class="alert alert-success fade in m-b-15"><strong>Success! </strong> Add to the homepage </div>');
            }            
        },
        error: function (xhr, ajaxOptions, thrownError) {            
        }
    });
}

function WidgetunPinfromHomePage(widget_id)
{
    console.log(widget_id);
    $.ajax({
        url: '',
        data: { 'widget_id': widget_id },
        type: "Post",
        dataType: "json",
        cache: false,
        success: function (data) {
         
        },
        error: function (xhr, ajaxOptions, thrownError) {
            alert('Error');
        }
    });
}


function WidgetUnPin_PintoHomePage(widget_id, message) {
    $.ajax({
        url: '../Widget/Widget_UnPin_Pin_To_Home_Page',
        data: { 'widget_id': widget_id },
        type: "Post",
        dataType: "json",
        cache: false,
        success: function (data) {
            
            if (data.Error !== "null") {
                $('#modal-popup-message').modal('show');
                $("#message_box_heading").html('Message');
                $("#popup-message").html('<div class="alert alert-danger fade in m-b-15"><strong>Error! </strong> ' + data.Error + ' </div>');
            }
            else {                
                
                
                if (typeof (load_dashboard_id) !== 'undefined')
                {
                    $('#modal-popup-message').modal('show');
                    $("#message_box_heading").html('Message');
                    $("#popup-message").html('<div class="alert alert-success fade in m-b-15"><strong>Success! </strong> ' + message + ' homepage </div>');
                }                   
                else
                    window.location.href = "../Home/Index";
                
                
            }
        },
        error: function (xhr, ajaxOptions, thrownError) {
        }
    });
}