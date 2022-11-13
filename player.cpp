#include "player.h"
#include <iostream>

//destructor for player
Player::~Player()
{

}

//function for if player loses
void Player::lose() const
{
    std::cout << userName << " loses" << std::endl;
}

//functions for if player wins
void Player::win() const
{
    std::cout << userName << " wins" << std::endl;
}

//functions for if player pushes
void Player::push() const
{
    std::cout << userName << " pushes" << std::endl;

}

//function for letting the player take a hit
bool Player::isHitting() const
{
    std::cout << userName << " do you want a hit (y/n(any key)): ";
    char response;
    std::cin >> response;
    return (response =='y' || response == 'Y');
}
