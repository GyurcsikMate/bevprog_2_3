#include "statikusszovegdoboz.hpp"
using namespace std;
using namespace genv;

Szovi::Szovi(int x, int y, int sx, int sy,string sztring):Widget(x, y, sx, sy,sztring)
{
//_parent->registerWidget(this);
}

void Szovi::beolvaso(string fajl)
{
    ifstream bemenet(fajl);
    string sor;

    while(bemenet.good())
    {


    string szo;

    bemenet>>szo;
    if(gout.twidth(sor+' '+szo)<= _size_x)
    {
        sor+=szo+' ';
    }
    else if(gout.twidth(sor+' '+szo)> _size_x)
    {
        osszes.push_back(sor);
        sor=szo+' ';
    }
}
osszes.push_back(sor);
}


void Szovi::draw()
{
    gout<<move_to(_x,_y)<<color(250,250,250)<<box(_size_x,_size_y);
    for(int i=0;i<=osszes.size();i++)
    {
        gout<<move_to(_x,_y+i*gout.cascent()+2)<<text(osszes[i]);

    }
}
    void Szovi::handle(int oldal)
    {
        oldal++;
    }
    int Szovi::xkereso()
    {

        return _x;
    }
    int Szovi::ykereso()
    {

        return _y;
    }
    string Szovi::kiekereso()
    {
        return "sajt";
    }

