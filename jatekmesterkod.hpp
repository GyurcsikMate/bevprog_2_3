#ifndef JATEKMESTERKOD_HPP_INCLUDED
#define JATEKMESTERKOD_HPP_INCLUDED
#include "alkalkm.hpp"
#include "graphics.hpp"
#include "widgetss.hpp"
#include "gomb.hpp"
using namespace genv;
using namespace std;

class Jatekmester: public Application{
protected:
    std::vector<Widget *> _widgets;

public:
        void event_loop();
        void action(std::string);
};


#endif // JATEKMESTERKOD_HPP_INCLUDED
