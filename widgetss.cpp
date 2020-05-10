#include "widgetss.hpp"
#include "graphics.hpp"
#include <string>
using namespace genv;

Widget::Widget(Application *parent,int x, int y, int sx, int sy) :_parent(parent), _x(x), _y(y), _size_x(sx), _size_y(sy)
{
    _parent->registerWidget(this);
}

bool Widget::is_selected(int mouse_x, int mouse_y)
{
    return mouse_x>_x && mouse_x<_x+_size_x && mouse_y>_y && _y<_y+_size_y;
}





