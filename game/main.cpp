#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "Pokemon.h"

using namespace std;

// turn-based pokemon game
int main() {
  // read from save.csv
  fstream save;
  save.open("save.csv", ios::in);
  vector<Pokemon> team;
  string line, name, type;
  for (int i = 0; i < 4; i++) {
    getline(save, line);
    std::stringstream s(line);
    getline(s >> std::ws, name, ',');
    getline(s >> std::ws, type, ',');
    Pokemon p = Pokemon(name, type);
    team.push_back(p);
  }
  save.close();
  
  // print out team
  for (int i = 0; i < 4; i++) {
    cout << team[i].getName() << " " << team[i].getType() << endl;
  }
  
  return 0;
}
