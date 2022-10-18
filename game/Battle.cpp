#include "Battle.h"

#include "Menu.h"

Battle::Battle(Person *person, Computer *computer) {
  this->person = person;
  this->computer = computer;
}
int Battle::winState() {
  if (person->pokemon[0].health <= 0 && person->pokemon[1].health <= 0 &&
      person->pokemon[2].health <= 0) {
    std::cout << "You lose!" << std::endl;
    return 1;
  }
  if (computer->pokemon[0].health <= 0 && computer->pokemon[1].health <= 0 &&
      computer->pokemon[2].health <= 0) {
    std::cout << "You win!" << std::endl;
    return 2;
  }
  return 0;
}

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
  if (damage <= 0) {
    damage = 1;
  }
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

void Battle::move(int moveChoice) {
  switch (moveChoice) {
    case 1:
      // attack
      moveAttack(&person->pokemon[person->currentPokemon],
                 &computer->pokemon[computer->currentPokemon]);
      break;
    case 2:
      // special attack
      moveSpecial(&person->pokemon[person->currentPokemon],
                  &computer->pokemon[computer->currentPokemon]);
      break;
    case 3:
      // defend
      moveDefend(&person->pokemon[person->currentPokemon]);
      break;
    case 4:
      // swap
      Menu menu("choose another pokemon",
                {person->pokemon[0].getName(), person->pokemon[1].getName(),
                 person->pokemon[2].getName()});
      // if the pokemon is dead, don't let them choose it
      int choice = menu.getChoice() - 1;
      if (person->pokemon[choice].health <= 0) {
        std::cout << "That pokemon is dead!" << std::endl;
        move(4);
      } else {
        moveSwap(choice);
      }
      break;
  }
  // if the computer's pokemon is dead, swap to the next one
  if (computer->pokemon[computer->currentPokemon].health <= 0) {
    computer->currentPokemon++;
  }
}
void Battle::move() {
  int moveChoice = rand() % 3 + 1;
  switch (moveChoice) {
    case 1:
      // attack
      moveAttack(&computer->pokemon[computer->currentPokemon],
                 &person->pokemon[person->currentPokemon]);
      break;
    case 2:
      // special attack
      moveSpecial(&computer->pokemon[computer->currentPokemon],
                  &person->pokemon[person->currentPokemon]);
      break;
    case 3:
      // defend
      moveDefend(&computer->pokemon[computer->currentPokemon]);
      break;
  }
  // if the person's pokemon is dead, swap to the next one
  if (person->pokemon[person->currentPokemon].health <= 0) {
    move(4);
  }
}

