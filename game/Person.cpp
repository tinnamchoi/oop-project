#include "Person.h"

#include <iostream>
#include <string.h>

Person::Person() {
    name = "Player 1";
}

void Person::setName(std::string name) {
    this->name = name;
}

std::string Person::getName() {
    return name;
}

void Person::move() {
    cout << "Enter move (): " << endl; //enter a character to represent a move
    cin >> move;
}
