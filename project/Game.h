//
// Created by Milo Rue on 11/12/2018.
//

#ifndef TERM_PROJECT_220_GAME_H
#define TERM_PROJECT_220_GAME_H
#include "Player.h"
#include "string"
#include "iostream"
#include "stdlib.h"
#include "time.h"


class Game{
private:
    int solution;
    int p1Guess;
    int p2Guess;
    Player* player1;
    Player* player2;

public:
    Game(Player* player1, Player* player2); // assumes player1 is human vs player2 is AI
    void collectGuesses();

    void generateSolution();
    void play();
};

#endif //TERM_PROJECT_220_GAME_H
