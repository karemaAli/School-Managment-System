#include "Exam.h"
#include <iostream>
using namespace std;

Exam::Exam(string name, string code, string date)
    : examName(name), courseCode(code), examDate(date) {}

void Exam::display() const
{
    cout << "Exam: " << examName << "\nCourse Code: " << courseCode
         << "\nDate: " << examDate << endl;
}
