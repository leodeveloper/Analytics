windows.ApplicationSettings = {
    ApiDomain: "localhost:54891",
    ApiUrl : function()
    {
        return "http://" + this.ApiDomain;
    }
};