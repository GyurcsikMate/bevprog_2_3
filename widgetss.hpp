#ifndef WIDGETSS_HPP_INCLUDED
#define WIDGETSS_HPP_INCLUDED
#include "alkalkm.hpp"
#include "graphics.hpp"
#include <string>

class Widget {
protected:
    int _x, _y, _size_x, _size_y;
    Application * _parent;
    int kie;
public:
    Widget(Application *parent,int x, int y, int sx, int sy,int kies);
    virtual ~Widget(){}
    virtual bool is_selected(int mouse_x, int mouse_y);
    virtual void draw() = 0;
    virtual void handle(int oldal) = 0;
};
#endif // WIDGETSS_HPP_INCLUDED
