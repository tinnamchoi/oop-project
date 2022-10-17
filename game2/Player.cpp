#include "Player.h"

using namespace std;

void Player::printPokemon() {
  cout << "=======================================================================" << endl;
  cout << name << "'s Pokemon: " << endl;
  
  // Print all pokemon stats as a markdown table with consistent column widths
  cout << "| Name          | Type  | Level | Health | Attack | Special | Defense |" << endl;
  cout << "| ------------- | ----- | ----- | ------ | ------ | ------- | ------- |" << endl;
  for (int i = 0; i < (int)pokemon.size(); i++) {
    cout << "| " << pokemon[i].getName() << " | " << pokemon[i].getType();
    cout << " | " << pokemon[i].level;
    // calculate the number of spaces needed to fill the table
    for (int j = 0; j < (int)(6 - to_string(pokemon[i].level).length()); j++) {
      cout << " ";
    }
    cout << "| " << pokemon[i].health;
    for (int j = 0; j < (int)(7 - to_string(pokemon[i].health).length()); j++) {
      cout << " ";
    }
    cout << "| " << pokemon[i].attack;
    for (int j = 0; j < (int)(7 - to_string(pokemon[i].attack).length()); j++) {
      cout << " ";
    }
    cout << "| " << pokemon[i].special;
    for (int j = 0; j < (int)(8 - to_string(pokemon[i].special).length()); j++) {
      cout << " ";
    }
    cout << "| " << pokemon[i].defense;
    for (int j = 0; j < (int)(8 - to_string(pokemon[i].defense).length()); j++) {
      cout << " ";
    }
    cout << "|" << endl;
  }

  cout << "=======================================================================" << endl;

}
