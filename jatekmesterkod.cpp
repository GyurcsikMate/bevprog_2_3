#include "jatekmesterkod.hpp"
#include "graphics.hpp"
#include "widgetss.hpp"
#include <iostream>

using namespace genv;
using namespace std;

void Jatekmester::event_loop()
{
    event ev;
    Application* ize=this;
    for(int i=0; i<15; i++)
    {
        for(int j=0; j<15; j++)
        {
            Gombi * sv= new Gombi(ize,i*20,j*20,20,20,0);
            _widgets.push_back(sv);

            sv=nullptr;

        }
    }

    while(gin>>ev)
    {
        for(size_t i=0; i<_widgets.size(); i++)
        {
            _widgets[i]->draw();
        }
        for(int jatekos=1; jatekos<=2; jatekos++)
        {
            if(ev.type == ev_mouse && ev.button==btn_left)
            {
                int iteraptor;
                for(size_t i=0; i<_widgets.size(); i++)
                {
                    if(_widgets[i]->is_selected(ev.pos_x,ev.pos_y))
                    {
                        iteraptor=i;
                    }
                _widgets[iteraptor]->handle(jatekos);

                }

            }
        gout<<refresh;
        }
    }
}
void Jatekmester::action(std::string)
{

}
