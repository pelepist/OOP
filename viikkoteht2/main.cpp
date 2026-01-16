#include <iostream>
#include "Game.h"

using namespace std;

int main()
{
    int maxNum=20;
    Game gameObj(maxNum);
    gameObj.play();
    gameObj.printGameResult();
    return 0;
}
