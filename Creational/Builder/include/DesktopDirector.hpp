#ifndef Desktopdirector_hpp
#define Desktopdirector_hpp
#include"desktopbuilder.hpp"

class Desktopdirector{
private:
Desktopbuilder*desktopbuilder;
public:
    Desktopdirector(Desktopbuilder*pdesktopbuilder){
        desktopbuilder = pdesktopbuilder;;
    }
    Desktop* getdesktop(){
        return desktopbuilder->getdesktop();
    }
    Desktop*Builddesktop(){
        desktopbuilder->buildMonitor();
        desktopbuilder->buildKeyboard();
        desktopbuilder->buildMouse();
        desktopbuilder->buildprocessor();
        desktopbuilder->buildram();
        desktopbuilder->buildspeaker();
        return desktopbuilder->getdesktop();
    }
};
#endif
