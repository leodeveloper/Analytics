var elements = {};
var active_child_grid_id = "";
//this parentid is using for to expand the tree after adding the node into the tree.
var parentid = null;
var selectedNode = null;    

//var $tv = $("#treeview").kendoTreeView();



$(document).ready(function () {

    $(document).ajaxStart(function () {
        OnBegin();
    }).ajaxStop(function () {
        Hide();
    });

    //the following function is for to add points into the tree
    $("#addnewpoints").click(function (e) {        

        e.preventDefault();       

        if (selectedNode == null) {
            alert("Please select the site or equip");
        }
        else {

            var models = [];
            var form = $('#__AjaxAntiForgeryForm');
            var token = $('input[name="__RequestVerificationToken"]', form).val();

            var treedata = $('#treeview').data('kendoTreeView').dataItem(selectedNode);
            parentid = treedata.id;

            $('div#' + active_child_grid_id + ' input.chkb:checkbox').each(function () {

                //   var checked = this.checked,
                //   dataItem.ConnectionInfo.ConnectionID);

                var checkbox = $(this);
                if (checkbox.is(":checked") && !checkbox.is(":disabled")) {

                    var row = $(this).closest("tr");
                    var grid = $("#" + active_child_grid_id).data("kendoGrid");
                    var dataItem = grid.dataItem(row);
                    models.push(dataItem);

                    checkbox.prop("disabled", true);
                }
            });

            //  dataobject = { datamodel: models, parentID: parentid, __RequestVerificationToken: token };
            //  (dataobject);


            var param = new Object();
            param.parentID = parentid;
            param.datamodel = models;
            param.tagId = 3;
            //  param.__RequestVerificationToken = token;
            var parameter = JSON.stringify(param);

            $.ajax({
                type: "POST",
                //url: '@Url.Action("Element_Point_Save", "Discovery")',
                url: '/Discovery/Element_Point_Save',
                dataType: 'json',
                data: parameter,

                contentType: 'application/json; charset=utf-8',
                success: function (data) {

                    refreshNode();
                    $("#" + active_child_grid_id).data("kendoGrid").dataSource.read();
                    //$("#grid").data("kendoGrid").dataSource.read();
                     

                },
                error: function (data) {


                }
            });

        }
    });


    //Tree View

    var treeview = $("#treeview").data("kendoTreeView"),
        handleTextBox = function (callback) {
            return function (e) {
                if (e.type != "keypress" || kendo.keys.ENTER == e.keyCode) {
                    callback(e);
                }
            };
        };


    $("#clearselection").click(function () {
        treeview.select($()); // clears selection
        parentid = null;
    });



    var addnewsite = handleTextBox(function (e) {
            

        var form = $('#__AjaxAntiForgeryForm');
        var token = $('input[name="__RequestVerificationToken"]', form).val();

        //Site can not have any parent
        //TageID 1 is for site
        var data = { 'childName': $("#siteText").val(), 'parentID': null, 'tagId': 1, __RequestVerificationToken: token };

        $.ajax({
            type: "POST",
            url: '/Discovery/Element_Structure_Save',
            cache: false,
            data: data
            //other data
                
               
        }).done(function (data) {

            var tree = $("#treeview").data("kendoTreeView");
            tree.dataSource.read();

            //refreshNode();              
        });  // treeview.append({ ID: 0, Element_Name: $("#appendNodeText").val(), hasChildren: false }, selectedNode);
    });

    var addnewequip = handleTextBox(function (e) {
        if (selectedNode != null) {
            //get selected node Id
            var data = $('#treeview').data('kendoTreeView').dataItem(selectedNode);
            parentid = data.id;
              

            if (data.Tag == "site" || data.Tag == "equip") {                  

                var form = $('#__AjaxAntiForgeryForm');
                var token = $('input[name="__RequestVerificationToken"]', form).val();
                //TageID 2 is for equp
                var data = { 'childName': $("#equipText").val(), 'parentID': parentid, 'tagId': 2, __RequestVerificationToken: token };

                $.ajax({
                    type: "POST",
                    url: '/Discovery/Element_Structure_Save',
                    cache: false,                    
                    data: data,
                       
                }).done(function (data) {
                    refreshNode();                     
                });  // treeview.append({ ID: 0, Element_Name: $("#appendNodeText").val(), hasChildren: false }, selectedNode);
            }
            else
            {
                alert("Equipment can only add as a child of site or equipment");
            }

        }
        else {
            alert("Please select a site or equipment to add new equipment");
        }
    });



    $("#addnewsite").click(addnewsite);
    $("#addnewequip").click(addnewequip);


//    //       $("#appendNodeText").keypress(append);
//    var filter = handleTextBox(function (e) {
//        var filterText = $("#filterText").val();

//        if (filterText !== "") {
//            treeview.dataSource.filter({
//                field: "Element_Name",
//                operator: "contains",
//                value: filterText
//            });
//        } else {
//            treeview.dataSource.filter({});
//        }
//    });

//    $("#filterDataSource").click(filter);
//    // $("#filterText").keypress(filter);


//    $("#filterText").keyup(function (e) {
//        var filterText = $(this).val();

//        if (filterText !== "") {
//            $("#treeview .k-group .k-group .k-in").closest("li").hide();
//            $("#treeview .k-group .k-group .k-in:contains(" + filterText + ")").each(function () {
//                $(this).parents("ul, li").each(function () {
//                    $(this).show();
//                });
//            });
//        } else {
//            $("#treeview .k-group").find("ul").hide();
//            $("#treeview .k-group").find("li").show();
//        }
//    });

    InitSearch("#treeview", "#filterText");
});

    

function refreshNode() {
    if (selectedNode == null) {          
        var tree = $("#treeview").data("kendoTreeView");
        tree.dataSource.read();
    }
    else {    

        var treeView = $("#treeview").data("kendoTreeView");       
           
        var selectedDataItem = treeView.dataItem(selectedNode);
            
        selectedDataItem.load();
        selectedDataItem.loaded(false); // clear the loaded flag
        selectedDataItem.hasChildren = true;
        selectedDataItem.load(); // load the child nodes again

        treeView.one("dataBound", function () {               
            treeView.expand(selectedNode);
        });

         
    }

}

function treeonDataBound(e) {
    if (!this.dataSource.data().length) {
        this.element.append("<p class='no-items'>No items yet.</p>");
    } else {
        this.element.find(".no-items").remove();
    }
}

function treeonSelect(e) {
    selectedNode = e.node;
    //var data = $('#treeview').data('kendoTreeView').dataItem(e.node);
    //(data.id);
}

function treeonChange(e) {
    //("tree on change");
    //var data = $('#treeview').data('kendoTreeView').dataItem(e.node);
    //(data.id);
}

function treeonDrag(e)
{
    var sourceNode = this.dataItem(e.sourceNode);
    var destinationNode = this.dataItem($(e.dropTarget).closest("[role=treeitem]"));     

       

    //Equipment can not become a child of point
    if (sourceNode.Tag == "equip" && destinationNode.Tag == "point") {
        e.setStatusClass("k-denied");          
    }       

    //point can not become a child of point
    if (sourceNode.Tag == "point" && destinationNode.Tag == "point") {
        e.setStatusClass("k-denied");           
    }

    //site can not become a child of point
    if (sourceNode.Tag == "site" && destinationNode.Tag == "site") {
        e.setStatusClass("k-denied");            
    }

    //site can not become a child of point
    if (sourceNode.Tag == "site" && destinationNode.Tag == "point") {
        e.setStatusClass("k-denied");
    }

    //Site can not become a child of equip
    if (sourceNode.Tag == "site" && destinationNode.Tag == "equip") {
        e.setStatusClass("k-denied");
    }
}

function treeOnDrop(e) {
        
    var sourceItem = this.dataItem(e.sourceNode);
    var destinationItem = this.dataItem(e.destinationNode);
    if (e.dropPosition == "over") {
            
        if (sourceItem == null || destinationItem == null)
        {
            e.setValid(false);
        }
            //Equipment can not become a child of point
        else if (sourceItem.Tag == "equip" && destinationItem.Tag == "point") {
            e.setValid(false);
        }          

            //point can not become a child of point
        else if (sourceItem.Tag == "point" && destinationItem.Tag == "point") {
            e.setValid(false);
        }

            //site can not become a child of point
        else if (sourceItem.Tag == "site" && destinationItem.Tag == "site") {
            e.setValid(false);
        }
            //Site can not become a child of equip
        else if (sourceItem.Tag == "site" && destinationItem.Tag == "equip") {
            e.setValid(false);
        }
            //Site can not become a child of point
        else if (sourceItem.Tag == "site" && destinationItem.Tag == "point") {
            e.setValid(false);
        }
        else
            update_parent_element(sourceItem.id, destinationItem.id);
    }
    else
    {          
        e.setValid(false);
            
    }
}

function update_parent_element(sourceId, destinationId)
{
    var form = $('#__AjaxAntiForgeryForm');
    var token = $('input[name="__RequestVerificationToken"]', form).val();


    var data = { 'sourceId': sourceId, 'destinationId': destinationId, __RequestVerificationToken: token };

    $.ajax({
        type: "POST",
        url: '/Discovery/Element_Point_Update',
        cache: false,
        data: data

    }).done(function (data) {

    });  // treeview.append({ ID: 0, Element_Name: $("#appendNodeText").val(), hasChildren: false }, selectedNode);
}

function dataBound() {
    ////this for load child gride for first row when the parent grid load

    this.expandRow(this.tbody.find("tr.k-master-row").first());
}

function onChildChange(arg) {


}

function onChange(arg) {


}

function onChildBound(arg) {

    //Child gird
    $("#" + arg.sender.content.context.id).on("change", ":checkbox", function (e) {
        var checkbox = e.currentTarget;
        // store the value of the checkbox (bound to the OrderID field)
        elements[checkbox.value] = checkbox.checked;
        // toggle selected state of the parent table row
        $(checkbox).closest("tr").toggleClass("k-state-selected", checkbox.checked);
    });
    //end child grid

    // restore selected items
    for (var ElementSourceID in elements) {
        // continue if not selected
        if (!elements[ElementSourceID]) {
            continue;
        }
        // find selected item by its id (the OrderID field)
        var element = this.dataSource.get(ElementSourceID);
        if (element) {
            // find corresponding table row and set its selected class
            this.tbody.find("[data-uid=" + element.uid + "]").addClass("k-state-selected").find(":checkbox").attr("checked", true);
        }
    }     
    active_child_grid_id = arg.sender.content.context.id;
}

function onExpand(arg) {
       
}


function CheckAll(child_grid_id) {

    var mainchkbox = $('div#' + child_grid_id + ' input.selectAll:checkbox');

    //var grid = $("#"+child_grid_id).data("kendoGrid");
    //grid.tbody.find("[data-uid=" + element.uid + "]").addClass("k-state-selected").find(":checkbox").attr("checked", true);

    $('div#' + child_grid_id + ' input.chkb:checkbox').each(function () {
        var checkbox = $(this);
        if (!checkbox.is(":disabled")) {
            if (mainchkbox.is(":checked")) {
                //Do not use attr property it will not work
                checkbox.prop("checked", true);
            }
            else {
                //Do not use removeAttr property it will not work
                checkbox.prop("checked", false);
            }
        }

    });

}


function InitSearch(treeViewId, searchInputId) {

    var tv = $(treeViewId).data('kendoTreeView');

    $(searchInputId).on('keyup', function () {

        $(treeViewId + ' li.k-item').show();

        $('span.k-in span > span.highlight').each(function () {
            $(this).parent().text($(this).parent().text());
        });

        // ignore if no search term
        if ($.trim($(this).val()) === '') {
            return;
        }

        var term = this.value.toUpperCase();
        var tlen = term.length;

        $(treeViewId + ' span.k-in span').each(function (index) {

            var text = $(this).text();
            var html = '';
            var q = 0;
            var p;

            while ((p = text.toUpperCase().indexOf(term, q)) >= 0) {
                html += text.substring(q, p) + '<span class="highlight">' + text.substr(p, tlen) + '</span>';
                q = p + tlen;
            }

            if (q > 0) {
                html += text.substring(q);
                $(this).html(html);

                $(this).parentsUntil('.k-treeview').filter('.k-item').each(function (index, element) {
                    tv.expand($(this));
                    $(this).data('SearchTerm', term);
                });
            }
        });

        $(treeViewId + ' li.k-item:not(:has(".highlight"))').hide();

       // $(treeViewId + ' li.k-item').expand(".k-item");
    });
}






// Deleting the Node
//http://jsbin.com/OMEBuku/2/edit?html,css,js,output
//$(".delete-link").on("click", function (e) {
//    e.preventDefault();

//    var treeview = $("#treeview").data("kendoTreeView");
//    treeview.remove($(this).closest(".k-item"));
//});

