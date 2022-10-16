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
