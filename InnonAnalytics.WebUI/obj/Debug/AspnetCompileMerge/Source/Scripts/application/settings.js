window.ApplicationSettings =
{
    ApiDomain: "apilor.innon.co.uk", //"localhost:3232",//apilor.innon.co.uk
    ApiURL: function () {
        return "http://" + this.ApiDomain;
    }
    //,
    //WebsiteDomain: "localhost",//localhost //homepage.meals.co.uk
    //WebsiteURL: function () {
    //    return "http://" + this.WebsiteDomain;
    //}
};