#ifndef SZOVEGDOBOZOSAPP_HPP_INCLUDED
#define SZOVEGDOBOZOSAPP_HPP_INCLUDED
#include "alkalkm.hpp"
#include "gorgos.hpp"
#include "muveletlista.hpp"

using namespace genv;
class Szovegapp:public Application
{
protected:
    Gorgi * alma;
    Lista * zold;
    int kijeloltid=0;
public:
    Szovegapp();

    void event_loop();
    void action(std::string);
    //void draw();
};


#endif // SZOVEGDOBOZOSAPP_HPP_INCLUDED
