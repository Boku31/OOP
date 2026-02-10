#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <string>
#include <chef.h>
using namespace std;

class italianChef : public chef
{
public:
    italianChef();
    italianChef(string);
    ~italianChef();
    bool askSecret(string, int, int);
private:
    int water;
    int flour;
    string password = "pizza";
    int makePizza();
};

#endif // ITALIANCHEF_H
