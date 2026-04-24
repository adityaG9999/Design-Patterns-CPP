#include "common.hpp"

class Ilogger{
    public : 
    virtual void log(const string& msg)=0;
    virtual ~Ilogger(){}
};
