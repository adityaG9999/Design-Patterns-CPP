#ifndef hpdesktopbuilder_hpp
#define hpdesktopbuilder_hpp
#include "desktopbuilder.hpp"

class Hpdesktopbuilder :public Desktopbuilder{

    void buildMonitor();
    void buildKeyboard();
    void buildMouse();
    void buildprocessor();
    void buildram();
    void buildspeaker();
};
#endif
