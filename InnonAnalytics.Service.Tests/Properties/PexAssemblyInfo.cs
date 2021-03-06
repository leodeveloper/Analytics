// <copyright file="PexAssemblyInfo.cs" company="Hewlett-Packard">Copyright © Hewlett-Packard 2014</copyright>
using Microsoft.Pex.Framework.Coverage;
using Microsoft.Pex.Framework.Creatable;
using Microsoft.Pex.Framework.Instrumentation;
using Microsoft.Pex.Framework.Settings;
using Microsoft.Pex.Framework.Validation;

// Microsoft.Pex.Framework.Settings
[assembly: PexAssemblySettings(TestFramework = "VisualStudioUnitTest")]

// Microsoft.Pex.Framework.Instrumentation
[assembly: PexAssemblyUnderTest("InnonAnalytics.Service")]
[assembly: PexInstrumentAssembly("System.Data")]
[assembly: PexInstrumentAssembly("InnonAnalytics.Obix")]
[assembly: PexInstrumentAssembly("EntityFramework")]
[assembly: PexInstrumentAssembly("System.Core")]
[assembly: PexInstrumentAssembly("InnonAnalytics.Model")]
[assembly: PexInstrumentAssembly("InnonAnalytics.Common")]
[assembly: PexInstrumentAssembly("InnonAnalytics.DataWareHouseService")]

// Microsoft.Pex.Framework.Creatable
[assembly: PexCreatableFactoryForDelegates]

// Microsoft.Pex.Framework.Validation
[assembly: PexAllowedContractRequiresFailureAtTypeUnderTestSurface]
[assembly: PexAllowedXmlDocumentedException]

// Microsoft.Pex.Framework.Coverage
[assembly: PexCoverageFilterAssembly(PexCoverageDomain.UserOrTestCode, "System.Data")]
[assembly: PexCoverageFilterAssembly(PexCoverageDomain.UserOrTestCode, "InnonAnalytics.Obix")]
[assembly: PexCoverageFilterAssembly(PexCoverageDomain.UserOrTestCode, "EntityFramework")]
[assembly: PexCoverageFilterAssembly(PexCoverageDomain.UserOrTestCode, "System.Core")]
[assembly: PexCoverageFilterAssembly(PexCoverageDomain.UserOrTestCode, "InnonAnalytics.Model")]
[assembly: PexCoverageFilterAssembly(PexCoverageDomain.UserOrTestCode, "InnonAnalytics.Common")]
[assembly: PexCoverageFilterAssembly(PexCoverageDomain.UserOrTestCode, "InnonAnalytics.DataWareHouseService")]

