#ifndef PLAYER_H
#define PLAYER_H
#include <genericplayer.h>
#include <vector>


class Player: public GenericPlayer
{
public:
    //function required to make class 'player' work
    Hand playerHand;
    Player(const std::string& name= "") : GenericPlayer(name) {}
    //makes player a virtual function
    virtual ~Player();
    //makes "is hitting" function virtual
    virtual bool isHitting() const override;
    //function for players winning, losing or pushing
    void win() const;
    void lose() const;
    void push() const;

};

#endif // PLAYER_H
