#include "italianchef.h"
#include <iostream>

italianChef::italianChef()
{
    cout << "Olen Italiandefaultkonstruktorissa!" << endl;
}
italianChef::italianChef(string cN) : chef(cN)
{
    cout << "Olen Italianinputkonstruktorissa!" << endl;
    //    chefName = cN;
}
italianChef::~italianChef()
{
    cout << "Olen Italiandefaultdestruktorissa!" << endl;
}

/* Jäsenfunktio askSecret() tarkistaa onko parametrinä annettu salasana ok, ja jos on, kutsuu makePizza()-jäsenfunktiota.
 * Muut parametrit ovat ainesten eli jauhojen (flour) ja veden (water) määrä.
 * Funktio palauttaa true/false sen mukaan oliko salasana oikea.
 */

bool italianChef::askSecret(string pw, int amountOfWater, int amountOfFlour)
{
    int numberOfPizzas;

    if (pw.compare(password) != 0)
    {
        cout << "Vaarin salasana!" << endl;
        return false;
    }

    water = amountOfWater;
    flour = amountOfFlour;
    numberOfPizzas = makePizza();
    cout << "Salasana ok" << endl;
    cout << "Saatiin tehtya: " << numberOfPizzas << " pizzaa" << endl;
    return true;
}

int italianChef::makePizza()
{
    cout << "Tehdaanpa pizzaa!" << endl;
    cout << "Jauhoja on: " << flour << " vetta on: " << water << endl;

    int pizzasFromFlour = flour / 5;
    int pizzasFromWater = water / 5;

    int numberOfPizzas = min(pizzasFromFlour, pizzasFromWater);

    return numberOfPizzas;
}
