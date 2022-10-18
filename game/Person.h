#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

#include "Player.h"

class Person : public Player {
 public:
  std::string name;
  Person();
};

#endif
