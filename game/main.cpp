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

  // Create a person object
  Person person;

  // Ask if want to load backup file
  cout << "Do you want to load a backup file? (y/n)";
  char load;
  cin >> load;
  int landmark = 0;
  if (load == 'y') {
    // Load backup file
    cout << "Loading backup file..." << endl;
    ifstream backup("backup.txt");
    string name;
    backup >> name;
    cout << name << endl;
    person.setName(name);
    int id;
    int level;
    for (int i = 0; i < 3; i++) {
      backup >> id;
      cout << id << endl;
      person.pokemon.push_back(Pokemon());
      person.pokemon[i].newPokemon(id);
      backup >> level;
      cout << level << endl;
      for (int j = level - 1; j > 0; j--) {
        person.pokemon[i].levelUp();
      }
    }
    backup >> landmark;
    cout << landmark << endl;
    backup.close();
  } else {
    // Create a new player
    Person person;
    
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
            for (int i = 0; i < 6; i++) {
              player.pokemon.push_back(Pokemon());
              player.pokemon[i].newPokemon(i);
            }
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
    menu.~Menu();
  }

  cout << "Welcome, " << person.name << endl;

  // Print the person's pokemon
  person.printPokemon();

  // Main loop
  for (int i = landmark; i < 10; i++) {
    // Create a Computer object
    Computer computer(i);
    cout << "You are at " << computer.name << endl;

    // Print the computer's pokemon
    computer.printPokemon();

    // Create a Battle object
    Battle battle(&person, &computer);

    // Choose an initial pokemon
    Menu menu("Choose a Pokemon to start the battle",
              {person.pokemon[0].getName(), person.pokemon[1].getName(),
               person.pokemon[2].getName()});
    int choice = menu.getChoice();
    menu.~Menu();
    person.swapPokemon(choice - 1);

    // Battle loop
    int winState = battle.winState();
    while (winState == 0) {
      // Create a BattleMenu object
      BattleMenu battleMenu;
      battle.move(battleMenu.getChoice());
      battleMenu.~BattleMenu();
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
