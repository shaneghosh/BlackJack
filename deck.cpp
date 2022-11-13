#include "deck.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

//populates the deck
void Deck::populate()
{
    for (int i{1}; i <= 4; i++)
    {
        for(int j{1}; j <= 13; j++)
        {
            Card CurrCard;
            CurrCard.cardSuit = static_cast<Suit>(i);
            CurrCard.cardRank = static_cast<Rank>(j);
            deckOfCards.push_back(CurrCard);
        }
    }
}

//function which shuffles the deck
void Deck::shuffle()
{
    int swapOne, swapTwo;
    srand((unsigned) time(0));

    // Swaps random cards 50 times to generate random deck
    for (int i{0}; i < 50; i++)
          {
              swapOne = (int) ((rand() % 52) + 1);
              swapTwo = (int) ((rand() % 52) + 1);

              Card tempVar = deckOfCards[swapOne];
              deckOfCards[swapOne] = deckOfCards[swapTwo];
              deckOfCards[swapTwo] = tempVar;
          }
}

//function which deals to the hand from the deck
//Removes that card from the deck
void Deck::deal(Hand&hand)
{
    hand.add(deckOfCards.back());
    deckOfCards.pop_back();
}


//function which sees if the player is hitting
//if the player takes a hit the card is taken out of the deck of cards and put in the players hand
void Deck::additionalCards(GenericPlayer &gp)
{
    if(gp.isHitting() == true)
    {
        gp.userHand.push_back(deckOfCards[0]);
        deckOfCards.erase(deckOfCards.begin());
    }
}

