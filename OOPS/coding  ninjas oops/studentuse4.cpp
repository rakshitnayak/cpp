#include <iostream>
using namespace std;
#include "student.cpp"

int main()
{
    /*
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
    s6->display();*/

    //copy assignment constructor
    student s1(10, 800);
    student s2(12, 890);

    student *s3 = new student(13, 910);

    s2 = s1; //copy assignment constructor called.
    *s3 = s1;

    s1.display();
    s2.display();
    s3->display();
    delete s3; //for dynamic constructor.

    /*destructor: same properties as default constructor..denoted by "~";
    the work of destructor is to deallocate the memory of object",
    it is called at the end , only once at the life time, not like constructor which can be called multiple times. 
    
    */
}