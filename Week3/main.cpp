#include <iostream>
#include <chef.h>
#include "italianChef.h"
#include <string>
using namespace std;

int main()
{
    string kokinNimi;
    chef kokki_1("Lars");
    //  chef kokki_2();
    kokinNimi = kokki_1.getName();
    cout << "Main: kokinNimi on: " << kokinNimi << endl;
    kokki_1.makeSalad(10);
    kokki_1.makeSalad(4);
    kokki_1.makeSalad(18);

    kokki_1.makeSoup(0);
    kokki_1.makeSoup(2);
    kokki_1.makeSoup(31);

    // italianChef it_kokki_1();
    italianChef it_kokki_2("Pablo");
    // it_kokki_1.makeSalad(15);
    it_kokki_2.makeSalad(12);
    it_kokki_2.makeSoup(7);

    // kokki_1.makePizza();
    // it_kokki_2.makePizza();
    it_kokki_2.askSecret("pizza", 12, 18);
    return 0;
}
