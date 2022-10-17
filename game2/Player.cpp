#include "Player.h"

using namespace std;

void Player::printPokemon() {
  cout << "=======================================================================" << endl;
  cout << name << "'s Pokemon: " << endl;
  
  // Print all pokemon stats as a markdown table with consistent column widths
  cout << "| Name          | Type  | Level | Health | Attack | Special | Defense |" << endl;
  cout << "| ------------- | ----- | ----- | ------ | ------ | ------- | ------- |" << endl;
  for (int i = 0; i < 3; i++) {
    cout << "| " << pokemon[i].getName() << " | " << pokemon[i].getType()
         << " | " << pokemon[i].level << "     | " << pokemon[i].health
         << "     | " << pokemon[i].attack << "      | " << pokemon[i].special
         << "       | " << pokemon[i].defense << "       |" << endl;
  }

  cout << "=======================================================================" << endl;

}
