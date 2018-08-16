using InnonAnalytics.Common;
using InnonAnalytics.Model.DTO;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Service.Implementation
{
    public class TokenRepository
    {
        public static TokenDTO GetTokenForAPIAccess(string username, string password, string api_url)
        {
            string values = "username=" + username.Trim() + "&password=" + password.Trim() + "&grant_type=password";
            string response = Helper.CreatHttpRequest(api_url, values);

              TokenDTO dto = TokenDTOConvert.Convert_String_TokenDTO(response);
              return dto;
        }
    }
}
