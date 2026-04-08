#include "vehicle_factory.hpp"

Vehicle* Vehiclefactory::getVehicle(string  vehicletype){
    Vehicle* vehicle ;
    if(vehicletype=="Car"){
        vehicle = new Car();
    }else if (vehicletype == "Bike"){
        vehicle = new bike();
    }return vehicle;
}
