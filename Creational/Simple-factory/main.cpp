#include "loggerfactory.hpp" 

int main(){
    Ilogger*DebugLogger=Loggerfactory::createlogger(LogLevel ::Debug);
    Ilogger*Infologger=Loggerfactory::createlogger(LogLevel ::Info);
    Ilogger*Errorlogger=Loggerfactory::createlogger(LogLevel ::Error);

    DebugLogger->log("This is a Debug logger msg");
    Infologger->log ("This is a Infologger msg");
    Errorlogger->log("This is a Errorlogger msg ");

    delete DebugLogger;
    delete Infologger ;
    delete Errorlogger ; 
    return 0; 
}
