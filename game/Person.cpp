#include "Person.h"

Person::Person() {}
void Person::setName() {
  cout << "Enter your name: ";
  cin >> name;
}
void Person::setName(std::string name) { this->name = name; }
