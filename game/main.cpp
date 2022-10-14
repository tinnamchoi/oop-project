#include <iostream>
#include <string>

#include "Menu.h"
#include "Person.h"
#include "Player.h"

int main() {
  Person person;
  person.setName("John");
  std::cout << person.getName() << std::endl;

  for (int i = 0; i < 3; i++) {
    while (true) {
      Menu menu("Choose 3 Pokemon. Enter 0 to check information",
                {"Bulbasaur", "Charmander", "Squirtle", "Pikachu", "Eevee",
                 "Mewtwo"});
      menu.printMenu();
      int choice;
      std::cin >> choice;
      switch (choice) {
        case 0:
          // print information about pokemon
          break;
        case 1 ... 6:
          // add pokemon to person's pokemon array
          person.pokemon[i] = menu.getOptions()[choice - 1];
          goto chose;
        default:
          // invalid choice
          std::cout << "Invalid choice" << std::endl;
          break;
      }
    }
  chose:;
  }

  for (int i = 0; i < 3; i++) {
    std::cout << person.pokemon[i] << std::endl;
  }

  return 0;
}
