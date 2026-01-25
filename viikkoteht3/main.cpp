#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    string fullName;
    chef chef1("Lars");
    //chef chef2();
    fullName=chef1.getName();
    cout << "Main: chef name is " << fullName << endl;
    chef1.makeSalad(10);


    chef1.makeSoup(9);


    //italianChef itachef1();
    italianChef itachef2("Fabio");
    itachef2.makeSalad(15);
    itachef2.makeSoup(7);

    itachef2.askSecret("pizza",20,20);






    return 0;
}
