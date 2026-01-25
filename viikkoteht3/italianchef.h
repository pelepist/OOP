#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class italianChef : public chef
{
public:
    italianChef();
    italianChef(string);
    ~italianChef();
    bool askSecret(string, int, int);
private:
    int water;
    int flour;
    string password="pizza";
    int makePizza();
};

#endif // ITALIANCHEF_H
