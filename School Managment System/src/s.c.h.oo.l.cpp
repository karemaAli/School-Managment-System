#include "School.h"
#include <iostream>
using namespace std;

School::School(string name, string addr, string principal)
    : schoolName(name), address(addr), principalName(principal) {}

void School::displayBasicInfo() const
{
    cout << "School Name: " << schoolName << "\nAddress: " << address
         << "\nPrincipal: " << principalName << endl;
}
