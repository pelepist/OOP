#ifndef FOLLOWER_H
#define FOLLOWER_H
#include <iostream>
using namespace std;

class follower
{
public:
    follower(string n);
    follower *next = nullptr;
    void update(string message);
    string getName() const;
private:
    string name;

};

#endif // FOLLOWER_H
