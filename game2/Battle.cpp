#include "Battle.h"

using namespace std;

Battle::Battle(Person *person, Computer *computer) {
  this->person = person;
  this->computer = computer;
}

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
int Battle::moveAttack(Pokemon *attacker, Pokemon *defender) {
  int damage = attacker->attack - defender->defense;
  if (damage <= 0) {
    damage = 1;
  }
  defender->health -= damage;
  return damage;
}
int Battle::moveSpecial(Pokemon *attacker, Pokemon *defender) {
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
  return damage;
}
void Battle::moveDefend(Pokemon *attacker) { attacker->defense += 1; }

// Battle
void Battle::move(int moveChoice) {
  // Person's move
  switch (moveChoice) {
    case 1:
      cout << person->name << "'s "
           << person->pokemon[person->currentPokemon].getName() << " attacked "
           << computer->name << "'s "
           << computer->pokemon[computer->currentPokemon].getName() << " for "
           << moveAttack(&person->pokemon[person->currentPokemon],
                         &computer->pokemon[computer->currentPokemon])
           << " damage!" << endl;
      break;
    case 2:
      cout << person->name << "'s "
           << person->pokemon[person->currentPokemon].getName()
           << " used a special attack on " << computer->name << "'s "
           << computer->pokemon[computer->currentPokemon].getName() << " for "
           << moveSpecial(&person->pokemon[person->currentPokemon],
                          &computer->pokemon[computer->currentPokemon])
           << " damage!" << endl;
      break;
    case 3:
      moveDefend(&person->pokemon[person->currentPokemon]);
      cout << person->name << "'s "
           << person->pokemon[person->currentPokemon].getName() << " defended!"
           << endl;
      break;
    case 4:
      int choice;
      person->printPokemon();
      cout << "Which pokemon would you like to swap to?" << endl << "Number: ";
      cin >> choice;
      while (person->swapPokemon(choice - 1) == false) {
        cout << "Choose another pokemon: ";
        cin >> choice;
      }
      break;
  }
  if (computer->pokemon[computer->currentPokemon].health <= 0) {
    person->pokemon[person->currentPokemon].levelUp();
    computer->currentPokemon += 1;
    cout << computer->name << "'s "
         << computer->pokemon[computer->currentPokemon].getName()
         << " is now in battle!" << endl;
  }
}
void Battle::move() {
  // Computer's move
  int moveChoice = rand() % 3 + 1;
  switch (moveChoice) {
    case 1:
      cout << computer->name << "'s "
           << computer->pokemon[computer->currentPokemon].getName() << " attacked "
           << person->name << "'s "
           << person->pokemon[person->currentPokemon].getName() << " for "
           << moveAttack(&computer->pokemon[computer->currentPokemon],
                         &person->pokemon[person->currentPokemon])
           << " damage!" << endl;
      break;
    case 2:
      cout << computer->name << "'s "
           << computer->pokemon[computer->currentPokemon].getName()
           << " used a special attack on " << person->name << "'s "
           << person->pokemon[person->currentPokemon].getName() << " for "
           << moveSpecial(&computer->pokemon[computer->currentPokemon],
                          &person->pokemon[person->currentPokemon])
           << " damage!" << endl;
      break;
    case 3:
      moveDefend(&computer->pokemon[computer->currentPokemon]);
      cout << computer->name << "'s "
           << computer->pokemon[computer->currentPokemon].getName() << " defended!"
           << endl;
      break;
  }
}
