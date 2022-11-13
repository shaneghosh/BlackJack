#include "genericplayer.h"

//function to see if the player busted
bool GenericPlayer::isBusted() const
{
    bool bustOrNot;

    if (getTotal() > 21)
    {
        bustOrNot = true;
    }
    else
    {
        bustOrNot = false;
    }

    return bustOrNot;
}

//function which notifies player if they busted
void GenericPlayer::bust() const
{
    std::cout << userName << " busted" << std::endl;
}
