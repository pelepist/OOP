#include "chef.h"
#include <iostream>

chef::chef()
{
    cout << "in default constructor" << endl;
}
chef::chef(string cN)
{
    cout << "in input constructor" << endl;
    chefName = cN;
}
chef::~chef()
{
    cout << "in default destructor" << endl;
}
int chef::makeSalad(int ingredients)
{
    cout << "in SaladFunction" << endl;
    cout << "You gave: " << ingredients << " " << "ingredients" << endl;
    cout << "it makes " << ingredients/5 << " " << "salads" << endl;
    return ingredients/5;
}
int chef::makeSoup(int ingredients)
{
    cout << "in SoupFunction" << endl;
    cout << "You gave: " << ingredients << " " << "ingredients" << endl;
    cout << "it makes " << ingredients/3 << " " << "soups" << endl;
    return ingredients/3;
}

string chef::getName()
{
    cout << "in getter" << endl;
    cout << "Chef name is: " << chefName << endl;
    return chefName;
}

void chef::setName(string cN)
{
    cout << "in setter" << endl;
    chefName = cN;
}

