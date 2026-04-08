
#ifndef vehicle_factory_hpp
#define vehicle_factory_hpp
#include<iostream>
#include <string>
#include "vehicle.hpp"
#include "car.hpp"
#include "bike.hpp"
using namespace std;

class Vehiclefactory{
 public : 
    static Vehicle *getVehicle(string vehicletype);
};


#endif
