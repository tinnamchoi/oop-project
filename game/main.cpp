#include <iostream>
#include <string>

#include "Menu.h"
#include "Person.h"
#include "Player.h"

int main() {
  Person person;
  person.setName("John");
  std::cout << person.getName() << std::endl;

  // let player choose 3 pokemon out of 6
  Menu mainMenu("Choose a pokemon:", {"Bulbasaur", "Charmander", "Squirtle", "Pikachu", "Eevee", "Mewtwo"});
  mainMenu.printMenu();

  return 0;
}
