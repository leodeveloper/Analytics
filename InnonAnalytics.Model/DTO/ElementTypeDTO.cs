using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{
    public class ElementTypeDTO : LanguageDescriptionDTO
    {
        public int ID { get; set; }
      //  public DescriptionDTO Description { get; set; }
        public bool Disabled { get; set; }
    }
}
