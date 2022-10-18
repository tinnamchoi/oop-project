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
  std::cout << "What's your name?" << std::endl;
  std::cin >> person.name;

  int choice;
  for (int i = 0; i < 3; i++) {
    while (true) {
      Menu menu("Choose 3 Pokemon. Enter 0 to check information",
                {"Pokemon 1", "Pokemon 2", "Pokemon 3", "Pokemon 4",
                 "Pokemon 5", "Pokemon 6"});

      switch (choice = menu.getChoice()) {
        case 0:
          // print information about pokemon
          std::cout << "============================================="
                    << std::endl;
          std::cout << "Name       Type Health Attack Special Defense"
                    << std::endl; 
          std::cout << "Pokemon 1  1    3      2      3       4" << std::endl;
          std::cout << "Pokemon 2  2    5      2      4       1" << std::endl;
          std::cout << "Pokemon 3  3    2      3      4       3" << std::endl;
          std::cout << "Pokemon 4  1    3      5      1       3" << std::endl;
          std::cout << "Pokemon 5  2    3      2      2       5" << std::endl;
          std::cout << "Pokemon 6  3    4      2      4       2" << std::endl;
          std::cout << "============================================="
                    << std::endl;
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
              << " " << person.pokemon[i].health << " "
              << person.pokemon[i].defense << " " << person.pokemon[i].attack
              << " " << person.pokemon[i].special << std::endl;
  }

  // srand(time(NULL));

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
    battle.moveSwap(menu.getChoice() - 1);

    while (battle.winState() == 0) {
      BattleMenu battleMenu;
      battle.move(battleMenu.getChoice());
      battle.move();
      // print health of all pokemon
      std::cout << std::endl << "Health:" << std::endl;
      for (int j = 0; j < 3; j++) {
        std::cout << person.pokemon[j].name << " " << person.pokemon[j].health
                  << std::endl;
      }
      for (int j = 0; j < 3; j++) {
        std::cout << computer.pokemon[j].name << " "
                  << computer.pokemon[j].health << std::endl;
      }
    }
  }

  return 0;
}
