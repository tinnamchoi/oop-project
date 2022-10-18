#include "Battle.h"

Battle::Battle(Person *person, Computer *computer) {}

// Functions
void Battle::resetStats() {
  for (int i = 0; i < 3; i++) {
    person->pokemon[i].health = person->pokemon[i].baseHealth;
    person->pokemon[i].defense = person->pokemon[i].baseDefense;
  }
  for (int i = 0; i < 3; i++) {
    computer->pokemon[i].health = computer->pokemon[i].baseHealth;
    computer->pokemon[i].defense = computer->pokemon[i].baseDefense;
  }
}
int Battle::winState() {
  if (person->pokemon[0].health <= 0 && person->pokemon[1].health <= 0 &&
      person->pokemon[2].health <= 0) {
    std::cout << "You lose!" << std::endl;
    resetStats();
    return 1;
  }
  if (computer->pokemon[0].health <= 0 && computer->pokemon[1].health <= 0 &&
      computer->pokemon[2].health <= 0) {
    std::cout << "You win!" << std::endl;
    resetStats();
    return 2;
  }
  return 0;
}

// Moves
void Battle::moveAttack(Pokemon *attacker, Pokemon *defender) {
  int damage = attacker->attack - defender->defense;
  if (damage <= 0) {
    damage = 1;
  }
  defender->health -= damage;
  std::cout << attacker->getName() << " attacks " << defender->getName() << " for "
            << damage << " damage!" << std::endl;
}
void Battle::moveSpecial(Pokemon *attacker, Pokemon *defender) {
  int damage = attacker->special - defender->defense;
  // multiply or divide by 2 depending on type advantage which is represented as
  // an int if the 2 types are same
  if (attacker->type == defender->type) {
  } else if ((attacker->type == 1 && defender->type == 2) ||
             (attacker->type == 2 && defender->type == 3) ||
             (attacker->type == 3 && defender->type == 1)) {
    damage /= 2;
  } else if ((attacker->type == 1 && defender->type == 3) ||
             (attacker->type == 2 && defender->type == 1) ||
             (attacker->type == 3 && defender->type == 2)) {
    damage *= 2;
  }
  if (damage <= 0) {
    damage = 1;
  }
  defender->health -= damage;
  std::cout << attacker->getName() << " uses a special attack on " << defender->getName()
            << " for " << damage << " damage!" << std::endl;
}
void Battle::moveDefend(Pokemon *attacker) {
  attacker->defense += 1;
  std::cout << attacker->getName() << " defends!" << std::endl;
}
void Battle::moveSwap(int pokemonChoice) {
  person->currentPokemon = pokemonChoice;
  std::cout << person->pokemon[person->currentPokemon].getName()
            << " is now in battle!" << std::endl;
}

// Battle
