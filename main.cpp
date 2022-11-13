#include <iostream>
#include <string>
#include <card.h>
#include <deck.h>
#include <game.h>

using namespace std;

int main()
{
    game newGame;
    char playAgain;

    do
    {
        newGame.play();
        cout << endl;
        cout << "Would you like to play again (y/n (any key): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "Thanks for playing!" << endl;
}
