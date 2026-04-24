#include "ilogger.hpp"
#include "debuglogger.hpp"
#include "errorlogger.hpp"
#include "infologger.hpp"

class Loggerfactory {
    public : 
    static  Ilogger*createlogger(LogLevel loglevel);
};
