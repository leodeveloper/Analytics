using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using InnonAnalytics.Service.Repository;

namespace InnonAnalytics.Service.Implementation
{
    public class ObixRepository : IObixRepository
    {

        //is on port 81
        //so the path is 192.168.1.69:81/obix
        //IP 192.168.1.69
        //user: admin
        //pass: Andyefrumos1

        public ObixRepository(string Obix_Server_Link, string Obix_Server_Username, string Obix_Server_Pass)
        {

   //         ObixGetPostData obj1 = new ObixGetPostData();
   //         obj1.OpenObixSession("http://192.168.1.69:81/obix", "admin", "Andyefrumos1");

   //         obj1.CreateWatch("http://192.168.1.69:81/obix/watchService/make/");

   ////         obj1.CreateWatch("http://192.168.1.69:81/obix/watchService/watch24/add");

   //    //     obj1.SetLiveVariable("http://192.168.1.69:81/obix/config/Drivers/NiagaraNetwork/Obix/points/universalInputPoint/", 0.23M);
            
   //         //string a = obj.GetUnit("http://192.168.1.69:81/obix/config/Drivers/NiagaraNetwork/Obix/points/");



   //      //   ObixGetPostData.OpenObixSession();


        }
    }
}
