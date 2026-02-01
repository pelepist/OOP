#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"
using namespace std;

int main()
{
    /*pankkitili pt1;
    pankkitili pt2("John");
    pt2.deposit(200);
    pt2.withdraw(100);
    double luettusaldo=pt2.getBalance();
    cout <<"John saldo: " << luettusaldo << endl;

    luottotili lt1;
    luottotili lt2("Paul", 5000);
    lt2.withdraw(200);
    lt2.deposit(100);
    luettusaldo=lt2.getBalance();
    cout << "Paul saldo: " << luettusaldo << endl;*/


    asiakas asi1("Ringo",1000);
    asiakas asi2("George", 1000);

    asi1.tiliSiirto(500,asi2);

    return 0;
}
