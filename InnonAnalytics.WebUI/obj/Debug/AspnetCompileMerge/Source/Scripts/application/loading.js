


function OnBegin() {
    
    $('#loading-indicator').html("<img src=\"/Content/images/loading.gif\" />" + waitingmessage);
    $('#loading-indicator').removeClass();
    $('#loading-indicator').addClass("k-widget k-notification k-notification-info k-notification-wrap");
    $('#loading-indicator').show();
    
}

function OnSuccess(message) {
    
    $('#loading-indicator').html(message);
    $('#loading-indicator').removeClass();
    $('#loading-indicator').addClass("k-widget k-notification k-notification-success k-notification-wrap");
}

function OnFail(message) {
    
    $('#loading-indicator').html("Fail");
    $('#loading-indicator').removeClass();
    $('#loading-indicator').addClass("k-widget k-notification k-notification-error k-notification-wrap");
    alert(message);
   

}

function Hide()
{
    $('#loading-indicator').removeClass();
    $('#loading-indicator').html("");
}