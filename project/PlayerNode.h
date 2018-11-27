//
// Created by Milo Rue on 11/12/2018.
//

#ifndef TERM_PROJECT_220_GAME_H
#define TERM_PROJECT_220_GAME_H
#include "string"
#include "iostream"
#include "stdlib.h"
#include "time.h"
#include "Player.h"


class PlayerNode{
private:
    //importFile(filename);
    Player* player;
    PlayerNode* next;
    int forceRating;
public:
    PlayerNode(Player* player);
    PlayerNode(const PlayerNode& nodeToCopy);
    Player* getPlayer();
    PlayerNode* getNext();
    void setPlayer(Player* newPlayer);
    void setNext(PlayerNode* newNext);



};

#endif //TERM_PROJECT_220_GAME_H
