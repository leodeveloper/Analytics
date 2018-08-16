function testConnection() {

    $("#frmConnection").submit(function (e) {

        OnBegin();

        var form = $('#__AjaxAntiForgeryForm');
        var token = $('input[name="__RequestVerificationToken"]', form).val();

        var postData = $(this).serialize();


        //This is for the disable dropdownlist when test connection function
        $('input[disabled]').each(function () {
            postData = postData + '&' + $(this).attr('name') + '=' + $(this).val();
        });
        //End

        var formURL = $(this).attr("action");
        $.ajax(
        {
            url: formURL,
            type: "POST",
             data: "__RequestVerificationToken=" + token + "&" + postData
           // data: postData

        }).done(function (data) {
            if (data.success === true) {
                OnSuccess(data.message);
            }
            else
                OnFail(data.message);
        })
.fail(function (data) {
    OnFail(data.message);
})
.always(function () {
    //OnSuccess()
});
        e.preventDefault(); //STOP default action
        //  e.unbind(); //unbind. to stop multiple form submit.
    });

    $("#frmConnection").submit(); //Submit  the FORM


}


function insertPopupCaption(e) {

    $('#tblConnection ._database').hide();
    $('#tblConnection ._ftp').hide();
    $('#tblConnection ._api').hide();

    $(e.container).parent().css({
        width: 'auto'
        //  height: '500px'
    });

    $('<a class="k-button k-button-icontext k-primary" onclick="testConnection()"  href="#"><span class="k-icon k-primary"></span>Test Connection</a>').insertBefore(".k-grid-update");

    if (e.model.isNew()) {
        $('.k-window-title').text("Add new connection");
        $('.k-grid-update').html("<span class=\"k-icon k-update\"></span>Save");
    }
    else {
        var dropdownlist = $("#DataConnectorType").data("kendoDropDownList");
        Enable_disable_TextField(dropdownlist.text());
        dropdownlist.enable(false);
    }
    //$('.k-window-title').text("Update Connection");
    //$('.k-grid-update').text("Update");
    //$('.k-grid-cancel').text("Cancel");
}

function error_handler(e) {
    //console.log(e);
    if (e.errors) {
        var message = "Errors:\n";
        $.each(e.errors, function (key, value) {
            if ('errors' in value) {
                $.each(value.errors, function () {
                    message += this + "\n";
                });
            }
        });
        alert(message);
    }
}



function OnSelect(e) {
    var dataItem = this.dataItem(e.item.index());
    Enable_disable_TextField(dataItem.Text);

}


//The following function is for enable or disable the Text Fields on the bases of Data Connection Type
function Enable_disable_TextField(data_connection_type) {

    if (data_connection_type == "Database") {
        $('#tblConnection ._database').show();
        $('#tblConnection ._ftp').hide();
        $('#tblConnection ._api').hide();
    }

    else if (data_connection_type == "FTP") {
        $('#tblConnection ._ftp').show();
        $('#tblConnection ._database').hide();
        $('#tblConnection ._api').hide();
    }

    else if (data_connection_type == "API") {
        $('#tblConnection ._api').show();
        $('#tblConnection ._database').hide();
        $('#tblConnection ._ftp').hide();
    }
    else {
        $('#tblConnection ._database').hide();
        $('#tblConnection ._ftp').hide();
        $('#tblConnection ._api').hide();
    }

}


//Gird refresh after add new item

function onGridDataSourceRequestEnd(e) {
    if (e.type == "update") {
        console.log("called update");
        this.read();
    }
   // console.log(e.type);
    if (e.type == "create")
    {
        this.read();
        console.log("called update");
    }
}
