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

  // Intro
  std::cout << "            ~~~ Welcome to the International World Pokemon Championship Tournament!! ~~~ \nYou will face off against a fierce array of deadly Pokemon, you must use your own collection of said Pokemon\nto battle it out and defeat all enemies! If you can manage this, you will be awarded the legendary Pokeball!!\n(not for use in Australia, North America, South America, Asia, Europe, Africa, or Antartica.) \n                               ~~~ You may now...BEGIN ~~~ \n";

  // Create person
  Person person;
  std::cout << "Please enter your name: ";
  std::cin >> person.name;

  // Get choices of the person
  int choice;
  Menu menu("Choose 3 Pokemon. Enter 0 to check information",
            {"Chilli-Dog", "Water-Bear", "Lettuce-Man", "Hot-Shot", "Ice-Ice-Baby",
             "Leaf-Me-Alone"});
  for (int i = 0; i < 3; i++) {
    while (true) {
      switch (choice = menu.getChoice()) {
        case 0:
          // print information about pokemon
          std::cout << "================================================================\n";
          std::cout << "Name:           Type:     Health: Attack: Special: Defense:"
                    << std::endl;
          std::cout << "Chilli-Dog      Fire      20      4       5        2" << std::endl;
          std::cout << "Water-Bear      Water     18      4       5        3" << std::endl;
          std::cout << "Lettuce-Man     Grass     16      5       6        2" << std::endl;
          std::cout << "Hot-Shot        Fire      20      2       4        4" << std::endl;
          std::cout << "Ice-Ice-Baby    Water     20      2       5        3" << std::endl;
          std::cout << "Leaf-Me-Alone   Grass     24      2       4        3" << std::endl;
          std::cout << "================================================================\n";
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
  std::cout << "================================================================\n";
  std::cout << person.name << "'s Pokemon:\n\n";
  person.printPokemon();
  std::cout << "================================================================\n\n";

  // srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    // Announce round number
    std::cout << "Round " << i + 1 << std::endl << std::endl;

    // Create computer
    Computer computer(i);
    std::cout << "Enemy's Pokemon:\n\n";
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
      
      std::cout << "================================================================\n";
      person.printPokemon();
      computer.printPokemon();
    }
    if (battle.winState() == 1) {
      i--;
    }
  }

  // Lose message
  std::cout << "Unfortunately, all of your Pokemon have perished in battle.\nYOU LOSE.\n";
  // Win message
  std::cout << "CONGRATULATIONS!!! You have officially been crowned the winner!!! Well done!\nYou will receive your Legendary Pokemon in the mail within the next [INSERT TRANSIT TIME HERE 01010111001] business days! Do enjoy!\n" << std::endl;

  return 0;
}
