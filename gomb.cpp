#include "gomb.hpp"
#include "widgetss.hpp"
#include "alkalkm.hpp"
using namespace genv;
using namespace std;


Gombi::Gombi(Application*parent,int x, int y, int sx, int sy):Widget(parent,x,y,sx,sy)
{
    int kie=0;
}


void Gombi::draw()
{
    gout<<move_to(_x,_y)<<color(kie*100,20,20)<<box(_size_x,_size_y);
}
void Gombi::handle(event ev)
{
}


