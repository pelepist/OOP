#ifndef NOTIFICATOR_H
#define NOTIFICATOR_H
#include "follower.h"
class notificator
{
public:
    notificator();
    void add(follower *foll);
    void remove(follower *foll);
    void print();
    void post(string message);

private:
    follower *followers = nullptr;

};

#endif // NOTIFICATOR_H
