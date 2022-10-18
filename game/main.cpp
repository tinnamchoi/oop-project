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

  // Create person
  Person person;
  std::cout << "What's your name?" << std::endl;
  std::cin >> person.name;

  // Get choices of the person
  int choice;
  Menu menu("Choose 3 Pokemon. Enter 0 to check information",
            {"Chilli-Dog", "Water-Bear", "Lettuce-Man", "HotShot", "Ice-Ice-Baby",
             "Leaf-Me-Alone"});
  for (int i = 0; i < 3; i++) {
    while (true) {
      switch (choice = menu.getChoice()) {
        case 0:
          // print information about pokemon
          std::cout << "================================================================\n";
          std::cout << "Name       Type Health Attack Special Defense"
                    << std::endl;
          std::cout << "Pokemon 1  1    3      2      3       4" << std::endl;
          std::cout << "Pokemon 2  2    5      2      4       1" << std::endl;
          std::cout << "Pokemon 3  3    2      3      4       3" << std::endl;
          std::cout << "Pokemon 4  1    3      5      1       3" << std::endl;
          std::cout << "Pokemon 5  2    3      2      2       5" << std::endl;
          std::cout << "Pokemon 6  3    4      2      4       2" << std::endl;
          std::cout << "================================================================";
          break;
        case 1 ... 6:
          // add pokemon to person's pokemon array
          person.pokemon[i].newPokemon(choice - 1);
          goto chose;
      }
    }
  chose:;
  }

  // Print person's pokemon
  std::cout << std::endl;
  std::cout << "================================================================";
  person.printPokemon();
  std::cout << "================================================================";

  // srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    // Announce round number
    std::cout << std::endl << "Round " << i + 1 << std::endl << std::endl;

    // Create computer
    Computer computer(i);
    computer.printPokemon();
    std::cout << "================================================================";
    for (int i = 0; i < 3; i++) {
      person.pokemon[i].health = person.pokemon[i].baseHealth;
      person.pokemon[i].defense = person.pokemon[i].baseDefense;

      computer.pokemon[i].health = computer.pokemon[i].baseHealth;
      computer.pokemon[i].defense = computer.pokemon[i].baseDefense;
    }

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
      
      std::cout << "================================================================";
      person.printPokemon();
      computer.printPokemon();
    }
    if (battle.winState() == 1) {
      i--;
    }
  }

  std::cout << "End of the Game!" << std::endl;

  return 0;
}
