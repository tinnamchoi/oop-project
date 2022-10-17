#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
#include <vector>

class Menu {
 public:
  std::string title;
  std::vector<std::string> options;
  
  Menu();
  Menu(std::string title, std::vector<std::string> options);

  bool printMenu();
  int getChoice();
};

#endif
