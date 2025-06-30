#ifndef SCHOOL_H
#define SCHOOL_H

#include <vector>
#include "Student.h"
#include "Teacher.h"
#include "Staff.h"
#include "Course.h"
#include "Classroom.h"

class School
{
private:
    string schoolName;
    string address;
    string principalName;
    vector<Student> students;
    vector<Teacher> teachers;
    vector<Staff> staffMembers;
    vector<Course> courses;
    vector<Classroom> classrooms;

public:
    School(string name = "", string addr = "", string principal = "");
    void displayBasicInfo() const;
};

#endif

