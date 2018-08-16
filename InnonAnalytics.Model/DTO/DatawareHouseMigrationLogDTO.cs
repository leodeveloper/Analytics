using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class DatawareHouseMigrationLogDTO
    {
        #region Instance Properties

        public long ID { get; set; }

        public long Element_ID { get; set; }
        public DateTime Last_Run_Start { get; set; }

        public DateTime? Last_Run_End { get; set; }

        public long Total_Record_Fetch { get; set; }

        public Boolean Is_Black_List { get; set; }

        public DateTime Timestamp_From { get; set; }
        public DateTime? Timestamp_To { get; set; }

        #endregion Instance Properties

        public static DatawareHouseMigrationLogDTO Convert_Table_To_DTO(tblDatawareHouseMigrationLog tbl_DatawareHouseMigrationLog)
        {
            DatawareHouseMigrationLogDTO dto_DatawareHouseMigrationLog = new DatawareHouseMigrationLogDTO();
            try
            {
                dto_DatawareHouseMigrationLog.ID = tbl_DatawareHouseMigrationLog.ID;
                dto_DatawareHouseMigrationLog.Element_ID = tbl_DatawareHouseMigrationLog.Element_ID;
                dto_DatawareHouseMigrationLog.Is_Black_List = tbl_DatawareHouseMigrationLog.Is_Black_List;
                dto_DatawareHouseMigrationLog.Last_Run_Start = tbl_DatawareHouseMigrationLog.Last_Run_Start;
                dto_DatawareHouseMigrationLog.Last_Run_End = tbl_DatawareHouseMigrationLog.Last_Run_End;
                dto_DatawareHouseMigrationLog.Total_Record_Fetch = tbl_DatawareHouseMigrationLog.Total_Record_Fetch;
                dto_DatawareHouseMigrationLog.Timestamp_From = tbl_DatawareHouseMigrationLog.Timestamp_From;
                dto_DatawareHouseMigrationLog.Timestamp_To = tbl_DatawareHouseMigrationLog.Timestamp_To;
            }
            catch(Exception ex)
            {

            }            
            return dto_DatawareHouseMigrationLog;
        }

        public static IList<DatawareHouseMigrationLogDTO> Convert_List_Table_To_List_DTO(IEnumerable<tblDatawareHouseMigrationLog> tbl_list_DatawareHouseMigrationLog)
        {
            IList<DatawareHouseMigrationLogDTO> dto_list_DatawareHouseMigrationLog = new List<DatawareHouseMigrationLogDTO>();

            foreach (tblDatawareHouseMigrationLog tbl_DatawareHouseMigrationLog in tbl_list_DatawareHouseMigrationLog)
            {
              dto_list_DatawareHouseMigrationLog.Add(Convert_Table_To_DTO(tbl_DatawareHouseMigrationLog));
            }

            return dto_list_DatawareHouseMigrationLog;
        }



    }
}
