#include "Person.h"

Person::Person() {
  name = "Default Name";
}
void Person::setName(std::string name) {
  this->name = name;
}
std::string Person::getName() {
  return name;
}
