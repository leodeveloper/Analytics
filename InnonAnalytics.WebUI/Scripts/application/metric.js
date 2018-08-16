function insertPopupCaption(e) {

    if (e.model.isNew()) {
        $('.k-window-title').text(Addnewmetric);
        $('.k-grid-update').html("<span class=\"k-icon k-update\"></span>" + btnSave);
    }
    else {
       // console.log(e.model);        
       
    }

}


function onUnitSelect(e) {
    var dataItem = this.dataItem(e.item.index());
    if (dataItem.Unit_Name.indexOf('--') == 0) {
        e.preventDefault();
    }
    
    
}



function onUnitNewSelect(e) {
    var dataItem = this.dataItem(e.item.index());
    if (dataItem.Unit_Name.indexOf('--') == 0) {
        e.preventDefault();
    }
}

