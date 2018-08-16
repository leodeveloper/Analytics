using OxNet.Core;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.LiveVariables
{
    public class LivePointModel
    {

        public LivePointModel()
        {
            this.ChildLivePointModel = new HashSet<LivePointModel>();
        }

        public string Element_Name { get; set; }

        /// <summary>
        /// URL for access the live point
        /// </summary>
        public string Element_Source_Name_Live { get; set; }

        public System.Uri Href { get; set; }

        public ICollection<LivePointModel> ChildLivePointModel { get; set; }
    }


    public abstract class Convert_LivePointObject_To_LivePointModel
    {
        protected IList<LivePointModel> Convert_Obix_To_LivePointModel(Obj _object)
        {
            IList<LivePointModel> list_livepointmodel = Convert_ListObix_To_LivePointModel(_object.href, _object.children);
            return list_livepointmodel;
        }

        private IList<LivePointModel> Convert_ListObix_To_LivePointModel(string _parent_uri, List<Obj> _objects)
        {
            IList<LivePointModel> list_livepointmodel = new List<LivePointModel>();
            foreach (Obj _obj in _objects)
            {
                try
                {
                    list_livepointmodel.Add(new LivePointModel
                    {
                        Element_Name = _obj.name,
                        Href = new System.Uri(_parent_uri + _obj.href),
                        Element_Source_Name_Live = _obj.href,
                        ChildLivePointModel = Convert_ListObix_To_LivePointModel(_parent_uri + _obj.href, _obj.children)
                    });
                }
                catch { }
            }
            return list_livepointmodel;
        }
    }
}
