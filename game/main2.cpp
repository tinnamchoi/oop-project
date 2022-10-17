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

int main(void) {
  // Create person
  Person person;
  // Get name
  std::cout << "What's your name?" << std::endl;
  std::cin >> person.name;

  // Get 3 choices of pokemon from the person
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
}