#ifndef PERSON_H
#define PERSON_H

#include "Player.h"

class Person : public Player {
 public:
  Person();
  Person(std::string name);
};

#endif