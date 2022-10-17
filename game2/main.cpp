#include <iostream>
#include <string>

using namespace std;

#include "Pokemon.h"
#include "Person.h"
#include "Menu.h"

int main() {
  // Create a Person object
  Person person;
  cout << "Welcome, " << person.name << endl;

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
  
  return 0;
}
