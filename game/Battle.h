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
  Person *person;
  Computer *computer;
  int computerPokemon;
  Battle(Person *person, Computer *computer);
  int winState();

  void moveAttack(Pokemon *attacker, Pokemon *defender);
  void moveSpecial(Pokemon *attacker, Pokemon *defender);
  void moveDefend(Pokemon *attacker);
  void moveSwap(int pokemonChoice);
  
  void move(int moveChoice);
  void move();
};

#endif