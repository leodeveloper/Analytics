using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(kenoUI.Startup))]
namespace kenoUI
{
    public partial class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            ConfigureAuth(app);
        }
    }
}
