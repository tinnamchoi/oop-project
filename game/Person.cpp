#include "Person.h"

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
    std::cout << "Enter move (): " << std::endl; //enter a character to represent a move
    cin >> move;
}
