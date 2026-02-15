#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>

using namespace std;
class Student
{
public:
    Student(string n, int a);
    string getName() const;
    void setName(const string &newName);
    int getAge() const;
    void setAge(int newAge);

    void printStudentInfo();
private:
    string name;
    int age;
};

#endif // STUDENT_H
