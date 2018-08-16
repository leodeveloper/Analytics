using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(InnonAnalytics.SingleSignOn.Startup))]
namespace InnonAnalytics.SingleSignOn
{
    public partial class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            ConfigureAuth(app);
        }
    }
}
