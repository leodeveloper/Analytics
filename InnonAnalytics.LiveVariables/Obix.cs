using InnonAnalytics.Common;
using InnonAnalytics.Common.Enums;
using OxNet.Client;
using OxNet.Core;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;



namespace InnonAnalytics.LiveVariables 
{
    public sealed class Obix : Convert_LivePointObject_To_LivePointModel, ILiveVariable 
    {
        internal String[] tag_type {

            get { return new String[] { "bool","real", "enum" }; }

        }

        private Session sesiuneObix = null;
        private bool _isConnected = false;
        public bool Is_Connected { get { return _isConnected; } }

        

        public Obix()
        {

        }

        public Obix(string Obix_Server_Link, string Obix_Server_Username, string Obix_Server_Pass)
        {
            try
            {
                string ObixServerLink = Obix_Server_Link;//"http://37.59.20.43:81/obix/";// ObixConfigurationProvider.Instance.Obix_Server_Link;
                string ObixServerUsername = Obix_Server_Username;// "ObixUser";// ObixConfigurationProvider.Instance.Obix_Server_Username;
                string ObixServerPassword = Obix_Server_Pass;// "Andyefrumos1";// ObixConfigurationProvider.Instance.Obix_Server_Pass;

                this.sesiuneObix = new Session(ObixServerLink, ObixServerUsername, ObixServerPassword);
                GetUnit(Obix_Server_Link);
                _isConnected = true;
            }
            catch (Exception ex)
            {
                _isConnected = false;
            }
        }


        #region live Variable


        public IList<LivePointModel> GetPoints(string url)
        {
            OxNet.Core.Obj oxnet_obj = get_obix_object(url);
            //This checks the tag type if the tag is bool,real,int thats mean do not check childern for this 
            if (!IsPoint(oxnet_obj))
            {
                foreach (OxNet.Core.Obj list_obj in oxnet_obj.children)
                {
                    list_obj.children = get_obix_object(url + list_obj.href).children;
                }
                return Convert_Obix_To_LivePointModel(oxnet_obj);
            }
            else
                return new List<LivePointModel>();
        }

        private OxNet.Core.Obj get_obix_object(string url)
        {
            OxNet.Core.Obj obj = new Obj();
            try
            {
                obj = sesiuneObix.get(url);
            }
            catch { }
            return obj;
        }


        private void  get_childer_obix_list(ref List<Obj>  list_object_childern, string parent_url)
        {
            foreach (OxNet.Core.Obj list_obj in list_object_childern)
            {
                list_obj.children = get_obix_object(parent_url + list_obj.href).children;
                get_childer_obix_list(ref list_obj.children, parent_url + list_obj.href);
            }
        }


        public string GetUnit(string url)
        {
            try
            {
                OxNet.Core.Obj obj = sesiuneObix.get(url);
                return obj.tag;
            }
            catch(Exception ex)
            {
                throw ex;
            }

        }


        /// <summary>
        /// Check weather the tag_type are bool,real or etc
        /// </summary>
        /// <param name="obj"></param>
        /// <returns></returns>
        private bool IsPoint(OxNet.Core.Obj oxnet_object)
        {
            if(tag_type.Contains(oxnet_object.tag))
            {
                return true;
            }
            else
                return false;
        }

        public LivePoint_ResponseDTO ReadLiveVariable(string url)
        {
            OxNet.Core.Obj obiectObix = sesiuneObix.get(url);
            string uri = url + "out/value/";
            //string result = "";
            LivePoint_ResponseDTO response_dto = new LivePoint_ResponseDTO();
            // partea cu obix
            try
            {
                //string add_href = (obiectObix.href.EndsWith("/") ? obiectObix.href + obiectObix.children[1].href : obiectObix.href + "/" + obiectObix.children[1].href);
                //string changes_href = (obiectObix.href.EndsWith("/") ? obiectObix.href + obiectObix.children[3].href : obiectObix.href + "/" + obiectObix.children[1].href);
                //string refresh_href = (obiectObix.href.EndsWith("/") ? obiectObix.href + obiectObix.children[4].href : obiectObix.href + "/" + obiectObix.children[1].href);

                //sesiuneObix.post(add_href, "<obj is=\"obix:WatchIn\"><list names=\"hrefs\"><uri val=\"" + uri + "\" /></list></obj>");
                //sesiuneObix.get(changes_href);
                //sesiuneObix.get(refresh_href);
                obiectObix = sesiuneObix.get(url + "out/");
                //result = obiectObix.val.ToString();
                //result += " " + obiectObix.unit;


                response_dto.Data_Type = obiectObix.tag;
                response_dto.Unit = obiectObix.unit;
                string return_value = obiectObix.val.ToString();
                if (response_dto.Data_Type == "bool")
                {
                    response_dto.bValue = return_value.ToType<bool>();
                    response_dto.Old_Value = response_dto.bValue?.ToString(); //For Audit use
                }
                else if(response_dto.Data_Type == "real")
                {
                    response_dto.dValue = return_value.ToType<decimal>();
                    response_dto.Old_Value = response_dto.dValue?.ToString(); //For Audit use
                }


                return response_dto;

            }
            catch { return response_dto; }
        }


       

        //private T GetType_ReturnValue<T>(string value, string data_type)
        //{
        //    if(data_type == "bool")
        //    {
        //        return (T)true;
        //    }
        //    else if(data_type == "real")
        //    {

        //    }
        //}

        /// <summary>
        /// 
        /// </summary>
        /// <typeparam name="T"></typeparam>
        /// <param name="url"></param>
        /// <param name="t"></param>
        /// <returns></returns>
        public T SetValueLiveVariable<T>(string url, T t) where T : struct
        {

           //First we need to creat a wtach for colosing the connection after run this code
            if(CreateWatch(url))
            {
                string newvalue;
                if (t is decimal)
                {
                    newvalue = "<str val=\" " + t + " \" />";
                    var ret = sesiuneObix.post(url + "set/", newvalue);
                    if (ret.tag == "err")
                        throw new Exception("Error in updating live value");
                }
                else if (t is Boolean)
                {

                    string val = t.ToString().ToLower();
                    newvalue = "<bool val=\" " + val + " \" />";
                    OxNet.Core.Obj ob = new OxNet.Core.Obj();
                    ob.tag = "bool";
                    ob.href = url + "out/value";
                    ob.val = val;
                    var ret = sesiuneObix.Put(url + "out/value", ob);
                    if (ret.tag == "err")
                        throw new Exception("Error in updating live value");
                }
                else if (t is Obix_Point_Enum)
                {

                    string val = t.ToString().ToLower();
                    newvalue = "<str val=\" " + val + " \" />";
                    var ret = sesiuneObix.post(url + "set/", newvalue);
                }
                else
                {
                    throw new Exception("Error in updating live value");
                }
            }
            else
            {
                throw new Exception("Error in creating watch");
            }           

            return t;
        }


        public object SetLiveVariable(string url, decimal value)
        {
            string unit = GetUnit(url);
            string v;
            string val = (value == 1 ? "true" : "false").ToString();

            if (unit == "bool")
            {
                v = "<bool val=\" " + val + " \" />";
                OxNet.Core.Obj ob = new OxNet.Core.Obj();
                ob.tag = "bool";
                ob.href = url + "out/value";
                ob.val = val;
                var ret = sesiuneObix.Put(url + "out/value", ob);
                return ret;

            }
            else
            {
                v = "<str val=\" " + value + " \" />";
                var ret = sesiuneObix.post(url + "set/", v);
                return ret;
            }
        }

        public string ReadStatusVariable( string url)
        {
            //http://docs.oasis-open.org/obix/obix/v1.1/csprd01/obix-v1.1-csprd01.html#_Toc361929071
            //4.18.8 status
            //disabled -- fault --down -- unackedAlarm -- alarm -- unacked -- overridden -- ok
            string status;
            status = (string)sesiuneObix.get(url + "out/").display;
            if (status.Contains("down"))
            {
                status = "down";
            }
            else if (status.Contains("stale"))
            {
                status = "stale";
            }
            else if (status.Contains("disabled"))
            {
                status = "disabled";
            }
            else if (status.Contains("fault"))
            {
                status = "fault";
            }
            else if (status.Contains("unackedAlarm"))
            {
                status = "unackedAlarm";
            }
            else if (status.Contains("alarm"))
            {
                status = "alarm";
            }
            else if (status.Contains("unacked"))
            {
                status = "unacked";
            }
            else if (status.Contains("overridden"))
            {
                status = "overridden";
            }
            else status = "ok";
            return status;
        }


        private bool CreateWatch(string url)
        {
            try
            {
                //Create a watch, after creating watch the expire URL for watch is 10 sec
                System.Uri _uri2 = new System.Uri(url);

                string nullObj = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n" + "<obj null=\"true\"/>";

                OxNet.Core.Obj obj = null;
                // obj = sesiuneObix.get(sesiuneObix.url + "protected/");
                obj = sesiuneObix.post(sesiuneObix.url + "watchService/make/", nullObj);

                string a = HttpUtility.UrlDecode(obj.href);

                var n = url.IndexOf('/', 7);

                string t1 = url.Substring(n);

                //Get this value "/obix/config/Drivers/NiagaraNetwork/Obix/points/booleanOutputPoint1/" from the URL 

                //Wakeup Post request
                string strnumeric = "<obj is=\"obix:WatchIn\"><list names=\"hrefs\"><uri val=\"" + t1 + "\" /></list></obj>";
                //
                obj = sesiuneObix.post(a + "add", strnumeric);
                return true;
                //End create watch

                // sesiuneObix1.post("http://37.59.20.43:81/obix/watchService/make/", "");
            }
            catch
            {
                return false;
            }
        }

      
      
        #endregion


    }
}
