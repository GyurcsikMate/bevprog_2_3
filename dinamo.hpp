#ifndef DINAMO_HPP_INCLUDED
#define DINAMO_HPP_INCLUDED
#include "widgetss.hpp"

using namespace std;

class Dinamik:public Widget
{
    protected:
    vector<string>osszes;
    bool kie;
public:
    Dinamik(int , int, int , int ,string );
    void draw();
    void handle(int oldal);
    int xkereso();
    int ykereso();
    string kiekereso();
    void beolvaso(string fajl);

};

#endif // DINAMO_HPP_INCLUDED
