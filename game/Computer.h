#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <iostream>

class Computer : public Player {
  public:
    //constructor
    Computer();

    //else
    void move(); // (randomise an action)
};

#endif
