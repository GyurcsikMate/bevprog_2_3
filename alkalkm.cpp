#include "alkalkm.hpp"
//#include "graphics.hpp"
//#include "widgetss.hpp"


using namespace std;
using namespace genv;
void Application::registerWidget(Widget * widget)
{
    _widgets.push_back(widget);
}
Application::~Application()
{
    for(size_t i=0;i<_widgets.size();i++)
        {
            delete _widgets[i];
        }

}
void Application::draw()
{
    for(size_t i=0;i<_widgets.size();i++)
        {
            _widgets[i]->draw();
        }
    gout<<refresh;
}
