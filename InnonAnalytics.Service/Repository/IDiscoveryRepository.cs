using InnonAnalytics.Model.DTO;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Repository
{
    public interface IDiscoveryRepository
    {
        DiscoveryVMDTO GetDiscoveryViewModel();
        IList<DiscoveryPoint_DTO> GetNonDiscoverElementByConnectorID(int iDataConnectorID);

        IList<DiscoveryPoint_DTO> Get_Connection_Points(int? id);

        IList<DiscoveryPoint_DTO> GetNonDiscoverElementByConnectorID(int iDataConnectorID, string Element_Source_ID, int parent_id);
    }
}
