#include <stdlib.h>
#include <time.h>

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

#include "Battle.h"
#include "BattleMenu.h"
#include "Computer.h"
#include "Menu.h"
#include "Person.h"
#include "Player.h"
#include "Pokemon.h"

int main() {
  srand(time(NULL));

  // Create a Person object
  Person person;

  // ask if the user wants to load "backup.txt"
  cout << "Do you want to load a save file? (y/n): ";
  char loadSave;
  cin >> loadSave;
  if (loadSave == 'y') {
    ifstream backup("backup.txt");
    string name;
    backup >> name;
    person.setName(name);
    int id;
    int level;
    for (int i = 0; i < 3; i++) {
      backup >> id;
      person.pokemon.push_back(Pokemon());
      person.pokemon[i].newPokemon(id);
      backup >> level;
      for (int j = level - 1; j > 0; j--) {
        person.pokemon[i].levelUp();
      }
    }
    backup.close();
    goto skipIntro;
  }

  {
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
            // Display information
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
  }

skipIntro:;

  // Print the person's pokemon
  person.printPokemon();

  // Main loop
  for (int i = 0; i < 10; i++) {
    // Create a Computer object
    Computer computer(i);
    cout << "You are at " << computer.name << endl;

    // Print the computer's pokemon
    computer.printPokemon();

    // Create a Battle object
    Battle battle(&person, &computer);

    // Choose an initial pokemon
    Menu menu("Choose a Pokemon",
              {person.pokemon[0].getName(), person.pokemon[1].getName(),
               person.pokemon[2].getName()});
    int choice = menu.getChoice();
    person.swapPokemon(choice - 1);

    // Battle loop
    int winState = battle.winState();
    while (winState == 0) {
      // Create a BattleMenu object
      BattleMenu battleMenu;
      battle.move(battleMenu.getChoice());
      battle.move();
      winState = battle.winState();
      if (person.pokemon[person.currentPokemon].health <= 0) {
        choice = menu.getChoice();
        person.swapPokemon(choice - 1);
      }
      person.printPokemon();
      computer.printPokemon();
    }
    battle.resetStats();
    
  }

  return 0;
}
