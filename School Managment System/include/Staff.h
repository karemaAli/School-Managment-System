#ifndef STAFF_H
#define STAFF_H

#include "Person.h"

class Staff : public Person
{
private:
    int staffID;
    string role;
    float salary;

public:
    Staff();
    Staff(string n, int a, string g, string addr, string phone, string mail,
          int id, string r, float sal);
    void displayInfo() const override;
};

#endif
