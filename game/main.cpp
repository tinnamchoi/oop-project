#include <iostream>
#include <limits>
#include <string>

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
                {"Bulbasaur", "Charmander", "Squirtle", "Pikachu", "Eevee",
                 "Mewtwo"});
                 
      // prevent infinite loop https://stackoverflow.com/a/10349885
      while (menu.printMenu() && !(std::cin >> choice)) {
        std::cin.clear();  // clear bad input flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                        '\n');  // discard input
        std::cout << "Invalid input; please re-enter.\n";
      }
      
      switch (choice) {
        case 0:
          // print information about pokemon
          std::cout << "================================" << std::endl;
          std::cout << "Name       Attack" << std::endl;
          std::cout << "Bulbasaur  49" << std::endl;
          std::cout << "Charmander 52" << std::endl;
          std::cout << "Squirtle   48" << std::endl;
          std::cout << "Pikachu    55" << std::endl;
          std::cout << "Eevee      55" << std::endl;
          std::cout << "Mewtwo     99" << std::endl;
          std::cout << "================================" << std::endl;
          break;
        case 1 ... 6:
          // add pokemon to person's pokemon array
          person.pokemon[i].newPokemon(menu.getOptions()[choice - 1]);
          goto chose;
      }
    }
  chose:;
  }

  std::cout << std::endl << person.name << "'s Pokemon:" << std::endl;
  // print all pokemon names and attacks
  for (int i = 0; i < 3; i++) {
    std::cout << person.pokemon[i].name << " " << person.pokemon[i].attack
              << std::endl;
  }

  return 0;
}
