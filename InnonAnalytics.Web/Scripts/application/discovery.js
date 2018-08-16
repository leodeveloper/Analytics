
//Help http://jsfiddle.net/delixfe/xY3xk/,  http://jsfiddle.net/tyrsius/BFhP3/1/


//Start ExistingConnection Child of discoveryVM

function ExistingConnection(data) {
    var self = this;
    self.DataConnectorType = ko.observable(data.DataConnectorType);
    self.ConnectionID = ko.observable(data.ConnectionID);
    self.ConnectionName = ko.observable(data.ConnectionName);
    self.Points = ko.observableArray([]);


    //Start Add Point in to Connection
    self.GetElement_By_ConnectionID_And_DataConnectorType = function (ConnectionID, DataConnectorType) {

        //Before check the database remive th point from the list otherwise the list will duplicate
        //self.Points.removeAll();

        if (self.Points.length == 0) {
            //Server Ajax to MVC Action
            $.ajax({
                type: "GET",
                data: { "strDataConnectorType": DataConnectorType, "id": ConnectionID },
                url: "/Discovery/Index/",
                dataType: "json",

            }).done(

             function (data) {

                 $.each(data, function (key, value) {
                     self.Points.push(new Point(value));
                 });
             }

             ).error(function (ex) {
                 alert("Error:-" + ex.statusText);
             })

        }
        else
        {

        }
    }

       

    //End Add Point

    

    //Remove Points from list

    self.Remove=function()
    {
        self.Points.removeAll();       
    }
    //End

   

}

//End ExisitingConnection


//Start Points, Child property of ExistingConnection

function Point(data)
{
    var self = this;
    self.ElementSourceID = ko.observable(data.ElementSourceID);
    self.ElementSourceName = ko.observable(data.ElementSourceName);
    self.ElementCheckBox = ko.observable(data.SelectedElement);  
}

//End Points

//Start Discovery View Model Parent Model of ExistingConnections

var discoveryVM =function (Connections) {
    
    var self = this;
    self.ExistingConnections = ko.observableArray(ko.utils.arrayMap(Connections, function (Connection) {
        return new ExistingConnection(Connection);       
    }));
  
    self.SelectedPoints = ko.observable(0);

    // Check Box
    self.Add_Point = function (point) {

        self.SelectedPoints(0);
        $.each(self.ExistingConnections(), function () {
              
            $.each(this.Points(), function ()
            {
                
                if (this.ElementCheckBox() == true) {
                    console.log(this.ElementSourceName());
                    self.SelectedPoints(self.SelectedPoints() + 1);
                }
               
            }
            )

        });




   

      

    }

    

   


   
}

//End Discvoery View Model


//Start Get Connection Function
function getConnection() {
    $.ajax({
        type: "GET",
        url: "/Discovery/Index2",
        dataType: "json",
    }).done(

    function (data) {
        ko.applyBindings(new discoveryVM(data));
    }

    ).error(function (ex) {
        alert("Error");
    })
}

//End Get Connection Function



