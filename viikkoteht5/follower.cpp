#include "follower.h"


follower::follower(string n)
{
    name = n;
    cout << "creaing follower " << name << endl;
}

void follower::update(string message)
{
    cout << name << " received message " << message << endl;
}

string follower::getName() const
{
    return name;
}
