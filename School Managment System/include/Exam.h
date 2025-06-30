#ifndef EXAM_H
#define EXAM_H

#include <string>
using namespace std;

class Exam
{
private:
    string examName;
    string courseCode;
    string examDate;

public:
    Exam(string name = "", string code = "", string date = "");
    void display() const;
};

#endif
