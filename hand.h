#ifndef HAND_H
#define HAND_H
#include <card.h>
#include <iostream>
#include <vector>

class Hand
{
public:
    //vector containg cards of each user in their hand
    std::vector <Card> userHand;
    //functions which makes the class 'hand' work
    void add(Card card);
    void clear();
    void printHand();
    int getTotal() const;
};

#endif // HAND_H
