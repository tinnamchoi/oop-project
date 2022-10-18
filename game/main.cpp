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
  Menu menu("Choose 3 Pokemon. Enter 0 to check information",
            {"Pokemon 1", "Pokemon 2", "Pokemon 3", "Pokemon 4", "Pokemon 5",
             "Pokemon 6"});
  for (int i = 0; i < 3; i++) {
    while (true) {
      switch (choice = menu.getChoice()) {
        case 0:
          // print information about pokemon
          menu.printDivider();
          std::cout << "Name       Type Health Attack Special Defense"
                    << std::endl;
          std::cout << "Pokemon 1  1    3      2      3       4" << std::endl;
          std::cout << "Pokemon 2  2    5      2      4       1" << std::endl;
          std::cout << "Pokemon 3  3    2      3      4       3" << std::endl;
          std::cout << "Pokemon 4  1    3      5      1       3" << std::endl;
          std::cout << "Pokemon 5  2    3      2      2       5" << std::endl;
          std::cout << "Pokemon 6  3    4      2      4       2" << std::endl;
          menu.printDivider();
          break;
        case 1 ... 6:
          // add pokemon to person's pokemon array
          person.pokemon[i].newPokemon(choice - 1);
          goto chose;
      }
    }
  chose:;
  }

  std::cout << std::endl;
  menu.printDivider();
  person.printPokemon();
  menu.printDivider();

  // srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    // Announce round number
    std::cout << std::endl << "Round " << i + 1 << std::endl << std::endl;

    // Create computer
    Computer computer(i);
    computer.printPokemon();
    menu.printDivider();

    // Battle
    Battle battle(&person, &computer);

    // Let player choose pokemon before battle
    Menu menu("Choose a Pokemon to start",
              {person.pokemon[0].getName(), person.pokemon[1].getName(),
               person.pokemon[2].getName()});
    battle.moveSwap(menu.getChoice() - 1);

    while (battle.winState() == 0) {
      BattleMenu battleMenu;
      battle.move(battleMenu.getChoice());
      battle.move();
      // print health of all pokemon
      std::cout << std::endl << "Health:" << std::endl;
      for (int j = 0; j < 3; j++) {
        std::cout << person.pokemon[j].getName() << " "
                  << person.pokemon[j].health << std::endl;
      }
      for (int j = 0; j < 3; j++) {
        std::cout << computer.pokemon[j].getName() << " "
                  << computer.pokemon[j].health << std::endl;
      }
    }
  }

  return 0;
}
