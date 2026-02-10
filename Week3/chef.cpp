#include "chef.h"
#include <iostream>

chef::chef()
{
    cout << "Olen default konstruktorissa!" << endl;
}
chef::chef(string cN)
{
    cout << "Olen input konstruktorissa!" << endl;
    chefName = cN;
}
chef::~chef()
{
    cout << "Olen default desktruktorissa!" << endl;
}

int chef::makeSalad(int numberOfItems)
{
    cout << "Olen salaattifunktiossa!" << endl;
    // int numberOfPortions = numberOfItems/5;
    cout << "Annoit: " << numberOfItems << " ainesta" << endl;
    cout << "Siita saadaan: " << numberOfItems/5 <<" salaattiannosta" << endl;
    return numberOfItems/5;
}
int chef::makeSoup(int numberOfItems)
{
    cout << "Olen soppafunktiossa!" << endl;
    cout << "Annoit: " << numberOfItems << " ainesta" << endl;
    cout << "Siita saadaan: " << numberOfItems/5 <<" soppa-annosta" << endl;

    return numberOfItems/3;
}

string chef::getName()
{
    cout << "Olen getterissa!" << endl;
    cout << "Kokin nimi on: " << chefName << endl;
    return chefName;
}

void chef::setName(string cN)
{
    cout << "Olen setterissa!" << endl;
    chefName = cN;
}
