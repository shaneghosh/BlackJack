#include "house.h"

//function for the house hitting
bool house::isHitting() const
{
    bool isHitting;

    if (getTotal() <= 16)
    {
        isHitting = true;
    }
    else
    {
        isHitting = false;
    }
    return isHitting;
}

void house::flipFirstCard()
{

}
