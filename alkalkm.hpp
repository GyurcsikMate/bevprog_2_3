#ifndef ALKALKM_HPP_INCLUDED
#define ALKALKM_HPP_INCLUDED
#include <string>
#include <vector>
class Widget;

class Application
{
public:

        virtual ~Application(){}
        void registerWidget(Widget * widget);
        void event_loop();
        virtual void action(std::string)=0;
protected:
    std::vector<Widget *> _widgets;
};


#endif // ALKALKM_HPP_INCLUDED
