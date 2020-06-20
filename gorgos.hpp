#ifndef GORGOS_HPP_INCLUDED
#define GORGOS_HPP_INCLUDED
//#include "alkalkm.hpp"
//#include "graphics.hpp"
#include "widgetss.hpp"

//#include <string>
//#include <fstream>
//#include <vector>
using namespace std;

class Gorgi:public Widget
{
protected:
    int ertek;

public:
    Gorgi(int , int, int , int ,string );
    void draw();
    void handle(int oldal);
    int xkereso();
    int ykereso();
    string kiekereso();


};


#endif // GORGOS_HPP_INCLUDED
