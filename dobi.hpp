#ifndef DOBI_HPP_INCLUDED
#define DOBI_HPP_INCLUDED
#include "widgetss.hpp"
using namespace std;
using namespace genv;
class Doboz:public Widget
{
    public:
    Doboz(int , int, int , int ,string );
    void draw();
    void handle(int oldal);
    int xkereso();
    int ykereso();
    string kiekereso();
};


#endif // DOBI_HPP_INCLUDED
