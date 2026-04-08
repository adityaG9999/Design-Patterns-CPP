#include<iostream>
#include<thread>
#include "Logger.hpp"

using namespace std;

void user1logs(){
    Logger* logger1 = Logger::getlogger();
    logger1->log("this is user 1");
}

void user2logs(){
    Logger* logger2 = Logger::getlogger();
    logger2->log("this is user 2");
}

int main()
{
    std::thread t1(user1logs);
    std::thread t2(user2logs);

    t1.join();
    t2.join();

    return 0;
}
