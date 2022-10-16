#include <iostream>
#include <limits>
#include <string>

#include "Battle.h"
#include "BattleMenu.h"
#include "Computer.h"
#include "Menu.h"
#include "Person.h"
#include "Player.h"
#include "Pokemon.h"

int main() {
  Person person;
  person.setName("John");

  int choice;
  for (int i = 0; i < 3; i++) {
    while (true) {
      Menu menu("Choose 3 Pokemon. Enter 0 to check information",
                {"Pokemon 1", "Pokemon 2", "Pokemon 3", "Pokemon 4",
                 "Pokemon 5", "Pokemon 6"});

      switch (choice = menu.getChoice()) {
        case 0:
          // print information about pokemon
          std::cout << "================================" << std::endl;
          std::cout << "Name       Attack" << std::endl;
          std::cout << "Pokemon 1  49" << std::endl;
          std::cout << "Pokemon 2  52" << std::endl;
          std::cout << "Pokemon 3  48" << std::endl;
          std::cout << "Pokemon 4  55" << std::endl;
          std::cout << "Pokemon 5  55" << std::endl;
          std::cout << "Pokemon 6  99" << std::endl;
          std::cout << "================================" << std::endl;
          break;
        case 1 ... 6:
          // add pokemon to person's pokemon array
          person.pokemon[i].newPokemon(choice - 1);
          goto chose;
      }
    }
  chose:;
  }

  std::cout << std::endl << person.name << "'s Pokemon:" << std::endl;
  // print all pokemon names and stats
  for (int i = 0; i < 3; i++) {
    std::cout << person.pokemon[i].name << " " << person.pokemon[i].level << " "
              << person.pokemon[i].health << " " << person.pokemon[i].attack
              << " " << person.pokemon[i].special << " "
              << person.pokemon[i].defense << std::endl;
  }

  srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    // Announce round number
    std::cout << std::endl << "Round " << i + 1 << std::endl;

    // Create computer
    Computer computer(i);
    std::cout << std::endl << "Computer " << i << "'s Pokemon:" << std::endl;
    for (int j = 0; j < 3; j++) {
      std::cout << computer.pokemon[j].name << " " << computer.pokemon[j].level
                << " " << computer.pokemon[j].health << " "
                << computer.pokemon[j].attack << " "
                << computer.pokemon[j].special << " "
                << computer.pokemon[j].defense << std::endl;
    }

    // Battle
    Battle battle(&person, &computer);

    // Let player choose pokemon before battle
    Menu menu("Choose a Pokemon to start",
              {person.pokemon[0].name, person.pokemon[1].name,
               person.pokemon[2].name});
    choice = menu.getChoice();

    while (battle.winState() == 0) {
      BattleMenu battleMenu;
      switch (battleMenu.getChoice()) {
        case 1:
          // attack
          std::cout << std::endl << "You attack!" << std::endl;
          break;
        case 2:
          // special attack
          std::cout << std::endl << "You use a special attack!" << std::endl;
          break;
        case 3:
          // defend
          std::cout << std::endl << "You defend!" << std::endl;
          break;
        case 4:
          // switch pokemon
          std::cout << std::endl << "You switch Pokemon!" << std::endl;
          break;
      }
    }
  }

  return 0;
}
