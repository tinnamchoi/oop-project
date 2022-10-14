#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

#include "Player.h"

class Person : public Player {
 protected:
  std::string name;

 public:
  Person();
  void setName(std::string name);
  std::string getName();
};

#endif
