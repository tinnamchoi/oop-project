#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <string>

#include "Player.h"

class Computer : public Player {
  public:
    //constructor
    Computer();

    //else
    void move(); // (randomise an action)
};

#endif
