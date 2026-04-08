#ifndef delldesktopbuilder_hpp
#define delldesktopbuilder_hpp
#include "desktopbuilder.hpp"

class Delldesktopbuilder :public Desktopbuilder{

    void buildMonitor();
    void buildKeyboard();
    void buildMouse();
    void buildprocessor();
    void buildram();
    void buildspeaker();
};
#endif
