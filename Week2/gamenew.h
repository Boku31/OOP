#ifndef GAMENEW_H
#define GAMENEW_H

class GameNew
{
public:
    GameNew(int);
    ~GameNew();
    void play(); // Pelin koko pelialgoritmi
    void printGameResult();
private:
    int maxNumber = 0; // Suurin arvottava luku
    int playerGuess = 0; // Pelaajan arvaus
    int randomNumber = 0; // Satunnainen luku
    int numOfGuesses = 0; // Arvausten määrä
protected:

};

#endif // GAMENEW_H
