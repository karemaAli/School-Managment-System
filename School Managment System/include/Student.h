#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person
{
private:
    int studentID;
    string gradeLevel;
    float GPA;

public:
    Student();
    Student(string n, int a, string g, string addr, string phone, string mail,
            int id, string grade, float gpa);
    void displayInfo() const override;
};

#endif
