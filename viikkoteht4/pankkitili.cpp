#include "pankkitili.h"

pankkitili::pankkitili()
{
    //cout << "pankkitili default constructor" << endl;
}
pankkitili::pankkitili(string om)
{
    //cout << "pankkitili string constructor" << endl;
    omistaja=om;
}
pankkitili::~pankkitili()
{
    //cout << "pankkitili default destructor" << endl;
}
double pankkitili::getBalance()
{
    //cout << "balance getter" << endl;
    return saldo;
}
bool pankkitili::deposit(double sum)
{
    //cout << "pankkitili deposit function" << endl;
    if (sum<0)return false;
    saldo += sum;
    return true;
}
bool pankkitili::withdraw(double sum)
{
    //cout << "pankkitili withrdraw function" << endl;
    if ((sum <0 )||((saldo - sum) >0))return false;
    saldo-=sum;
    return true;
}
