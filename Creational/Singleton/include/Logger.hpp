#ifndef Logger_hpp 
#define Logger_hpp  
#include<string>
#include<mutex>
using namespace std ; 
class Logger {
    Logger();
    Logger (const Logger &);
    Logger operator=(const Logger &);
    Logger (const Logger &)= delete ;
    static int ctr ;
    static Logger* loggerInstance;
    static mutex mtx;

    public:
    
    static  Logger *getlogger();
    void log(string msg);
    
};
#endif
