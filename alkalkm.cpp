#include "alkalkm.hpp"
#include "graphics.hpp"
#include "widgetss.hpp"

using namespace genv;
using namespace std;
void Application::registerWidget(Widget * widget)
{
    _widgets.push_back(widget);
}

void Application::event_loop() {
    event ev;
    int focus = -1;
    while(gin >> ev ) {
        if (ev.type == ev_key && ev.keycode==key_enter) {
            action("enter");
                }


        if (focus!=-1) {
            _widgets[focus]->handle(focus);
        }
        for (Widget * w : _widgets) {
            w->draw();
        }
        gout << refresh;
    }}

