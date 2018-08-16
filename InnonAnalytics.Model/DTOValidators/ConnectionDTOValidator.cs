using FluentValidation;
using InnonAnalytics.Common.App_CommonGlobalResources;
using InnonAnalytics.Model.DTO;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InnonAnalytics.Model.DTOValidators
{
    public class ConnectionDTOValidator //: AbstractValidator<ConnectionDataBaseDTO>
    {
        public ConnectionDTOValidator()
        {            
                       
        }
    }

    public class ConnectectorDTOValidator : AbstractValidator<ConnectorDTO>
    {
        public ConnectectorDTOValidator()
        {
            RuleFor(x => x.DataConnectorType).NotEmpty().WithMessage(Resources.DataConnectorType);
            RuleFor(x => x.GatewayType).NotEmpty().WithMessage(Resources.Gateway);
           // RuleFor(x => x.Mode).NotEmpty().WithMessage(Resources.FTPModeType);
            RuleFor(x => x.PortNumber).InclusiveBetween(0, 10000).WithMessage(Resources.PortNumber);
            RuleFor(x => x.ConnectionName).NotEmpty().WithMessage(Resources.ConnectionName);
            RuleFor(x => x.ServerOrIP).NotEmpty().WithMessage(Resources.ServerOrIP);
            RuleFor(x => x.ServerUserName).NotEmpty().WithMessage(Resources.ServerUserName);
            RuleFor(x => x.ServerPassword).NotEmpty().WithMessage(Resources.ServerPassword);
            

        }
    }


    //public class ConnectionDataBaseDTOValidator : AbstractValidator<ConnectionDataBaseDTO>
    //{
    //    public ConnectionDataBaseDTOValidator()
    //    {
    //        RuleFor(x => x.strDatabaseName).NotEmpty().WithMessage(Resources.strDatabaseName);
    //    }
    //}

    //public class DataConnectorsDTOValidator : AbstractValidator<DataConnectorsDTO>
    //{
    //    public DataConnectorsDTOValidator()
    //    {
    //        RuleFor(x => x.ConnectorCredential.ServerOrIP).NotEmpty().WithMessage(Resources.ServerOrIP);
    //        RuleFor(x => x.ConnectorCredential.PortNumber).NotEmpty().WithMessage(Resources.PortNumber);
    //        RuleFor(x => x.ConnectorCredential.ServerPassword).NotEmpty().WithMessage(Resources.ServerPassword);
    //        RuleFor(x => x.ConnectorCredential.ServerUserName).NotEmpty().WithMessage(Resources.ServerUserName);
    //    }
    //}
}
