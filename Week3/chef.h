#ifndef CHEF_H
#define CHEF_H
#include <string>
using namespace std;

class chef
{
public:
    chef();
    chef(string);
    ~chef();
    string getName();
    void setName(string);

    int makeSalad(int);
    int makeSoup(int);
protected:
    // string chefName;
private:
    string chefName;
};

#endif // CHEF_H
