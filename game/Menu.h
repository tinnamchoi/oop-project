#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
#include <vector>

class Menu {
 protected:
  std::string title;
  std::vector<std::string> options;

 public:
  Menu();
  Menu(std::string title, std::vector<std::string> options);
  
  void setTitle();
  void setOptions();
  
  void printMenu();
};

#endif