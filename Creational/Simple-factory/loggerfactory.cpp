#include "loggerfactory.hpp"
using namespace std;



    Ilogger* Loggerfactory:: createlogger(LogLevel loglevel){
        if (loglevel == LogLevel::Debug );
        return new DebugLogger();
        if(loglevel == LogLevel::Info);
        return new Infologger();
        if(loglevel==LogLevel::Error);
        return new Errorlogger();  
        return nullptr ;   
    }
