#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Staff.h"
#include "Course.h"
#include "Classroom.h"
#include "Exam.h"
#include "School.h"
using namespace std;

int main()
{
    School s("Modern School", "Cairo", "Mr. Ahmed");
    s.displayBasicInfo();

    Student st("Ali", 16, "Male", "Nasr City", "01012345678", "ali@mail.com", 101, "Grade 10", 3.8);
    Teacher t("Mona", 35, "Female", "Heliopolis", "01122334455", "mona@mail.com", 201, "Math", 7000);
    Staff sf("Hossam", 40, "Male", "Giza", "01234567890", "hossam@mail.com", 301, "Clerk", 4000);

    st.displayInfo();
    t.displayInfo();
    sf.displayInfo();

    return 0;
}
