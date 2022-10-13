#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>

class Pokemon {
    protected:
        int level;

    public:
        // Printers
        void printInfo();

        // Getters
        std::string getName();
        getType(); // not sure what data type to use
        int getHealth();
        int getLevel();
};

#endif