#include <iostream>
using namespace std;
#include "student.cpp"

int main()
{

    student s1(22, 1002);
    cout << "s1: ";
    s1.display();

    //copy constructor // it creates an object which is copy of some another object.!
    student s2(s1); //this is how we write copy constructor statically..
    cout << "s2: ";
    s2.display();

    student *s3 = new student(20, 1005);
    cout << "s3: ";
    s3->display();

    student s4(*s3); //static dynamic argument copy constructor.
    s4.display();

    student *s5 = new student(*s3);
    s5->display();

    student *s6 = new student(*s5); //dynamic copy constructor.
    s6->display();
}