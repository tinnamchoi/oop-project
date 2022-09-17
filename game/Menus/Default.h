#ifndef DEFAULT_H
#define DEFAULT_H

#include <string>

#include "Menu.h"

// inherit class from Menu.h

class Default : public Menu {
 private:
  std::string title = "Default Menu";
  std::string options[4] = {"Attack", "Bag", "Pokemon", "Run"};
  int numOptions;
};

#endif
