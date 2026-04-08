# Factory Design Pattern (Creational Design Pattern)

## Overview

This project demonstrates the implementation of the **Factory Design Pattern** in C++ using pure virtual functions and runtime polymorphism. The Factory Pattern helps in creating objects without exposing the creation logic to the client and refers to newly created objects using a common interface.

## Definition

The Factory Pattern is a creational design pattern that defines an interface for creating objects but lets subclasses or factory classes decide which class to instantiate.

## Problem Statement

Creating objects directly using the `new` keyword in the client code leads to tight coupling between the client and concrete classes. This makes the system difficult to extend and maintain.

## Solution

The Factory Pattern moves the object creation logic to a separate factory class. The client only interacts with the abstract base class and the factory, reducing dependency on concrete implementations.

## Project Structure

Creational/Factory/

include/

* vehicle.hpp → Abstract product (base class)
* car.hpp → Concrete product (Car class)
* bike.hpp → Concrete product (Bike class)
* vehicle_factory.hpp → Factory interface

src/

* car.cpp → Car implementation
* bike.cpp → Bike implementation
* vehicle_factory.cpp → Factory logic

main.cpp → Client code

## Components

### Product (Abstract Class)

Vehicle class defines a common interface using a pure virtual function:
createVehicle()

### Concrete Products

Car and Bike classes implement the Vehicle interface.

### Factory

VehicleFactory decides which object to create based on user input.

### Client

The client (main.cpp) requests objects from the factory and uses them through the Vehicle interface.

## Working

1. Client enters vehicle type.
2. Client calls VehicleFactory.
3. Factory checks requested type.
4. Factory creates appropriate object.
5. Factory returns Vehicle pointer.
6. Client calls createVehicle() using polymorphism.

## Compile Instructions

Compile using:

g++ main.cpp src/*.cpp -I include -o factory

Run using:

./factory

## Example

Input:
Car

Output:
creating Car

Input:
Bike

Output:
Creating bike

## Advantages

* Loose coupling between client and concrete classes
* Encapsulation of object creation logic
* Easy to extend (new vehicles can be added easily)
* Promotes code reusability
* Follows Open/Closed Principle

## Design Principles Used

* Program to interface, not implementation
* Encapsulation of object creation
* Runtime polymorphism
* Separation of concerns

## Learning Outcome

Through this implementation I learned:

* Pure virtual functions
* Runtime polymorphism
* Factory design pattern structure
* Separation of interface and implementation
* Modular C++ project organization



## Author

Aditya Gajare

---

This project is part of my learning journey in software design patterns and object-oriented programming.
