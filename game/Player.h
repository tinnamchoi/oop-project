#ifndef PLAYER_H
#define PLAYER_H

class Player {
    protected:
        pokemonOwned;

    public:
        // Functions
        void addPokemon();
        void removePokemon();
        move();
};

#endif

// Not sure what data types to use for pokemonOwned and move()