#ifndef GAME_H
#define GAME_H

using namespace std;

class Game
{
public:
    Game(int);
    ~Game();
    void play();
    void printGameResult();
private:
    int maxNumber=20;
    int playerGuess;
    int randomNumber=0;
    int numOfGuesses=0;
};

#endif // GAME_H
