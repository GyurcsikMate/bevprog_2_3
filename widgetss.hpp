#ifndef WIDGETSS_HPP_INCLUDED
#define WIDGETSS_HPP_INCLUDED
//#include "alkalkm.hpp"
#include "graphics.hpp"
#include <string>
#include <fstream>
#include <vector>
using namespace std;
class Widget {
protected:
    int _x, _y, _size_x, _size_y;
    //Application * _parent;
    string szoveg;
public:
    Widget(int x, int y, int sx, int sy,string sztring);
    virtual ~Widget(){}
    virtual bool is_selected(int mouse_x, int mouse_y);
    virtual void draw() = 0;
    virtual void handle(int oldal) = 0;
    virtual int xkereso()=0;
    virtual int ykereso()=0;
    virtual string kiekereso()=0;
};


#endif // WIDGETSS_HPP_INCLUDED
