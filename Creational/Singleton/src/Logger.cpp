#include<iostream>
#include<string>
#include"Logger.hpp"
mutex Logger::mtx;
Logger* Logger:: loggerInstance=nullptr ;
int Logger::ctr = 0 ;
using namespace std;
 Logger :: Logger(){
    ctr++;
    cout << "New instance is created & the number of instances is : "<<ctr<<endl; 
 }

 void Logger::log(string msg ){
    cout<< msg << endl ;

 }
 Logger* Logger::getlogger(){
   if(loggerInstance==nullptr){
   mtx.lock();
    if(loggerInstance==nullptr){
        loggerInstance  =new Logger();
    }mtx.unlock();
   }
    return loggerInstance;
 }
