#include "card.h"

//function to see if the face of the card is up
bool Card::isFaceUp() const
{
    return isUp;
}

//function to get value of the card
int Card::getValue() const
{
    int cardVal{0};

    //assigns cardval with value according to rank
    switch (cardRank)
    {
        case Rank::Two:
            cardVal = 2;
        break;

        case Rank::Three:
            cardVal = 3;
        break;

        case Rank::Four:
            cardVal = 4;
        break;

        case Rank::Five:
            cardVal = 5;
        break;

        case Rank::Six:
            cardVal = 6;
        break;

        case Rank::Seven:
            cardVal = 7;
        break;

        case Rank::Eight:
            cardVal = 8;
        break;

        case Rank::Nine:
            cardVal = 9;
        break;

        case Rank::Ten:
            cardVal = 10;
        break;

        case Rank::Jack:
            cardVal = 11;
        break;

        case Rank::Queen:
            cardVal = 12;
        break;

        case Rank::King:
            cardVal = 13;
        break;

        case Rank::Ace:
            cardVal = 1;
        break;
    }

    return cardVal;
}

//function to flip card
void Card::flip()
{
    //if the face is down, it flip up
    if (isUp == false)
    {
        isUp = true;
    }
    //else it stays down
    else
    {
        isUp = false;
    }
}
