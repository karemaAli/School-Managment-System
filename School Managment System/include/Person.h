#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
    string gender;
    string address;
    string phoneNumber;
    string email;

public:
    Person();
    Person(string n, int a, string g, string addr, string phone, string mail);
    virtual void displayInfo() const;
};

#endif
