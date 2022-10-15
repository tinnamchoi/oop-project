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

  void setTitle();
  void setOptions();

  std::vector<std::string> getOptions();

  void printMenu();
};

#endif