#include "game.h"
#include <iostream>
using namespace std;

Game::Game(int maxNum)
{
    cout << "Game created" << endl;
    maxNumber=maxNum;
}

Game::~Game()
{
    cout << "Game closed" << endl;
}


void Game::play()

{
    cout << "game start" << endl;
    srand(time(NULL));
    randomNumber = rand() % maxNumber;
    while (playerGuess != randomNumber){
        cout << "Guess number: " << endl;
        cin >> playerGuess;
        numOfGuesses++;
        if (playerGuess == randomNumber){
            cout << "Correct!" << endl;
        }
        if (playerGuess < randomNumber){
            cout << "Number is greater than " << playerGuess << endl;
        }
        if (playerGuess > randomNumber){
            cout << "Number is less than " << playerGuess<< endl;
        }
    }
}
void Game::printGameResult()
{
    cout << "Guesses: " << numOfGuesses << endl;
}
