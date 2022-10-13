#ifndef PERSON_H
#define PERSON_H
#include <iostream>

class Person {
    protected:
        std::string name;
        move; // not sure what data type to use
        int pokemonDefeated;
        int xp; // aka skill points/experience points

    public:
        // Setters
        void setName();

        // Getters
        getMove(); // not sure what data type to use

        // Functions
        bool winAction();
        bool winPokemon();
        bool winBattle();
};

#endif