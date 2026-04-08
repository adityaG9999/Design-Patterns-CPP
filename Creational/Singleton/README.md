# Singleton Design Pattern (Creational Pattern)

## Overview

This project demonstrates the implementation of the **Singleton Design Pattern** in C++ using a Logger example. The Singleton ensures that only one instance of a class exists and provides a global access point to that instance.

This implementation also demonstrates **thread-safe Singleton** using mutex and multi-threading.

## Definition

Singleton is a creational design pattern that ensures a class has only one instance and provides a global point of access to it.

## Problem Statement

In many applications (like logging systems, database connections, configuration managers), only one object should exist. Creating multiple instances may cause:

* Resource conflicts
* Inconsistent data
* Unnecessary memory usage

## Solution

The Singleton pattern solves this by:

* Making the constructor private
* Creating a static instance pointer
* Providing a static method to access the instance
* Preventing object copying
* Using mutex for thread safety

## Project Structure

Creational/Singleton/

include/

* Logger.hpp → Singleton class definition

src/

* Logger.cpp → Singleton implementation

main.cpp → Client program demonstrating multi-thread usage

## Components

### Singleton Class

Logger class ensures only one object is created.

### Static Instance

A static pointer holds the single instance.

### Global Access Method

getInstance() provides controlled access.

### Thread Safety

Mutex is used to prevent multiple threads from creating multiple objects.

### Client

main.cpp creates multiple threads accessing the same Logger instance.

## Working

1. Client requests Logger instance.
2. Logger checks if instance exists.
3. If not, mutex locks creation section.
4. Instance gets created.
5. Same instance returned to all threads.
6. Threads use same logger object.

## Compile Instructions

Compile using:

g++ main.cpp src/*.cpp -I include -pthread -o singleton

Run using:

./singleton

## Example Output

New instance is created & the number of instances is : 1
this is user 1
this is user 2

## Key Features

* Lazy initialization
* Thread safe implementation
* Double checked locking
* Global access point
* Prevented object copying

## Advantages

* Controlled instance creation
* Saves memory
* Thread safe design
* Centralized logging mechanism
* Easy global access

## Limitations

* Global state can make testing difficult
* Requires careful thread safety handling
* Can introduce hidden dependencies

## Design Principles Used

* Encapsulation
* Controlled object creation
* Thread synchronization
* Separation of concerns

## Learning Outcome

Through this implementation I learned:

* Singleton pattern structure
* Thread safety using mutex
* Multi-threaded testing
* Static members in C++
* Object lifetime control


## Author

Aditya Gajare

---

This project is part of my learning journey in design patterns and software architecture using C++.
