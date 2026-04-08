
#include "vehicle_factory.hpp"
#include <iostream>

using namespace std ; 

int main(){
    string vehicletype;
    cin>>vehicletype;
    Vehicle* vehicle= Vehiclefactory::getVehicle(vehicletype);
    vehicle-> createVehicle();
    
    return 0 ; 
}
