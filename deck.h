#ifndef DECK_H
#define DECK_H
#include <card.h>
#include <hand.h>
#include <player.h>
#include <genericplayer.h>
#include <vector>
#include <iostream>

class Deck:public Hand
{
public:
    //a vector that will contain all the cards
    std::vector <Card> deckOfCards;
    //functions in class deck which make it work
    void populate();
    void shuffle();
    void deal(Hand&hand);
    void additionalCards(GenericPlayer &gp);

};

#endif // DECK_H
