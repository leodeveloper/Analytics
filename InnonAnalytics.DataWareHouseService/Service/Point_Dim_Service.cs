using InnonAnalytics.Common;
using InnonAnalytics.Common.Enums;
using InnonAnalytics.DataWareHouseService.DatawareHouseEntityModel;
using InnonAnalytics.DataWareHouseService.Repository;
using InnonAnalytics.Model.DTO;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.DataWareHouseService.Service
{
    public class Point_Dim_Service : IPoint_Dim_Service
    {
        InnonAnalyticsWarehouseEntities _datawarehousecontext;

        public void Update_Point_Dim(IList<ElementDTO> list_element_dto, IList<Tag_Type_Mapping_DTO> list_tag_type_mapping_dto)
        {

            try
            {
                _datawarehousecontext = new InnonAnalyticsWarehouseEntities();
                IEnumerable<long> point_ids = list_element_dto.Select(element => element.ID);

                IEnumerable<Point_Dim> point_dims = _datawarehousecontext.Point_Dim.Where(p_d => point_ids.Contains(p_d.Point_ID));               

                string columns = Helper.ConvertIEnumerableToString(list_tag_type_mapping_dto.Select(z => z.Point_Dim_Mapping), ",");

                string str_insert_point_dim_query = "";
                string str_update_point_dim_query = "";
                string column_name = "", column_value="";
                foreach (ElementDTO element_dto in list_element_dto)
                {
                    try
                    {

                        if (point_dims.Any(point_dim => point_dim.Point_ID == element_dto.ID))
                        {
                            str_update_point_dim_query += "update Point_Dim set ";
                            //str_update_point_dim_query += " Point_ID=" + element_dto.ID;
                            str_update_point_dim_query += " Equipment_ID=0";
                            str_update_point_dim_query += ",Site_ID=0";
                            str_update_point_dim_query += ",Client_ID=0";
                            //str_update_point_dim_query += ",Country=null";
                            //str_update_point_dim_query += ",City=null";
                            foreach (TagDTO tag in element_dto.Tags)
                            {
                                Tag_Type_Mapping_DTO dto_mapping = list_tag_type_mapping_dto.SingleOrDefault(z => z.Tag_Type == tag.Tag_Type_String);
                                str_update_point_dim_query += "," + dto_mapping.Point_Dim_Mapping + "=" + "'" + tag.Tag_Value.Trim() + "'";
                            }

                            foreach(Tag_Type_Mapping_DTO dto in list_tag_type_mapping_dto)
                            {
                                if (dto.Tag_Type != TagType.point.ToString() && dto.Tag_Type != TagType.equip.ToString() && dto.Tag_Type != TagType.site.ToString() && dto.Tag_Type != TagType.client.ToString())
                                {
                                    
                                    try
                                    {
                                        TagDTO  tag = element_dto.Tags.SingleOrDefault(t => t.Tag_Type_String.Equals(dto.Tag_Type));
                                        if (tag == null)
                                        {
                                            str_update_point_dim_query += "," + dto.Point_Dim_Mapping + "=" + "null";
                                        }
                                    }                                  
                                    catch(Exception ex) 
                                    {
                                        Helper.WriteToFile(string.Format("Multiple tag with same tag type: Element ID : {0}, Element Name {1}, Source History Name {2}, Tag_Type: {3} ", element_dto.ID, element_dto.Element_Name , element_dto.Source_Element_Name_History, dto.Tag_Type));                               
                                    }                        


                                }                               
                            }
                            str_update_point_dim_query += " where Point_ID=" + element_dto.ID +";";
                        }
                        else
                        {                            
                            column_name = "insert into Point_Dim(Point_ID,Equipment_ID,Site_ID,Client_ID";
                            column_value = element_dto.ID + "," + 0 + "," + 0 + "," + 0 ;
                            foreach (TagDTO tag in element_dto.Tags)
                            {
                                Tag_Type_Mapping_DTO dto = list_tag_type_mapping_dto.SingleOrDefault(z => z.Tag_Type == tag.Tag_Type_String);
                                column_name += "," + dto.Point_Dim_Mapping ;
                                column_value += ",'" + tag.Tag_Value.Trim() + "'";
                            }
                            column_name += ") Values(";
                            column_value += ");";
                            str_insert_point_dim_query += column_name + column_value;
                        }                       
                    }
                    catch(Exception ex)
                    {
                        Helper.WriteToFile("Error in point dim: " + ex.Message + "---" + ex.InnerException.Message);
                    }                    
                }

                try
                {
                    _datawarehousecontext.Database.ExecuteSqlCommand(@"" + str_insert_point_dim_query + str_update_point_dim_query);
                }
                catch (Exception ex)
                {
                    Helper.WriteToFile("Error in point dim saving: " + ex.Message + "---" + ex.InnerException.Message);
                    Helper.WriteToFile("Query " + str_insert_point_dim_query + str_update_point_dim_query);
                }                
            }
            catch (Exception ex)
            {                
                Helper.WriteToFile("Error in point dim: " + ex.Message + "---" + ex.InnerException.Message);
            }
        }
    }
}
