#include <iostream>
using namespace std;
#include "student.cpp"

int main()
{

    //objects created statically.
    student s1;
    student s2;

    s1.display();
    s2.display();

    // s1.age = 21;
    s1.rollNumber = 101;

    cout << "age of s1:" << s1.getAge() << endl; // note: if we want to access private property,we can access it through public function.
    cout << s1.rollNumber << endl;

    //objects created dynamically.
    student *s3 = new student;
    // (*s3).age = 23;
    // cout << (*s3).age << endl;

    (*s3).display();

    s3->rollNumber = 102; //we can write (*s3).rollNumber as s3->rollNumber,,both depicts the same.
    cout << "age of s3: " << s3->getAge() << " & roll number of s3: " << s3->rollNumber << endl;
}
