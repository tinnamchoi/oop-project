#include "Player.h"

Player::Player() {
    pokemon[0] = "Pokemon 1";
    pokemon[1] = "Pokemon 2";
    pokemon[2] = "Pokemon 3";
    pokemon[3] = "Pokemon 4";
    pokemon[4] = "Pokemon 5";
    pokemon[5] = "Pokemon 6";
    
    move = "a"; //currently define 'a' for attack
}

char Player::getMove() { //return the move made
    return move;
}

bool Player::win(Player * opponent) { //polymorphism
    char recent = move; //take the move
    char op = opponent->getMove();

    //create an if statement to determine scores based on move made
}
