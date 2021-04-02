#include <iostream>
using namespace std;
#include "student.cpp"

int main()
{
    char name[] = "abcd";
    Student s1(20, name);
    s1.display();

    name[3] = 'e';
    Student s2(24, name);
    s2.display();

    s1.display(); //s1 changes due to shallow copying. because s2 do not create a new copy of array instead make changes in same array of s1(0 index copy).
}