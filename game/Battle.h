#ifndef BATTLE_H
#define BATTLE_H

#include <iostream>
#include <string>

#include "Pokemon.h"
#include "Player.h"
#include "Person.h"
#include "Computer.h"

class Battle{
 public:
  Player *player;
  Computer *computer;
  Battle(Player *player, Computer *computer);
  int winState();
  void printInfo();
};

#endif