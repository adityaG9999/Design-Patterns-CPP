#include <iostream>
#include "delldesktopbuilder.hpp"
#include<string>

void Delldesktopbuilder :: buildMonitor(){
    desktop->setMonitor("Dell Monitor");
}
void Delldesktopbuilder :: buildKeyboard(){
    desktop-> setKeyboard("Dell Keyboard");
}
void Delldesktopbuilder :: buildMouse(){
    desktop-> setMouse("Dell Mouse");
}
void Delldesktopbuilder :: buildprocessor(){
    desktop-> setprocessor("Dell Processor");
}
void Delldesktopbuilder :: buildram(){
    desktop-> setram("Dell Ram");
}
void Delldesktopbuilder :: buildspeaker(){
    desktop-> setspeaker("Dell Speaker");
}
