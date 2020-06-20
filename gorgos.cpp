//#include "alkalkm.hpp"
//#include "widgetss.hpp"
//#include "graphics.hpp"
#include "gorgos.hpp"
//#include <string>
//#include <fstream>
//#include <vector>
using namespace std;
using namespace genv;
///Fontos!! y kereso az erteket adja vissza
Gorgi::Gorgi(int x, int y, int sx, int sy,string sztring):Widget(x, y, sx, sy,sztring)
{
 ertek=0;
//_parent->registerWidget(this);
}




void Gorgi::draw()
{
    gout<<move_to(_x,_y)<<color(100,100,100)<<box(_size_x,_size_y)<<color(200,200,0)<<text(to_string(ertek));

}
    void Gorgi::handle(int oldal)
    {
        ertek+=oldal;
    }
    int Gorgi::xkereso()
    {

        return _x;
    }
    int Gorgi::ykereso()
    {

        return ertek;
    }
    string Gorgi::kiekereso()
    {
        return "sajt";
    }
