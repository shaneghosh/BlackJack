#ifndef HOUSE_H
#define HOUSE_H
#include <genericplayer.h>


class house: public GenericPlayer
{
public:
    //part of class 'house'
    Hand houseHand;
    //functions which make class 'house' work
    virtual bool isHitting() const;
    void flipFirstCard();
};

#endif // HOUSE_H
