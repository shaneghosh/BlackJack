#ifndef GAME_H
#define GAME_H
#include <hand.h>
#include <card.h>
#include <deck.h>
#include <genericplayer.h>
#include <player.h>
#include <house.h>
#include <vector>
#include <iostream>

class game
{
private:
    //a vector which contains all the players
    std::vector<Player> playerVec;
    //parts of class 'gamedeck'
    Deck gameDeck;
    house House;
public:
    //function which lets user play blackjack
    void play();
};

#endif // GAME_H
