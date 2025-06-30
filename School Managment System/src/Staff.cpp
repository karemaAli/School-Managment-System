#include "Staff.h"
#include <iostream>
using namespace std;

Staff::Staff() : Person(), staffID(0), role(""), salary(0.0) {}

Staff::Staff(string n, int a, string g, string addr, string phone, string mail,
             int id, string r, float sal)
    : Person(n, a, g, addr, phone, mail), staffID(id), role(r), salary(sal) {}

void Staff::displayInfo() const
{
    Person::displayInfo();
    cout << "Staff ID: " << staffID << "\nRole: " << role << "\nSalary: " << salary << endl;
}
