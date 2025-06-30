#include "Teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher() : Person(), teacherID(0), subjectSpecialization(""), salary(0.0) {}

Teacher::Teacher(string n, int a, string g, string addr, string phone, string mail,
                 int id, string subject, float sal)
    : Person(n, a, g, addr, phone, mail), teacherID(id), subjectSpecialization(subject), salary(sal) {}

void Teacher::displayInfo() const
{
    Person::displayInfo();
    cout << "Teacher ID: " << teacherID << "\nSubject: " << subjectSpecialization
         << "\nSalary: " << salary << endl;
}
