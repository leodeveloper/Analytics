function onEditLivePoint(e) {

    if (e.model.Current_Value.Data_Type === 'bool' && e.model.IsRead_Only === false) {
        $('#decimal_value').hide();
        $('#bool_value').show();
    }
    else if (e.model.Current_Value.Data_Type === 'real' && e.model.IsRead_Only === false) {
        $('#decimal_value').show();
        $('#bool_value').hide();
    }
    else {

        var grid = $("#livepoint_grid").data("kendoGrid");
        grid.cancelChanges();

        $('#decimal_value').hide();
        $('#bool_value').hide();
    }

}

//Gird refresh after add new item

function onLivePointUpdateRequestEnd(e) {

    $(".comment23423").shorten({
        "showChars": 50,
        "moreText": "See More",
        "lessText": "Less",
    });


    if (e.response === undefined || e.response === null)
    {
        var grid = $("#livepoint_grid").data("kendoGrid");
        grid.cancelChanges();
        //alert("Error in updating");
    }
    else
    {
        if (e.type == "update") {
            if (e.response.Errors == null) {
                this.read();
                alert("update successfully");
            }
        }
    }
    
}

function onEditLiveDataBound()
{
    var grid = $("#livepoint_grid").data("kendoGrid");
    var gridData = grid.dataSource.view();

    for (var i = 0; i < gridData.length; i++) {
        var currentUid = gridData[i].uid;
        if (gridData[i].IsRead_Only === true) {
            var currenRow = grid.table.find("tr[data-uid='" + currentUid + "']");
            var editButton = $(currenRow).find(".k-grid-edit");
            editButton.hide();
        }
    }
}

//http://stackoverflow.com/questions/13653662/kendo-handling-errors-in-ajax-data-requests
function onRequestError(e)
{
    alert("Error in performing operation");
}