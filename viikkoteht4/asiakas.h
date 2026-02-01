#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "pankkitili.h"
#include "luottotili.h"

class asiakas
{
public:
    asiakas();
    asiakas(string, double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    bool tiliSiirto(double, asiakas&);

private:
    string nimi;
    pankkitili pt;
    luottotili lt;
};

#endif // ASIAKAS_H
