using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(InnonAnalytics.WebUI.Startup))]
namespace InnonAnalytics.WebUI
{
    public partial class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            ConfigureAuth(app);
        }
    }
}
