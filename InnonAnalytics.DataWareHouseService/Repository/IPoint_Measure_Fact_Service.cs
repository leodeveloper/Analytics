using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel;

namespace InnonAnalytics.DataWareHouseService.Repository
{
    public interface IPoint_Measure_Fact_Service
    {
        System.Collections.Generic.IList<Point_Measure_Fact> List_Point_Measure_Fact_Service(IList<InnonAnalytics.Model.DTO.RawDataDTO> list_raw_data_dto, InnonAnalytics.Model.DTO.ElementDTO element);
        void Save_Point_Measure_Fact_Service(IList<InnonAnalytics.Model.DTO.RawDataDTO> list_raw_data_dto, ElementDTO element);
        IList<Point_Measure_Fact> Get_Point_Measure_Fact_By_Element_ID(long Element_ID);

        IList<Point_Measure_Fact> Get_Point_Measure_Fact_By_Element_ID_From_Date(long Element_ID, DateTime From_Date);

        void Update_Point_Measure_Fact(Point_Measure_Fact tbl_Point_Measure_Fact);
    }
}
