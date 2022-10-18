#include "Person.h"

Person::Person() {}
void Person::setName() {
  cout << "Enter your name: ";
  cin >> name;
}
void Person::setName(string name) {
  this->name = name;
}
