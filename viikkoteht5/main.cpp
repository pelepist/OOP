#include <iostream>
#include "follower.h"
#include "notificator.h"
using namespace std;

int main()
{
    follower *A = new follower("John");
    follower *B = new follower("Paul");
    follower *C = new follower("George");
    follower *D = new follower("Ringo");

    /*A->next = B;
    B->next = C;
    C->next = D;*/

    /*follower *begin = A;
    while(begin != nullptr){
        cout << "currently on " << begin->getName() << endl;
        begin->update("Helter skelter");
        begin = begin->next;
        if (begin != nullptr){
        cout << "up next " << begin->getName() << endl;
        } else {
            cout << "end of list";
        }
     }*/

    notificator *N = new notificator();
    cout << endl;

    N->add(A);
    N->add(B);
    N->add(C);
    N->add(D);


    cout << endl;

    N->remove(A);
    N->remove(B);
    N->remove(C);
    N->remove(D);
    cout << endl;

    N->print();
    N->post("Helter skelter");

    delete A;
    delete B;
    delete C;
    delete D;
    delete N;
    return 0;
}
