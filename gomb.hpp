#ifndef GOMB_HPP_INCLUDED
#define GOMB_HPP_INCLUDED
#include "widgetss.hpp"
#include "graphics.hpp"
#include "alkalkm.hpp"
class Gombi: public Widget
{
protected:
    int kie;
public:
    Gombi(Application *,int , int , int , int );
    virtual void draw();

    virtual void handle(genv::event ev);
};


#endif // GOMB_HPP_INCLUDED
