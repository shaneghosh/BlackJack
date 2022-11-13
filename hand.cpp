#include "hand.h"

//function to add a card to hand
void Hand::add(Card card)
{
    userHand.push_back(card);
}

//function to calculate total vaue of hand
int Hand::getTotal() const
{
    int totalVal{0};
    bool noAce {true};

    //checks for ace in hand
    for (int i{0}; i < userHand.size(); i++)
    {
        if (userHand.at(i).cardRank == Rank::Ace)
            noAce = false;
    }

    //calculates for all cards with the value of ace being one
    for(int i{0}; i < userHand.size(); i++)
    {
        totalVal+= userHand[i].getValue();
    }
    //adds 10 if the ace in the deck meets the requirements to be 11
    if (noAce == false && totalVal <= 11)
    {
        totalVal += 10;
    }
    return totalVal;
}

//function to print the hand
void Hand::printHand()
{
    if (userHand.at(0).isFaceUp() == true)
    {
        for(int i{0}; i < userHand.size(); i++)
        {
            switch(userHand[i].cardRank)
            {
              case Rank::Ace:
                std::cout << "A";
              break;
              case Rank::Two:
                std::cout << "2";
              break;
              case Rank::Three:
                std::cout << "3";
              break;
              case Rank::Four:
                std::cout << "4";
              break;
              case Rank::Five:
                std::cout << "5";
              break;
              case Rank::Six:
                std::cout << "6";
              break;
              case Rank::Seven:
                std::cout << "7";
              break;
              case Rank::Eight:
                std::cout << "8";
              break;
              case Rank::Nine:
                std::cout << "9";
              break;
              case Rank::Ten:
                std::cout << "10";
              break;
              case Rank::Jack:
                std::cout << "J";
              break;
              case Rank::Queen:
                std::cout << "Q";
              break;
              case Rank::King:
                std::cout << "K";
              break;
            }

            switch(userHand[i].cardSuit)
            {
              case Suit::Clubs:
                std::cout << "c    ";
              break;
              case Suit::Diamonds:
                std::cout << "d    ";
              break;
              case Suit::Hearts:
                std::cout << "h    ";
              break;
              case Suit::Spades:
                std::cout << "s    ";
              break;
            }
        }
    }
    else
    {
        for(int i{0}; i < userHand.size(); i++)
        {
            if (i == 0)
            {
                std::cout << "XX    ";
            }
            else
            {
                switch(userHand[i].cardRank)
                {
                  case Rank::Ace:
                    std::cout << "A";
                  break;
                  case Rank::Two:
                    std::cout << "2";
                  break;
                  case Rank::Three:
                    std::cout << "3";
                  break;
                  case Rank::Four:
                    std::cout << "4";
                  break;
                  case Rank::Five:
                    std::cout << "5";
                  break;
                  case Rank::Six:
                    std::cout << "6";
                  break;
                  case Rank::Seven:
                    std::cout << "7";
                  break;
                  case Rank::Eight:
                    std::cout << "8";
                  break;
                  case Rank::Nine:
                    std::cout << "9";
                  break;
                  case Rank::Ten:
                    std::cout << "10";
                  break;
                  case Rank::Jack:
                    std::cout << "J";
                  break;
                  case Rank::Queen:
                    std::cout << "Q";
                  break;
                  case Rank::King:
                    std::cout << "K";
                  break;
                }

                switch(userHand[i].cardSuit)
                {
                  case Suit::Clubs:
                    std::cout << "c    ";
                  break;
                  case Suit::Diamonds:
                    std::cout << "d    ";
                  break;
                  case Suit::Hearts:
                    std::cout << "h    ";
                  break;
                  case Suit::Spades:
                    std::cout << "s    ";
                  break;
                }
            }
        }
    }
}

void Hand::clear()
{
    for (int i{0}; i < userHand.size(); i++)
    {
        userHand.erase(userHand.begin() + i);
    }

}
