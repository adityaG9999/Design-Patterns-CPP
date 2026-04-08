#include "desktop.hpp"
#include<iostream>
#include<string>
using namespace std; 

void Desktop::setMonitor(string pMonitor){
    Monitor=pMonitor;
}
void Desktop::setKeyboard(string pKeyboard){
    Keyboard=pKeyboard;
}
void Desktop::setMouse(string pMouse){
    Mouse=pMouse;
}
void Desktop :: setprocessor(string pprocessor){
    processor=pprocessor;
}
void Desktop:: setram(string pram){
    ram= pram;
}
void Desktop:: setspeaker(string pspeaker){
    speaker =pspeaker;
}

void Desktop::showspecs(){
    cout<<"________________________________________________________________________________"<<endl;
    cout<<"monitor"<<Monitor <<endl;
    cout<<"Keyboard"<<Keyboard <<endl;
    cout<<"Mouse"<<Mouse <<endl;
    cout<<"Processor"<<processor <<endl;
    cout<<"ram"<<ram <<endl;
    cout<<"speaker"<<speaker <<endl;


}
