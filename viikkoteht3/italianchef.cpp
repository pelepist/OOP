#include "italianchef.h"
#include <iostream>

italianChef::italianChef()
{
    cout << "in italian constructor" << endl;
}

italianChef::italianChef(string cN)
{
    cout << "in italian input constructor" << endl;
    chefName=cN;
}

italianChef::~italianChef()
{
    cout << "in italian destructor" << endl;
}

bool italianChef::askSecret(string pw, int flourAmount, int waterAmount)
{
    int pizzaAmount;
    if (pw != password) return false; //change to string compare
    flour = flourAmount;
    water = waterAmount;
    pizzaAmount=makePizza();
    cout << "pizzas made: " << pizzaAmount << endl;
    return true;
}
int italianChef::makePizza()
{
    cout << "making pizza" << endl;
    cout << "Amount of flour: " << flour <<" "<< "amount of water: "<< water << endl;
    int pizzaAmount = min(flour / 5, water / 5);

    return pizzaAmount;
}
