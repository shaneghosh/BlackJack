#ifndef GENERICPLAYER_H
#define GENERICPLAYER_H
#include <string>
#include <hand.h>
#include <iostream>


class GenericPlayer: public Hand
{
public:
    //parts of class 'generic player'
    std::string userName;
    GenericPlayer(const std::string&name = ""): userName(name) {}
    //functions in class 'generic player'
    //bool trueOrFalse;
    virtual bool isHitting() const = 0;
    bool isBusted() const;
    void bust() const;
};


#endif // GENERICPLAYER_H
