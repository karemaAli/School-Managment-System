#include "Course.h"
#include <iostream>
using namespace std;

Course::Course(string code, string name, string teacher)
    : courseCode(code), courseName(name), teacherName(teacher) {}

void Course::display() const
{
    cout << "Course Code: " << courseCode << "\nCourse Name: " << courseName
         << "\nTeacher: " << teacherName << endl;
}
