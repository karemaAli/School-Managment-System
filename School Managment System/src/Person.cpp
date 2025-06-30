#include "Person.h"
#include <iostream>
using namespace std;

Person::Person() : name(""), age(0), gender(""), address(""), phoneNumber(""), email("") {}

Person::Person(string n, int a, string g, string addr, string phone, string mail)
    : name(n), age(a), gender(g), address(addr), phoneNumber(phone), email(mail) {}

void Person::displayInfo() const
{
    cout << "Name: " << name << "\nAge: " << age << "\nGender: " << gender
         << "\nAddress: " << address << "\nPhone: " << phoneNumber << "\nEmail: " << email << endl;
}

