#include "Classroom.h"
#include <iostream>
using namespace std;

Classroom::Classroom(int room, int cap) : roomNumber(room), capacity(cap) {}

void Classroom::display() const
{
    cout << "Room: " << roomNumber << "\nCapacity: " << capacity << endl;
}
