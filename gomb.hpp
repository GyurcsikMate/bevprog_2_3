#ifndef GOMB_HPP_INCLUDED
#define GOMB_HPP_INCLUDED
#include "widgetss.hpp"
#include "graphics.hpp"
#include "alkalkm.hpp"
class Gombi: public Widget
{
public:
    Gombi(Application *,int , int , int , int,int );
    void draw();

    void handle(int oldal);
};


#endif // GOMB_HPP_INCLUDED
