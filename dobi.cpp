#include "dobi.hpp"
using namespace std;
using namespace genv;
//egyszerûség miatt itt a _size_y lesz a bekapcsolást jelzõ
Doboz::Doboz(int x, int y, int sx, int sy,string sztring):Widget(x, y, sx, sy,sztring)
{
//_parent->registerWidget(this);
}



void Doboz::draw()
{
    if(_size_y==0)
    {
        gout<<move_to(_x,_y)<<color(250,250,250)<<box(_size_x,_size_x);
    }
    if(_size_y==1)
    {
        gout<<move_to(_x,_y)<<color(250,250,250)<<box(_size_x,_size_x)<<move_to(_x,_y)<<line_to(_x+_size_x,_y+_size_x)<<move_to(_x+_size_x,_y)<<line_to(_x,_y+_size_x);
    }
}
    void Doboz::handle(int oldal)
    {
        _size_y=oldal;
    }
    int Doboz::xkereso()
    {

        return _x;
    }
    int Doboz::ykereso()
    {

        return _y;
    }
    string Doboz::kiekereso()
    {
        return "sajt";
    }

