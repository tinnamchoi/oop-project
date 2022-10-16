#include "Person.h"

#include <iostream>
#include <string.h>

Person::Person() {
    name = "Player 1";  //default name of player
}

void Person::setName(std::string name) {
    this->name = name; //set name
}

std::string Person::getName() {
    return name; //get name
}

void Person::move() {
    cout << "Enter move (): " << endl; //enter a character to represent a move
    cin >> move; //take move and store into the void move variable from player main class
}
