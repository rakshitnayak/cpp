#include <iostream>
using namespace std;
#include "student.cpp"

int main()
{

    //objects created statically.
    student s1;
    student s2;

    s1.age = 21;
    s1.rollNumber = 101;

    cout << s1.age << endl;
    cout << s1.rollNumber << endl;

    //objects created dynamically.
    student *s3 = new student;
    (*s3).age = 23;
    cout << (*s3).age << endl;

    s3->rollNumber = 102; //we can write (*s3).rollNumber as s3->rollNumber,,both depicts the same.
    cout << s3->rollNumber << endl;
}