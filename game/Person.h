#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

#include "Player.h"

class Person : public Player {
  protected:
    std::string name;
  public:
    //constructor
    Person();

    //getter
    std::string getName();

    //setter
    void setName(std::string name);

    //else
    void move();               //allow user to type in a single character to
                               //represent their move. If a move is impossible,
                               //“Move unavailable” is outputted and the user is
                               //asked to input a character again.
                               //Otherwise, their input is stored
};

#endif
