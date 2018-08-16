function getAudit(row_id) {
  
    $("#audit_widget").html("<img src=\"/Content/images/loading.gif\" />");
    var data = { 'row_id': row_id };
    AjaxRequestResponse.Send("../Audit/GetAudit", data, "GET", "html", true,
        function (ServerResponse) {
            $("#audit_widget").html(ServerResponse);
        });
}