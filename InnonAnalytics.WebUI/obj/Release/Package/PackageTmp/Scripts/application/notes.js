
//Get the notes from the table tblNote

var _row_id;
var _table_name;

function getNotes(row_id, table_name) {
    _row_id = row_id;
    _table_name = table_name;
    $("#notes_widget").html("<img src=\"/Content/images/loading.gif\" />");
    var data = { 'row_id': row_id, 'table_name': table_name };
    AjaxRequestResponse.Send("../Note/GetNotes", data, "GET", "html", true,
        function (ServerResponse) {
            $("#notes_widget").html(ServerResponse);
        });
}

function SaveComments()
{
    if ($("#notes").val() != "" )
    {
        var data = { 'row_id': _row_id, 'table_name': _table_name, 'note': $("#notes").val() };

        AjaxRequestResponse.Send("../Note/SaveNote", data, "POST", "json", true,
            function (ServerResponse) {
                if (ServerResponse === true) {
                    alert("Note posted");
                    //Refresh grid
                    var grid = $("#livepoint_grid").data("kendoGrid");
                    grid.dataSource.read();
                    //refresh dialog model
                    getNotes(_row_id, _table_name);
                }
                else
                    alert("fail note posting");
            });
    }
    else
    {
        alert("Note is empty");
    }
   
}