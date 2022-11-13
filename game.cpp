#include "game.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

//function to play blackjack
void game::play()
{
    //hold data about number of players and names of players
    int numPlayers;
    string playerName;
    bool CorrectEntry{true};

    //Welcome statement
    cout << "Welcome to the Virtual BlackJack Player!" << endl;

    //input of how many players playing and data sanitation
    do
    {

        cout <<"How many players? (1-7): " << endl;
        cin >> numPlayers;

        if (numPlayers <= 0 || numPlayers > 7)
        {
            cout << "Invalid number of players entered! Please enter between 1 and 7 players." << endl;
            CorrectEntry = false;
        }
        else
        {
            CorrectEntry = true;
        }
    }
    while (CorrectEntry == false);


    //entry of player names and adding the player to the vector 'playerVec'
    for (int i{0}; i < numPlayers; i++)
    {
        cout << "Enter Player Name: " << endl;
        cin >> playerName;
        playerVec.push_back(Player(playerName));

    }

    //populated the deck of cards and shuffles said cards
    gameDeck.populate();
    gameDeck.shuffle();

    //deals to house and player
    for (int i {0}; i<2; i++)
    {
        for (auto& player : playerVec)
        {
            gameDeck.deal(player);
        }
        gameDeck.deal(House);
    }

    //prints hand of player and the value of the hand of each player
    for (auto& player : playerVec)
    {
        cout << player.userName << ": ";
        player.printHand();
        cout << "(" << player.getTotal() << ")";
        cout << endl;
    }

    House.userHand.at(0).flip();

    //prints hand of house and the value of the hand of the house
    cout << "House: ";
    House.printHand();
    cout << endl;

    House.userHand.at(0).flip();


    //removes busted player from vector 'playerVec'
    for (int i{0}; i < playerVec.size(); i++)
    {
        if (playerVec.at(i).isBusted() == true)
        {
            playerVec.at(i).bust();
            playerVec.erase(playerVec.begin()+ i);
            i--;

        }
    }

    for (int i{0}; i < playerVec.size(); i++)
    {
        bool hitOrNot;
        hitOrNot = playerVec.at(i).isHitting();
        //for each player, while the player wants a hit the new card is dealt, the hand is displayed alobg with the deck value
        while (hitOrNot == true)
        {
            gameDeck.deal(playerVec.at(i));
            cout << playerVec.at(i).userName << ": ";
            playerVec.at(i).printHand();
            cout << "(" << playerVec.at(i).getTotal() << ")";
            cout << endl;

            //checks if the player busted and removes them accordingly
            if (playerVec.at(i).isBusted() == true)
            {
                playerVec.at(i).bust();
                playerVec.erase(playerVec.begin()+ i);
                i--;
                hitOrNot = false;

            }
            else
            {
               hitOrNot = playerVec.at(i).isHitting();
            }
        }
    }

    //
    if (House.getTotal() <= 16)
    {
        gameDeck.deal(House);
    }

    cout << "House: ";
    House.printHand();
    cout << "(" << House.getTotal() << ")";
    cout << endl;

    //if there are no players left,
    if (playerVec.size() != 0)
    {
        //if the house has more than 21 cards and busts, each player that wins is notified
        if (House.getTotal() > 21)
        {
            for (int i{0}; i < playerVec.size(); i++)
            {
                playerVec.at(i).win();
            }
        }
        else
        {
            for (int i{0}; i < playerVec.size(); i++)
            {
                //if the players hand is larger than the house hand, the player is notified they win
                if(playerVec.at(i).getTotal() > House.getTotal())
                {
                    playerVec.at(i).win();
                }
                //if the players hand is smaller than the house hand, the player is notified they lose
                else if (playerVec.at(i).getTotal() < House.getTotal())
                {
                    playerVec.at(i).lose();
                }
                //if the players hand is same as the house hand, the player is notified they push
                else if (playerVec.at(i).getTotal() == House.getTotal())
                {
                    playerVec.at(i).push();
                }
            }
        }

    }
    playerVec.clear();
    House.clear();
    House.userHand.clear();
}

