using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Notification
{
    public class Notification 
    {

        private static Notification _defaultStore;
        public virtual string Name => GetType().Name;

        public virtual string Name3 { get { return GetType().Name; } }

        public virtual string Name2()
        {
            return GetType().Name;
        }


        public virtual string Name31() => GetType().Name;

        public static Notification Default => _defaultStore ?? (_defaultStore = GetErrorStoreFromConfig2());

        private static Notification GetErrorStoreFromConfig()
        {
            return  new Notification();
        }

        private static Notification GetErrorStoreFromConfig2() =>  new Notification();
        
    }


    public class class2
    {
        Notification obj = new Notification();
        public void test()
        {
            //Notification.Default();
        }
    }
}
