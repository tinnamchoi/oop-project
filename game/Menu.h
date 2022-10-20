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
  string* options;  // Vector of string options for the menu
  int size;         // Number of options in menu

  // Constructor
  Menu(string title, vector<string> options);

  // Print the menu
  bool printMenu();

  // Get the user's choice
  int getChoice();

  // Destructor
  ~Menu() { delete[] options; }
};

#endif
