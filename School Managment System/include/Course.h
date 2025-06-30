#ifndef COURSE_H
#define COURSE_H

#include <string>
using namespace std;

class Course
{
private:
    string courseCode;
    string courseName;
    string teacherName;

public:
    Course(string code = "", string name = "", string teacher = "");
    void display() const;
};

#endif
