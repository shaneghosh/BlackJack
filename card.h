#ifndef CARD_H
#define CARD_H
#include <iostream>

//a enum called 'rank' to assign rank and an enum called 'suit' to assign suit
enum class Rank{Ace = 1, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King};
enum class Suit{Clubs = 1, Spades, Hearts, Diamonds};


class Card
{
//Parts of the class 'card', stores the rank and and suit of card to make its identity
public:
    //parts of class 'card'
    Rank cardRank;
    Suit cardSuit;
    //functions
    bool isUp {true};
    bool isFaceUp() const;
    int getValue() const;
    void flip();
};

#endif // CARD_H
