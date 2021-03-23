//constructors.
#include <iostream>
using namespace std;
#include "student.cpp"

int main()
{
    student s1;

    s1.display();

    //parameteized constructor demo
    cout << "parameterized constructor demo" << endl;

    student s2(24, 10);
    s2.display();

    student *s3 = new student(22, 102);
    s3->display();
}