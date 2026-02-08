#include "notificator.h"

notificator::notificator() {}

void notificator::add(follower *newfoll)
{
    cout << "adding follower :" << newfoll->getName() << endl;
    newfoll->next = followers;
    followers = newfoll;
}

void notificator::remove(follower *remofoll)
{
    if(followers==nullptr)
        return;
    if (followers==remofoll){
        cout << "Removing follower: " << remofoll->getName() << endl;
        followers=followers->next;
        return;
    }
    follower *removed=followers;
    while (removed->next!= nullptr){
        if(removed->next==remofoll){
            cout << "Removing follower: " << remofoll->getName() << endl;
            removed->next=remofoll->next;
            return;
        }
        removed=removed->next;
    }
}

void notificator::print()
{
    cout << "Followers: " << endl;

    follower *begin = followers;

    while (begin != nullptr){
    cout << "." << begin->getName() << endl;
    begin = begin->next;
    }
}

void notificator::post(string message)
{
    cout << "sending message: " << message << endl;
    follower *begin = followers;
    while (begin != nullptr){
        begin->update(message);
        begin = begin->next;
    }
}
