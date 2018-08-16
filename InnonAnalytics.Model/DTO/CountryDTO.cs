using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class CountryDTO
    {

        public int ID { get; set; }
        public string CountryName { get; set; }
        public bool Disabled { get; set; }

      //  public virtual ICollection<Company> Companies { get; set; }
    }
}
