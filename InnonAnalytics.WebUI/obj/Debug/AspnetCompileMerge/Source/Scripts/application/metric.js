function insertPopupCaption(e) {

    if (e.model.isNew()) {
        $('.k-window-title').text(Addnewmetric);
        $('.k-grid-update').html("<span class=\"k-icon k-update\"></span>" + btnSave);
    }
    else {
       // console.log(e.model);        
       
    }

}

