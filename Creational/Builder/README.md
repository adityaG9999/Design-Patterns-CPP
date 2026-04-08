# Builder Design Pattern (Creational Pattern)

## Overview

This project demonstrates the implementation of the **Builder Design Pattern** in C++ using a Desktop configuration example. The Builder Pattern allows constructing complex objects step by step and separates the construction process from the final representation.

In this example, different desktop configurations (HP and Dell) are built using separate builder classes while following the same construction process.

## Definition

The Builder Pattern is a creational design pattern that separates the construction of a complex object from its representation so that the same construction process can create different representations.

## Problem Statement

When creating complex objects with multiple parts (like a desktop computer with monitor, keyboard, processor, RAM, etc.), constructing them directly inside the client code leads to:

* Complex constructors
* Poor readability
* Tight coupling
* Difficult maintenance

## Solution

The Builder Pattern solves this by:

* Separating object construction from representation
* Using a Builder interface
* Using Concrete Builders for different configurations
* Using a Director to control the construction process

## Project Structure

Creational/Builder/

include/

* Desktop.hpp → Product class
* DesktopBuilder.hpp → Abstract builder
* DesktopDirector.hpp → Director class
* HpDesktopBuilder.hpp → Concrete builder (HP)
* DellDesktopBuilder.hpp → Concrete builder (Dell)

src/

* Desktop.cpp → Product implementation
* HpDesktopBuilder.cpp → HP builder implementation
* DellDesktopBuilder.cpp → Dell builder implementation

main.cpp → Client code

## Components

### Product

Desktop class represents the final object being built.

### Abstract Builder

DesktopBuilder defines the interface for building desktop components.

### Concrete Builders

HpDesktopBuilder builds HP configuration.
DellDesktopBuilder builds Dell configuration.

### Director

DesktopDirector controls the construction sequence.

### Client

main.cpp requests the director to build desktops.

## Working

1. Client creates a builder object.
2. Client passes builder to Director.
3. Director calls build steps in sequence.
4. Builder constructs parts of Desktop.
5. Builder returns the completed Desktop.
6. Client displays configuration.

## Compile Instructions

Compile using:

g++ main.cpp src/*.cpp -I include -o builder

Run using:

./builder

## Example Output

HP Desktop:
Monitor: HP Monitor
Keyboard: HP Keyboard
Mouse: HP Mouse
Processor: HP Processor
RAM: HP RAM
Speaker: HP Speaker

Dell Desktop:
Monitor: Dell Monitor
Keyboard: Dell Keyboard
Mouse: Dell Mouse
Processor: Dell Processor
RAM: Dell RAM
Speaker: Dell Speaker

## Advantages

* Step-by-step object construction
* Cleaner code organization
* Separation of construction and representation
* Easy to add new configurations
* Reusable construction process

## Design Principles Used

* Separation of concerns
* Encapsulation
* Open/Closed Principle
* Single Responsibility Principle

## Learning Outcome

Through this implementation I learned:

* Builder design pattern structure
* Separation of product and construction logic
* Role of Director in object creation
* Abstract classes and polymorphism
* Modular project organization



## Author

Aditya Gajare


---

This project is part of my learning journey in object oriented design and software architecture using C++.
