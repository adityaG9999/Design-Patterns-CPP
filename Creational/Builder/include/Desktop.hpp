#ifndef desktop_hpp 
#define desktop_hpp
#include <string>
using namespace std; 

class Desktop{
    string Monitor ; 
    string Mouse ; 
    string Keyboard ;
    string ram ;
    string processor ; 
    string speaker;

    public : 
    void setMonitor(string pMonitor);
    void setMouse(string pMouse);
    void setKeyboard(string pkeyboard);
    void setram(string pram);
    void setprocessor(string pprocessor);
    void setspeaker(string pspeaker);
    void showspecs();

};
#endif
