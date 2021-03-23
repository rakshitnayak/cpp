#include <iostream>
using namespace std;
#include "student.cpp"

int main()
{

    student s1;
    student *s2 = new student;

    s1.setAge(24);
    s2->setAge(29);

    s1.display();
    s2->display();
}

//what exactly happens when we call student s1, ?
//ans: internally s1.student(); function gets called which is not visible to us.
//this special function is called as default constructor.
/** 
this default constructor has same name as class!, No return type, no input arguments.
Note:each and every class initializes deefault constructor.
**/