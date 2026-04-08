# Observer Design Pattern (Behavioral Design Pattern)

## Overview

This project demonstrates the implementation of the **Observer Design Pattern** in C++ using a simple notification system. In this example, a Group (Subject) maintains a list of Users (Observers) and notifies them whenever a new message is published.

The implementation shows how multiple objects can listen for updates from a single object without tight coupling.

## Definition

The Observer Pattern is a behavioral design pattern that defines a one-to-many relationship between objects so that when one object (Subject) changes its state, all its dependents (Observers) are notified automatically.

## Problem Statement

When multiple objects need updates from another object, directly connecting them creates:

* Tight coupling
* Difficult maintenance
* Poor scalability
* Hardcoded dependencies

## Solution

The Observer Pattern solves this by introducing:

* An Observer interface
* A Subject class maintaining observer list
* Dynamic subscription and unsubscription
* Automatic notifications

## Implementation Details

### Observer Interface

`Isubscriber` defines the common interface for all observers using a pure virtual function:

notify(string msg)

### Concrete Observer

`User` implements the observer interface and receives notifications from the group.

### Subject

`Group` maintains a list of subscribers and provides:

subscribe() → Add observer
unsubscribe() → Remove observer
notify() → Notify all observers

### Client Code

The main function creates users, subscribes them, sends notifications, and demonstrates unsubscribe functionality.

## Working

1. Group object is created.
2. Users subscribe to the group.
3. Group sends notification.
4. All subscribed users receive update.
5. One user unsubscribes.
6. Group sends another notification.
7. Only remaining users receive update.

## Code Structure

Observer Interface:
Isubscriber

Concrete Observer:
User

Subject:
Group

Client:
main()

## Compile Instructions

Compile using:

g++ observer.cpp -o observer

Run using:

./observer

## Example Output

User 1 has been notified new msg
User 2 has been notified new msg
User 3 has been notified new msg

User 2 has been notified new new msg
User 3 has been notified new new msg

## Advantages

* Loose coupling between subject and observers
* Dynamic subscription management
* Scalable design
* Clean event notification mechanism



## Learning Outcome

Through this implementation I learned:

* Observer pattern architecture
* One-to-many object relationships
* Pure virtual interfaces
* STL list usage
* Dynamic subscription handling


## Author

Aditya Gajare


---

This project is part of my learning journey in design patterns and object-oriented software design.

