#include "student.h"



Student::Student(string n, int a)
{
    name = n;
    age = a;
}

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

int Student::getAge() const
{
    return age;
}

void Student::setAge(int newAge)
{
    age = newAge;
}

void Student::printStudentInfo()
{
    cout << "Name: " << name << " Age: " << age << endl;
}
