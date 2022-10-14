#ifndef POKEMON2_H
#define POKEMON2_H
#include <iostream>

class Pokemon2 {
    protected:
        std::string name;
        type; // not sure what data type to use
        int level;
        int attack;
        int specialAttack;
        int defense;
        movesLearnt; // not sure what data type to use

    public:

        // Functions
        void levelUp();
        void addMove();
        void removeMove();
};

#endif