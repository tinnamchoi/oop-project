#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

//main player class - subclasses are person and computer
class Player {
 protected:
    char recentMove; //take move
 public:
      std::string pokemon[6]; //this provides player with 6 pokemon options
     //constructor
    Player();
    virtual void move() = 0; //implemented in each child class - not sure if this is needed.

    //getter
    char getMove(); //returns move made
    
    //else
    bool win(Player * opponent); //compare players' moves to see who wins
};

#endif
