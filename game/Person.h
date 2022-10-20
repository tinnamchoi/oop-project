#ifndef PERSON_H
#define PERSON_H

#include "Player.h"

class Person : public Player {
 public:
  Person();
  void setName();
  void setName(std::string name);
};

#endif