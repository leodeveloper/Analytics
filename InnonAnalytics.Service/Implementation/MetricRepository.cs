using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.DTO;
using InnonAnalytics.Model.EntityModel;
using InnonAnalytics.Service.Repository;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
  
    public class MetricRepository : InnonAnalytics.Service.Repository.IMetricRepository
    {
        private IInnonAnalyticsEngineEntities _dbcontext;
        private ITagRepository _tagRespository;
        

        private static List<MetricDTO> _pre_define_matric;

        public MetricRepository(IInnonAnalyticsEngineEntities db, ITagRepository tagRespository)
        {
            _dbcontext = db;
            _tagRespository = tagRespository;
            

            if (_pre_define_matric == null)
            {
                _pre_define_matric = Get_Pre_Define_Metrics();
            }
        }

        public IList<MetricDTO> GetMetricForDropdownList()
        {
            List<MetricDTO> metrics = new List<MetricDTO>();
            IEnumerable<Tbl_Metric_DTO> tbl_metric_dtos = (from metric in _dbcontext.tblMetrics.AsEnumerable()
                                                           select new Tbl_Metric_DTO
                                                           {
                                                               tbl_Metric = metric                                                               
                                                           }).ToList();

            metrics.AddRange(MetricDTO.Convert_List_Table_To_List_DTO(tbl_metric_dtos));
            return metrics;
        }

        public IList<MetricDTO> GetMetricForDropdownListByUserId(string user_id)
        {
            List<MetricDTO> metrics = new List<MetricDTO>();
            metrics.AddRange(MetricDTO.Convert_List_Table_To_List_DTO(GetMetricBy_UserId(user_id)));
            return metrics;
        }

        private IEnumerable<Tbl_Metric_DTO> GetMetricBy_UserId(string user_id)
        {            
            IEnumerable<Tbl_Metric_DTO> tbl_metric_dtos = (from metric in _dbcontext.AspNetUserMetrics.AsEnumerable()
                                                           where user_id == metric.User_Id
                                                           select new Tbl_Metric_DTO
                                                           {
                                                               tbl_Metric = metric.tblMetric
                                                           }).ToList();
           
            return tbl_metric_dtos;
        }

        public IList<MetricDTO> GetMetrics()
        {
            List<MetricDTO> matrics = new List<MetricDTO>();
            IList<TagDTO> tag_dto = _tagRespository.SelectAllBy_IsDisable(false);
            try
            {
               IEnumerable<Tbl_Metric_DTO> tbl_metric_dtos = (from metric in _dbcontext.tblMetrics.AsEnumerable()
                                                              select new Tbl_Metric_DTO
                                                              {
                                                                  tbl_Metric = metric,
                                                                  tag_dto = SelectAll_Tag_By_TagIDs(Source_Json.Convert_Json_To_Source_Json(metric.Source).Tags)
                                                              }).ToList();

               matrics.AddRange(MetricDTO.Convert_List_Table_To_List_DTO(tbl_metric_dtos));
               matrics.AddRange(_pre_define_matric);
            }
            catch(Exception ex)
            {
                throw ex;
            }
            return matrics;
        }

        public MetricDTO GetMetrics(int metric_Id)
        {

            MetricDTO matric = new MetricDTO();

            IList<TagDTO> tag_dto = _tagRespository.SelectAllBy_IsDisable(false);
            try
            {
                Tbl_Metric_DTO tbl_metric_dto = (from metric in _dbcontext.tblMetrics.AsEnumerable()
                                                 where metric.Id == metric_Id
                                                 select new Tbl_Metric_DTO
                                                 {
                                                     tbl_Metric = metric,
                                                     tag_dto = SelectAll_Tag_By_TagIDs(Source_Json.Convert_Json_To_Source_Json(metric.Source).Tags),
                                                     element_dto = SelectAll_Element_By_ElementIDs(Source_Json.Convert_Json_To_Source_Json(metric.Source).Points)
                                                 }).Single();

              matric=  MetricDTO.Convert_Table_To_DTO(tbl_metric_dto);
               
            }
            catch (Exception ex)
            {
                throw ex;
            }
            return matric;
        }

        /// <summary>
        /// The same function is also in the tag respository, but we can not call it, becuase can not initialze another dbcontext inside the dbcontext.
        /// </summary>
        /// <param name="tags"></param>
        /// <returns></returns>
        private IList<TagDTO> SelectAll_Tag_By_TagIDs(IList<Tag> tags)
        {
            IEnumerable<long> tagIDs = tags.Select(n => n.TagID);
            List<tblTag> result = _dbcontext.tblTags.Where(c => tagIDs.Contains(c.ID)).ToList();
            return TagDTO.ConvertTableToDTO(result);
        }


        private IList<ElementDTO> SelectAll_Element_By_ElementIDs(IList<Point> points)
        {
            IEnumerable<long> ElementIDs = points.Select(n => n.ElementId);
            List<tblElement> elements = _dbcontext.tblElements.Where(c => ElementIDs.Contains(c.ID)).ToList();
            return ElementDTO.ConvertTableListToDTOList(elements);
        }


        /// <summary>
        /// Pre define Metrics are those metrics which automatically created from element tags. In the Point Tagging when tag the elements it will be genrate the metric. SUM Floo1, Max Floor2 and so on.
        /// Pre define metric does not save in the database
        /// </summary>
        /// <returns>List<MetricDTO></returns>
        public List<MetricDTO> Get_Pre_Define_Metrics()
        {           
           IList<tblTagElement> list_tag_elements = _dbcontext.tblTagElements.Where(tag_element => tag_element.Is_Deleted == false).ToList();
           return MetricDTO.Convert_Tag_Element_Table_To_DTO(list_tag_elements);            
        }

        public void Save_Metric(MetricDTO metric_dto)
        {
            try
            {
                _dbcontext.tblMetrics.Add(MetricDTO.Convert_DTO_To_Table(metric_dto));
                _dbcontext.SaveChanges();               
            }
            catch (Exception ex) { throw ex; }
        }

        /// <summary>
        /// This is use for auto metric geration when the element add in to the structure only for the history point not for the Live point. 
        /// </summary>
        /// <param name="tbl_Element"></param>
        public void Save_Metric(IEnumerable<tblElement> tbl_Elements)
        {
            try
            {
                foreach (var tbl_Element in tbl_Elements)
                {
                    try
                    {      
                        //create matric only for the history points
                        if(tbl_Element.Connector_Live_ID == null)
                        {
                            _dbcontext.tblMetrics.Add(MetricDTO.Convert_DTO_To_Table(tbl_Element.ID, tbl_Element.Element_Name, tbl_Element.Unit_ID, Rollup_Function_Option.SUM));
                            _dbcontext.tblMetrics.Add(MetricDTO.Convert_DTO_To_Table(tbl_Element.ID, tbl_Element.Element_Name, tbl_Element.Unit_ID, Rollup_Function_Option.MAX));
                            _dbcontext.tblMetrics.Add(MetricDTO.Convert_DTO_To_Table(tbl_Element.ID, tbl_Element.Element_Name, tbl_Element.Unit_ID, Rollup_Function_Option.MIN));
                            _dbcontext.tblMetrics.Add(MetricDTO.Convert_DTO_To_Table(tbl_Element.ID, tbl_Element.Element_Name, tbl_Element.Unit_ID, Rollup_Function_Option.AVG));
                        }          
                       
                    }
                    catch (Exception ex) { throw ex; }
                }                
                _dbcontext.SaveChanges();
            }
            catch(Exception ex) {  }
        }

        public void Update_Metric(MetricDTO metric_dto)
        {
            try
            {
                tblMetric tbl_Metric = _dbcontext.tblMetrics.Single(metric => metric.Id == metric_dto.Id);
                MetricDTO.Convert_DTO_To_Table(metric_dto, ref tbl_Metric);
                _dbcontext.SaveChanges();
            }
            catch (Exception ex)
            {
                throw ex;
            }

        }

        public List<MetricDTO> Get_All_Metric_By_User_Id(IEnumerable<string> user_ids)
        {
            List<MetricDTO> metrics = new List<MetricDTO>();
            IEnumerable<Tbl_Metric_DTO> tbl_metric_dtos = (from metric in _dbcontext.AspNetUserMetrics.AsEnumerable()
                                                           where user_ids.Contains(metric.User_Id)
                                                           select new Tbl_Metric_DTO
                                                           {
                                                               tbl_Metric = metric.tblMetric
                                                           }).ToList();           

            metrics.AddRange(MetricDTO.Convert_List_Table_To_List_DTO(tbl_metric_dtos));
            return metrics;
        }

        /// <summary>
        /// This function for assign the metric to the users
        /// </summary>
        /// <param name="metricdtos"></param>
        /// <param name="user_ids"></param>
        /// <returns></returns>
        public bool User_Metric_Update(IList<MetricDTO> metricdtos, IEnumerable<string> user_ids)
        {
            IEnumerable<int> metric_ids = metricdtos != null ? metricdtos.Select(metric => metric.Id) : null;
            //Get All the dashboard list for the users
            IList<AspNetUserMetric> _dbusermetrics = _dbcontext.AspNetUserMetrics.Where(usermetric => user_ids.Contains(usermetric.User_Id)).ToList();
            IList<AspNetUserMetric> _usermetrics = Convert_MetricUsers.Convert_List_Table(metric_ids, user_ids);
            var comparer = new UserMetricEqualityComparer();
            var itemsToDelete = _dbusermetrics.Except(_usermetrics, comparer).ToList();
            foreach (AspNetUserMetric item in itemsToDelete)
            {
                // Delete the dashboard
                _dbcontext.AspNetUserMetrics.Remove(item);
            }
            var itemsToAdd = _usermetrics.Except(_dbusermetrics, comparer).ToList();
            foreach (AspNetUserMetric item in itemsToAdd)
            {
                // Add the dashboard
                _dbcontext.AspNetUserMetrics.Add(item);
            }
            _dbcontext.SaveChanges();
            return true;
        }

    }

    public class UserMetricEqualityComparer : IEqualityComparer<AspNetUserMetric>
    {
        public int GetHashCode(AspNetUserMetric obj)
        {
            return (obj == null) ? 0 : obj.GetHashCode();
        }

        public bool Equals(AspNetUserMetric x, AspNetUserMetric y)
        {
            if (ReferenceEquals(x, y)) return true;
            if (x == null || y == null) return false;
            return x.Metric_Id == y.Metric_Id && x.User_Id == y.User_Id;
        }
    }
}
