#include "luottotili.h"

luottotili::luottotili()
{
    //cout << " luotto default constructor" << endl;
}
luottotili::luottotili(string om, double lr) : pankkitili(om)
{
    luottoRaja=lr;
    //cout << "luotto string constructor" << endl;
}
luottotili::~luottotili()
{
    //cout << "luotto destructor" << endl;
}
bool luottotili::deposit(double sum)
{
    //cout << "luotto deposit function" << endl;
    cout << "saldo ennen: " << saldo << endl;
    cout << "saldo nyt: " << sum + saldo << endl;
    if ((sum < 0)||((sum + saldo)>0)) return false;
    saldo += sum;
    return true;
}
bool luottotili::withdraw(double sum)
{
    //cout << "luotto withrdaw function" << endl;
    cout << "luottoaraja: " << luottoRaja << endl;
    cout << "saldo ennen: " << saldo << endl;
    cout << "saldo nyt: " << saldo - sum;
    if ((sum < 0)||(abs(saldo)+sum)>luottoRaja) return false;
    saldo -= sum;
    return true;
}
