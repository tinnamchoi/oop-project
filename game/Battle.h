#ifndef BATTLE_H
#define BATTLE_H

#include <iostream>
#include <string>

#include "Computer.h"
#include "Person.h"
#include "Player.h"
#include "Pokemon.h"

class Battle {
 public:
  // Variables
  Person *person;
  Computer *computer;
  int computerPokemon;
  
  // Constructor
  Battle(Person *person, Computer *computer);
  
  // Functions
  void resetStats();
  int winState();

  // Moves
  int moveAttack(Pokemon *attacker, Pokemon *defender);
  int moveSpecial(Pokemon *attacker, Pokemon *defender);
  void moveDefend(Pokemon *attacker);

  // Battle
  void move(int moveChoice);
  void move();
};

#endif
