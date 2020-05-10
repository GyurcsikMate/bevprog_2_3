#ifndef ALKALKM_HPP_INCLUDED
#define ALKALKM_HPP_INCLUDED
#include <string>
#include <vector>
class Widget;

class Application
{
protected:
    std::vector<Widget *> _widgets;
public:

        virtual ~Application(){}
        void registerWidget(Widget * widget);
        virtual void event_loop();
        virtual void action(std::string)=0;

};


#endif // ALKALKM_HPP_INCLUDED
