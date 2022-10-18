#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Menu {
 public:
  // Variables
  string title;
  vector<string> options;

  // Constructor
  Menu(string title, vector<string> options);

  // Print the menu
  bool printMenu();
  
  // Get the user's choice
  int getChoice();
};

#endif
