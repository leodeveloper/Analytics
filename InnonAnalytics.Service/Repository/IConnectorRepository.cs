using InnonAnalytics.Model.DTO;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Repository
{
    public interface IConnectorRepository
    {
      //  DataConnectorViewModel GetDataConnectorVM();
        void SaveConnection();
        void TestConnection();
        IList<ConnectorDTO> GetExistingConnections();
        ConnectorDTO GetExistingConnectionById(int ConnectorID);

        ExistingConnectionNameDTO GetExistingConnectionGeneralInfoById(int ConnectorID);


        IList<ExistingConnectionNameDTO> GetExistingConnectionsBy_Is_Active(bool Active);
    }
}
