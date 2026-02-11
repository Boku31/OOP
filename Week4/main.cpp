#include <iostream>
#include "asiakas.h"

using namespace std;

int main()
{
    // Luodaan kaksi asiakasta.
    // Toinen parametri on luottoraja
    Asiakas a1("Joona", 1000);
    Asiakas a2("Aki", 500);

    cout << endl;

    // Talletetaan rahaa molempien käyttötilille
    a1.talletus(800);
    a2.talletus(200);

    cout << endl << "ALKUTILANNE:" << endl;
    a1.showSaldo();
    a2.showSaldo();

    cout << endl;

    // Testataan tilisiirtoa
    cout << "TEHDAAN TILISIIRTO 300 euroa Akilta Joonalle" << endl;
    a1.tiliSiirto(300, a2);

    cout << endl << "SIIRRON JALKEEN:" << endl;
    a1.showSaldo();
    a2.showSaldo();

    cout << endl;

    // Testataan virhetilanne: liian suuri siirto
    cout << "Yritetaan siirtaa liikaa rahaa" << endl;
    a1.tiliSiirto(1000, a2);

    cout << endl << "LOPPUTILANNE:" << endl;
    a1.showSaldo();
    a2.showSaldo();

    return 0;
}
