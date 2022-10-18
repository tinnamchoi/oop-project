#include "Menu.h"

#include <limits>

using namespace std;

// Constructor
Menu::Menu(string title, vector<string> options) {
  this->title = title;
  // put the vector of options into this->options
  this->size = options.size();
  // Allocate enough memory to hold the strings
  this->options = new string[this->size];
  for (int i = 0; i < this->size; i++) {
    // Copy the string into the array
    this->options[i] = options[i];
  }
}

// Print the menu
bool Menu::printMenu() {
  // Print divider
  cout << "=================================================" << endl;
  // Print the title
  cout << title << endl;
  // Print the options in 2 columns with | surrounding each option and number
  // before each option
  for (int i = 0; i < size; i++) {
    if (i % 2 == 0) {
      cout << "| " << i + 1 << ". " << options[i];
      // calculate the number of spaces needed to fill the table
      for (int j = 0;
           j < (int)(20 - to_string(i + 1).length() - options[i].length());
           j++) {
        cout << " ";
      }
      cout << "| ";
    } else {
      cout << i + 1 << ". " << options[i];
      for (int j = 0;
           j < (int)(20 - to_string(i + 1).length() - options[i].length());
           j++) {
        cout << " ";
      }

      cout << "|" << endl;
    }
  }
  // if there are an odd number of options, print a blank line
  if (size % 2 == 1) {
    cout << "                      | " << endl;
  }
  cout << "=================================================" << endl;
  cout << "Enter your choice: ";
  return true;
}

// Get the user's choice
int Menu::getChoice() {
  int choice;
  while ((this->printMenu() && !(cin >> choice)) || choice < 0 ||
         choice > size) {
    cin.clear();  // clear bad input flag
    cin.ignore(numeric_limits<streamsize>::max(),
               '\n');  // discard input
    cout << "Invalid input; please re-enter.\n";
  }
  return choice;
}
