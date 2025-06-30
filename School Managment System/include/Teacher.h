#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"

class Teacher : public Person
{
private:
    int teacherID;
    string subjectSpecialization;
    float salary;

public:
    Teacher();
    Teacher(string n, int a, string g, string addr, string phone, string mail,
            int id, string subject, float sal);
    void displayInfo() const override;
};

#endif
