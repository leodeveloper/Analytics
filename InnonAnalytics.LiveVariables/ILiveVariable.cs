using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.LiveVariables
{
    public interface ILiveVariable
    {
        string GetUnit(string url);

        T SetValueLiveVariable<T>(string url, T t) where T : struct;

        

        object SetLiveVariable(string url, decimal value);
        string ReadStatusVariable(string url);

        LivePoint_ResponseDTO ReadLiveVariable(string url);
        
        IList<LivePointModel> GetPoints(string url);

        bool Is_Connected { get;  }

    }
}
