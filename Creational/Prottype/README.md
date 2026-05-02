# Prototype Design Pattern (Creational Design Pattern)

## Overview

This project demonstrates the implementation of the **Prototype Design Pattern** in C++ using abstract classes, virtual functions, and runtime polymorphism. The Prototype Pattern helps in creating duplicate objects by cloning existing ones instead of creating new objects from scratch.

## Definition

The **Prototype Design Pattern** is a creational design pattern that allows objects to be copied using a cloning mechanism, without depending on their concrete classes.

## Problem Statement

Creating multiple similar objects using the `new` keyword repeatedly in client code can lead to repetitive initialization logic and unnecessary object creation overhead.

This becomes inefficient when:

* Object creation is expensive
* Many similar objects are needed
* The client should not depend on concrete class constructors

## Solution

The Prototype Pattern solves this by introducing a prototype interface with a `clone()` method.
Instead of creating new objects directly, the client clones existing prototype objects.

This reduces object creation cost and removes tight coupling between client code and concrete classes.

---

## Project Structure

```bash
Creational/Prototype/

prototype.cpp   → Complete implementation (Prototype + Concrete Prototype + Client)
```

---

## Components

### Prototype (Abstract Class)

`Productprototype` defines a common interface using pure virtual functions:

* `clone()` → Creates and returns a copy of the object
* `display()` → Displays product details

### Concrete Prototype

`Product` implements the `Productprototype` interface.

It:

* Stores product information (`name`, `price`)
* Implements cloning using the copy constructor
* Displays product details

### Client

The client creates original objects, clones them using `clone()`, and uses them through the `Productprototype` interface.

---

## Working

1. Client creates original product objects
2. Client calls `clone()` on existing objects
3. Prototype returns duplicated object
4. Client uses cloned objects through base class interface
5. Client displays both original and cloned products

---

## Compile Instructions

Compile using:

```bash
g++ prototype.cpp -o prototype
```

Run using:

```bash
./prototype
```

---

## Example

### Output

```bash
Product 1 :
Name :apple
Price :5

Product 2 :
Name :banana
Price :2

Clone product 1
Name :apple
Price :5

Clone product 2
Name :banana
Price :2
```

---

## Advantages

* Reduces object creation cost
* Avoids repetitive initialization logic
* Loose coupling between client and concrete classes
* Easy to duplicate existing objects
* Improves flexibility in object creation
* Supports runtime polymorphism

---

## Design Principles Used

* Program to interface, not implementation
* Encapsulation of object creation
* Runtime polymorphism
* Separation of concerns
* Object cloning over direct instantiation

---

## Learning Outcome

Through this implementation I learned:

* Abstract classes in C++
* Pure virtual functions
* Runtime polymorphism
* Object cloning using copy constructor
* Prototype design pattern structure
* Memory management using dynamic allocation
* Separation of interface and implementation

---

## Author

**Aditya Gajare**

This project is part of my learning journey in software design patterns and object-oriented programming in C++.

