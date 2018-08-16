using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class Error_DTO
    {

        public Error_DTO(string errorinfo)
        {
            this.ErrorInfo = errorinfo;
        }
        public string ErrorInfo { get; set; }

        public static void SetError(string errorinfo)
        {
            
        }

    }

    public class Error_Internal
    {
        public static Error_DTO SetError(string errorinfo)
        {
           return new Error_DTO(errorinfo);
        }
    }
}
