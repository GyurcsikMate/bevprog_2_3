#include "jatekmesterkod.hpp"
#include "graphics.hpp"
#include "widgetss.hpp"
#include <iostream>
#include <string>


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
    int jatekos=1;
    bool gyozelem=0;
    while(gin>>ev)
    {


        if (gyozelem==0)
        {

            for(size_t i=0; i<_widgets.size(); i++)
            {
                _widgets[i]->draw();
            }
        }
        if (gyozelem==1)
        {

            gout<<color(0,0,0)<<box(300,300)<<text(to_string(jatekos)+". jatekos nyert!")<<refresh;
        }

        if(ev.type == ev_mouse && ev.button==btn_left)
        {
            int iteraptor;
            for(size_t i=0; i<_widgets.size(); i++)
            {
                if(_widgets[i]->is_selected(ev.pos_x,ev.pos_y))
                {
                    iteraptor=i;
                    _widgets[iteraptor]->handle(jatekos);
                    int szamlalo=0;
                    int jatszo=jatekos;
                    if(jatekos==1)
                    {
                        jatekos++;
                    }
                    else if(jatekos==2)
                    {
                        jatekos=1;
                    }
                    else
                    {
                        jatekos=2;
                    }
                    for(size_t j=0; j<9; j++)
                    {

                        for(size_t i=0; i<_widgets.size(); i++)
                        {
                            if(_widgets[i]->xkereso()==_widgets[iteraptor]->xkereso() and _widgets[i]->ykereso()==_widgets[iteraptor]->ykereso()+20*(j-4))
                            {
                                if(_widgets[i]->kiekereso()==jatszo)
                                {
                                    szamlalo++;
                                    if (szamlalo==5)
                                    {
                                        cout<<"nyert";
                                        gout<<move_to(0,0)<<color(0,0,0)<<box(300,300)<<move_to(100,100)<<color(0,200,0)<<text(to_string(jatszo)+". jatekos nyert!")<<refresh;
                                        gyozelem=1;
                                    }
                                }
                                else
                                {
                                    szamlalo=0;
                                }


                                        }


                                    }
                                }
                                for(size_t j=0; j<9; j++)
                                {

                                    for(size_t i=0; i<_widgets.size(); i++)
                                    {
                                        if(_widgets[i]->ykereso()==_widgets[iteraptor]->ykereso() and _widgets[i]->xkereso()==_widgets[iteraptor]->xkereso()+20*(j-4))
                                        {
                                            if(_widgets[i]->kiekereso()==jatszo)
                                            {
                                                szamlalo++;
                                                if (szamlalo==5)
                                                {
                                                    cout<<"nyert";
                                                    gout<<move_to(0,0)<<color(0,0,0)<<box(300,300)<<move_to(100,100)<<color(0,200,0)<<text(to_string(jatszo)+". jatekos nyert!")<<refresh;
                                                    gyozelem=1;
                                                }
                                            }
                                            else
                                            {
                                                szamlalo=0;
                                            }
                                            }


                                    }
                                }


                            }


                        }

                    }
                    gout<<refresh;
                }
            }

            void Jatekmester::action(std::string)
            {

            }


