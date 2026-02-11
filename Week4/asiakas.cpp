#include "asiakas.h"

Asiakas::Asiakas(string n, double lr) :
    kayttotili(n), luottotili(n,lr)
{
    nimi = n;
    cout << "Asiakkuus luotu " << nimi << endl;
}

string Asiakas::getNimi() const
{
    return nimi;
}

void Asiakas::showSaldo() const
{
    cout << "Kayttotilin saldo " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo " << luottotili.getBalance() << endl;
}

bool Asiakas::luotonMaksu(double amount) {
    // Negat. summa ei sallittu
    if (amount < 0.0) {
        cout << "Luoton maksu" << amount << " ei sallittu" << endl;
        return false;
    } else {
        luottotili.deposit(amount);
        return true;
    }
        return false;
}

bool Asiakas::luotonNosto(double amount) {
    // Negat. summa ei sallittu
    if (amount < 0.0) {
        cout << "Luoton nosto " << amount << " ei sallittu" << endl;
        return false;
    } else {
        luottotili.withdraw(amount);
        return true;
    }
}

bool Asiakas::tiliSiirto(double amount, Asiakas &saaja)
{
    cout << "Pankkitili: " << getNimi() << " siirtaa "
         << amount << " " << saaja.getNimi() << ":lle" << endl;
    cout << getNimi() << " ";
    if (true == nosto(amount)) {
        cout << saaja.getNimi() << " ";
        saaja.talletus(amount);
        return true;
    }
}

bool Asiakas::nosto(double amount)
{
    // Negat. summa ei sallittu
    if (amount < 0.0) {
        cout << "Nosto " << amount << " ei sallittu" << endl;
        return false;
    } else {
        kayttotili.withdraw(amount);
        return true;
    }
}

bool Asiakas::talletus(double amount)
{
    if (amount <= 0.0) {
        cout << "Talletus " << amount << " ei sallittu" << endl;
        return false;
    } else {
        kayttotili.deposit(amount);
        return true;
    }
}
