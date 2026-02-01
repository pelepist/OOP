#include "asiakas.h"

asiakas::asiakas()
{
    //cout << "asiakas default constructor" << endl;
}
asiakas::asiakas(string name, double lr) : pt(name), lt(name,lr)
{
    //cout << "asiakas string constructor" << endl;
    nimi=name;
}
string asiakas::getNimi()
{
    return nimi;
}
void asiakas::showSaldo()
{
    cout << "pt saldo: " << pt.getBalance() << endl;
    cout << "lt saldo: " << lt.getBalance() << endl;
}

bool asiakas::talletus(double sum)
{
    pt.deposit(sum);
    return true;
}
bool asiakas::nosto(double sum)
{
    pt.withdraw(sum);
    return true;
}
bool asiakas::luotonMaksu(double sum)
{
    lt.deposit(sum);
    return true;
}
bool asiakas::luotonNosto(double sum)
{
    lt.withdraw(sum);
    return true;
}
bool asiakas::tiliSiirto(double sum, asiakas& kohde)
{
    cout << "siirrety " << sum <<" tililta " << nimi <<" tilille " << kohde.nimi << endl;
    bool nostettu=nosto(sum);
    bool siirretty=false;
    if(nostettu){
        siirretty=kohde.talletus(sum);
    }
    return siirretty;
}
