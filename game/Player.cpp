#include "Player.h"

Player::Player() {
    pokemon[0] = "Pokemon 1";
    pokemon[1] = "Pokemon 2";
    pokemon[2] = "Pokemon 3";
    pokemon[3] = "Pokemon 4";
    pokemon[4] = "Pokemon 5";
    pokemon[5] = "Pokemon 6";

    recentMove = 'a'; //currently define 'a' for attack
}

char Player::getMove() { //return the move made
    return recentMove;
}

bool Player::win(Player * opponent) { //polymorphism
    char recent = recemtMove; //take the move
    char op = opponent->getMove();

    //create an if statement to determine scores based on move made - return true if player wins, false if comp wins
}
