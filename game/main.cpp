#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "Menu.h"
#include "Move.h"
#include "Pokemon.h"
#include "Menus/Default.h"

using namespace std;

// turn-based pokemon game
int main() {
  // read from save.csv
  fstream save;
  save.open("save.csv", ios::in);
  vector<Pokemon> team;
  string line, name, type, HP, attack, defense;
  Move moves[4];
  for (int i = 0; i < 6; i++) {
    getline(save, line);
    std::stringstream s(line);
    getline(s >> std::ws, name, ',');
    getline(s >> std::ws, type, ',');
    getline(s >> std::ws, HP, ',');
    getline(s >> std::ws, attack, ',');
    getline(s >> std::ws, defense, ',');
    getline(s >> std::ws, moves[0], ',');
    getline(s >> std::ws, moves[1], ',');
    getline(s >> std::ws, moves[2], ',');
    getline(s >> std::ws, moves[3], ',');
    Pokemon p = Pokemon(name, type, stoi(HP), stoi(attack), stoi(defense), moves);
    team.push_back(p);
  }
  save.close();

  // print out team
  for (int i = 0; i < 4; i++) {
    cout << "Name, type, HP, attack, defense, moves 1-4" << endl
         << team[i].getName() << ", " << team[i].getType() << endl;
  }

  // game loop
  while (true) {
    // print menu using menu class

    // play again?
    char playAgain;
    cout << "Play again? (y/n)" << endl;
    cin >> playAgain;
    if (playAgain == 'n') {
      break;
    }
  }

  return 0;
}
