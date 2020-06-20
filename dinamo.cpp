
#include "dinamo.hpp"

using namespace std;
using namespace genv;

Dinamik::Dinamik(int x, int y, int sx, int sy,string sztring):Widget(x, y, sx, sy,sztring)
{
//_parent->registerWidget(this);
kie=false;
}

void Dinamik::beolvaso(string fajl)
{

    string sor;
    string szo; //nem mukodik aaaaaaaaaaaaaaaaaaaaaaaa!

    if(gout.twidth(sor+' ')<= _size_x)
    {
        //sor+=ev.keycode; // ezt majd az appba
    }
    else if(gout.twidth(sor+' '+szo)> _size_x)
    {
        osszes.push_back(sor);
        sor=szo+' ';
    }
}
//osszes.push_back(sor);



void Dinamik::draw()
{
    gout<<move_to(_x,_y)<<color(250,250,250)<<box(_size_x,_size_y);
    for(int i=0;i<=osszes.size();i++)
    {
        gout<<move_to(_x,_y+i*gout.cascent()+2)<<text(osszes[i]);

    }
}
    void Dinamik::handle(int oldal)
    {
        oldal++;
    }
    int Dinamik::xkereso()
    {

        return _x;
    }
    int Dinamik::ykereso()
    {

        return _y;
    }
    string Dinamik::kiekereso()
    {

        return "sanyo";
    }

