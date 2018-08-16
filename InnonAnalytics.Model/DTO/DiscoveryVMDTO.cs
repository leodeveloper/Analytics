using InnonAnalytics.Common.Enums;
using InnonAnalytics.Model.EntityModel;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTO
{

    #region Discovery
    /// <summary>
    /// This is discovery View Model for the Discovery of Elements (element can be table name, api address, ftp file), 
    /// there are three steps to make the unstructure data/element to structure data/element
    /// Parent view model is DiscoveryVMDTO, has three sub classes according to the three steps
    /// </summary>
    public class DiscoveryVMDTO
    {

        #region property
        /// <summary>
        /// Constructor for initializing all the lists
        /// </summary>
        public DiscoveryVMDTO()
        {
            ///HashSet is an optimized set collection. It helps eliminates duplicate strings or elements in an array
            this.Tags = new HashSet<TagDTO>();
            this.ExistingConnectionAndElements = new HashSet<UnStructureExisitingConnectionElements>();
        }

        /// <summary>
        /// Use in First Step of Discovery
        /// </summary>
        public virtual ICollection<UnStructureExisitingConnectionElements> ExistingConnectionAndElements { get; set; }

        /// <summary>
        /// Use in Sec Step of Discovery
        /// </summary>
        public virtual ICollection<TagDTO> Tags { get; set; }



        #endregion

        #region Methods

        public static DiscoveryVMDTO ConvertTableToDTO(IList<ExistingConnectionNameDTO> listExistingConnector)
        {
            DiscoveryVMDTO viewModel = new DiscoveryVMDTO();
            viewModel.ExistingConnectionAndElements = UnStructureExisitingConnectionElements.ConvertTableToDTO(listExistingConnector);
            return viewModel;
        }

        #endregion


    }

    #endregion

    #region structure
    /// <summary>
    /// Structure Element 
    /// </summary>
    public class StructureConnectionElement
    {
        public StructureConnectionElement()
        {
            throw new NotImplementedException();
        }
    }

    #endregion

    #region UnStructure

    /// <summary>
    /// This is for Exisiting Connection and DTO of unstructured elements inherited from ExistingConnectionNameDTO.
    /// </summary>
    public class UnStructureExisitingConnectionElements : ExistingConnectionNameDTO
    {
        #region properties
        public UnStructureExisitingConnectionElements()
        {
            this.UnStructureElements = new HashSet<DiscoveryElementDTO>();            
        }      
        public virtual ICollection<DiscoveryElementDTO> UnStructureElements { get; set; }

        #endregion

        #region Conversion from the database table to DTO

        public static UnStructureExisitingConnectionElements ConvertTableToDTO(ExistingConnectionNameDTO objExistingConnector)
        {
            UnStructureExisitingConnectionElements dto = new UnStructureExisitingConnectionElements();
            dto.ConnectionID = objExistingConnector.ConnectionID;
            dto.ConnectionName = objExistingConnector.ConnectionName;
            dto.DataConnectorType = objExistingConnector.DataConnectorType;
            dto.UnStructureElements = null;

            return dto;
        }


        public static ICollection<UnStructureExisitingConnectionElements> ConvertTableToDTO(IList<ExistingConnectionNameDTO> listExistingConnector)
        {
            ICollection<UnStructureExisitingConnectionElements> listDto = new HashSet<UnStructureExisitingConnectionElements>();
            foreach (var objExisitingConnector in listExistingConnector)
            {
                listDto.Add(ConvertTableToDTO(objExisitingConnector));
            }
            return listDto;
        }



        #endregion
    }
    #endregion

}
