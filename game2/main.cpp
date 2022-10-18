#include <iostream>
#include <string>

using namespace std;

#include "Menu.h"
#include "Person.h"
#include "Player.h"
#include "Pokemon.h"

int main() {
  // Create a Person object
  Person person;
  cout << "Welcome, " << person.name << endl;

  // Get choices of the person
  int choice;
  Menu menu("Choose 3 Pokemon. Enter 0 to check information",
            {"Chilli-Dog", "Water-Bear", "Lettuce-Man", "HotShot",
             "Ice-Ice-Baby", "Leaf-Me-Alone"});
  for (int i = 0; i < 3; i++) {
    while (true) {
      choice = menu.getChoice();
      switch (choice) {
        case 0: {
          Player player;
          player.name = "Professor Oak";
          player.pokemon.push_back(Pokemon());
          player.pokemon[0].newPokemon(0);
          player.pokemon.push_back(Pokemon());
          player.pokemon[1].newPokemon(1);
          player.pokemon.push_back(Pokemon());
          player.pokemon[2].newPokemon(2);
          player.pokemon.push_back(Pokemon());
          player.pokemon[3].newPokemon(3);
          player.pokemon.push_back(Pokemon());
          player.pokemon[4].newPokemon(4);
          player.pokemon.push_back(Pokemon());
          player.pokemon[5].newPokemon(5);
          player.printPokemon();
          break;
        }
        case 1 ... 6:
          // add pokemon to person's pokemon array
          person.pokemon.push_back(Pokemon());
          person.pokemon[i].newPokemon(choice - 1);
          goto chose;
      }
    }
  chose:;
  }
  
  // Print the person's pokemon
  person.printPokemon();
  
  // Main loop
  for (int i = 0; i < 10; i++)

  return 0;
}
