#include "gamenew.h"
#include <iostream>
using namespace std;

GameNew::GameNew(int mN)
{
    cout << "Peli luotu " << endl;
    maxNumber = mN;
}

GameNew::~GameNew()
{
    cout << "Peli tuhottu " << endl;
}

void GameNew::play()
{
    cout << "Pelissa " << endl;

    srand(time(NULL));
    randomNumber = (rand() % maxNumber)+1;
    // cout << "maxNumber: " << maxNumber << endl << "randomNumber: " << randomNumber << endl;

    while (playerGuess != randomNumber) {
        cout << "Anna arvaus? " << endl;
        cin >> playerGuess;
        //    cout << "playerGuess arvaus on " << arvaus << endl;
        numOfGuesses++;

        //cout << "playerGuess lkm on " << playerGuess << endl;
        if (playerGuess == randomNumber) {
            cout << "Oikein!!" << endl;
        } else if (playerGuess < randomNumber){
            cout << "Luku on suurempi!" << endl;
        } else if (playerGuess > randomNumber) {
            cout << "Luku on pienempi!" << endl;
        }
    }
    // Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
}

void GameNew::printGameResult()
{
    cout << "Tulostuksessa " << endl;
    cout << "Oikea luku: " << randomNumber << endl << "Arvausten maara: " << numOfGuesses << endl;
}
