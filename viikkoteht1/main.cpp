#include <iostream>

using namespace std;
int game(int maxnum);

int main()
{
    int guesses = 0;
    int maxnum = 40;
    guesses = game(maxnum);
    cout << "Guesses: " << guesses << endl;
   return 0;
}

int game(int maxnum){
    int guesses = 0;
    int randomnum = 0;
    int guessnum = 0;

    //randomnum = 17;
    srand(time(NULL));
    randomnum = rand() % maxnum;
    while (guessnum != randomnum){
        cout << "Guess number: " << endl;
        cin >> guessnum;
        guesses++;
        if (guessnum == randomnum){
            cout << "Correct!" << endl;
        }
        if (guessnum < randomnum){
            cout << "Number is greater than " << guessnum << endl;
        }
        if (guessnum > randomnum){
            cout << "Number is less than " << guessnum << endl;
        }
    }

    return guesses;
}
