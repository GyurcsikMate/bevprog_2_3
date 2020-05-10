#include "graphics.hpp"
#include "widgetss.hpp"
#include "alkalkm.hpp"
#include "gomb.hpp"
#include "jatekmesterkod.hpp"
using namespace genv;


int main()
{
    gout.open(300,300);
    Jatekmester* Milne=new Jatekmester;
    Milne->event_loop();
    return 0;
}
