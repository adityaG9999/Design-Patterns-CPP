#ifndef desktopbuilder_hpp
#define desktopbuilder_hpp
#include "desktop.hpp"

class Desktopbuilder{
protected:
    Desktop*desktop;

public:
Desktopbuilder(){
    desktop=new Desktop();
};

virtual void buildMonitor()= 0 ;//pure virtual function i.e, classes inheriting this class have to impleent this function 
virtual void buildKeyboard()=0;
virtual void buildMouse()=0;
virtual void buildprocessor()=0;
virtual void buildram()=0;
virtual void buildspeaker()=0;
virtual Desktop*getdesktop(){
    return desktop;
}
};
#endif
