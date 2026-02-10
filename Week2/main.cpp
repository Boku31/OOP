#include "gamenew.h"
#include <iostream>

int main(){
    int maxNum(50);
    GameNew peliOlio(maxNum);
    peliOlio.play();
    peliOlio.printGameResult();

    std::cout << "Arvasit oikein" << std::endl;
    return 0;
}
