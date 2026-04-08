#include<iostream>
#include "hpdesktopbuilder.hpp"

void Hpdesktopbuilder::buildMonitor(){
    desktop->setMonitor("HP Monitor");
}
void Hpdesktopbuilder::buildKeyboard(){
    desktop-> setKeyboard("HP Keyboard");
}
void Hpdesktopbuilder:: buildMouse(){
    desktop-> setMouse("HP Mouse");
}
void Hpdesktopbuilder:: buildprocessor(){
    desktop-> setprocessor("HP processor");
}
void Hpdesktopbuilder:: buildram(){
    desktop-> setram("HP ram");
}
void Hpdesktopbuilder:: buildspeaker(){
    desktop-> setspeaker("HP speaker");
}
