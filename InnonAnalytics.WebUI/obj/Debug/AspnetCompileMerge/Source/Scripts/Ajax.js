/*
url:string - the http address to make the request to
snd:string - the url encoded string of payload parameters 
async:bool - true for asynchronous request, false for synchronous
onfinish(data:object, inst:AjaxRequest) - response handler
onprogress(evt:UploadEvent) - upload progress event
*/
var AjaxRequest = function (url, snd, async, onfinish, onprogress) {
    AjaxRequest.connectionCount = 0;

    var localUrl = url;
    var localAsync = async;

    this.req = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject("Microsoft.XMLHTTP");

    /*
    Request method. Can be one of the following strings: GET, POST, PUT, UPDATE, DELETE & others if supported by the web server.
    */
    this.method = "GET";

    this.req.onreadystatechange = function () {
        if (this.readyState == 4) {
            if (onfinish != null && onfinish !== undefined) {
                var data = null;
                try {
                    data = JSON.parse(this.responseText);
                } catch (e) {
                    data = this.responseText;
                }
                onfinish(data, this);
            }
        }
    };

    if (onprogress != undefined && onprogress != null && this.req.upload != null) {
        this.req.upload.onprogress = function (evt) {
            if (evt.lengthComputable) {
                if (onprogress != null && onprogress !== undefined) {
                    onprogress(evt);
                }
            }
        };
    }

    this.Open = function () {
        this.req.open(this.method, localUrl, localAsync);
    };



    /*
    Initiates the request
    */
    this.Send = function () {
        this.req.send(snd);
    };

    this.GetResponseRaw = function () {
        return this.req.responseText;
    };
};