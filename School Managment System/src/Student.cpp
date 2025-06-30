#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() : Person(), studentID(0), gradeLevel(""), GPA(0.0) {}

Student::Student(string n, int a, string g, string addr, string phone, string mail,
                 int id, string grade, float gpa)
    : Person(n, a, g, addr, phone, mail), studentID(id), gradeLevel(grade), GPA(gpa) {}

void Student::displayInfo() const
{
    Person::displayInfo();
    cout << "Student ID: " << studentID << "\nGrade: " << gradeLevel << "\nGPA: " << GPA << endl;
}
