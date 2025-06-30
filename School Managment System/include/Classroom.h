#ifndef CLASSROOM_H
#define CLASSROOM_H

class Classroom
{
private:
    int roomNumber;
    int capacity;

public:
    Classroom(int room = 0, int cap = 0);
    void display() const;
};

#endif
