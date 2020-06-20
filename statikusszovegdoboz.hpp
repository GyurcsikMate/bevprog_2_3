#ifndef STATIKUSSZOVEGDOBOZ_HPP_INCLUDED
#define STATIKUSSZOVEGDOBOZ_HPP_INCLUDED
#include "widgetss.hpp"

using namespace std;

class Szovi:public Widget
{
    protected:
    vector<string>osszes;
public:
    Szovi(int , int, int , int ,string );
    void draw();
    void handle(int oldal);
    int xkereso();
    int ykereso();
    string kiekereso();
    void beolvaso(string fajl);

};


#endif // STATIKUSSZOVEGDOBOZ_HPP_INCLUDED
