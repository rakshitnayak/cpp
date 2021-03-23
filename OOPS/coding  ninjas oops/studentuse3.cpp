//constructors.
#include <iostream>
using namespace std;
#include "student.cpp"

int main()
{
    //this demo

    student s1(32);
    s1.display();
    // this is used to avoid put default garbage value in data type.

    /*
    student s1;

    s1.display();

    //parameteized constructor demo
    cout << "parameterized constructor demo" << endl;

    student s2(24, 10);
    s2.display();

    student *s3 = new student(22, 102);
    s3->display();*/
}
