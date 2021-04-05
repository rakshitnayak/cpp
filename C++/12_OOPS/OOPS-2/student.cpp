#include <cstring>

class Student
{
  int age;
  char *name;

public:
  Student(int age, char *name)
  {
    this->age = age;
    //shallow copy :here changes happen in same array instead creating new copy of array.(only copies 1st index of refernce array)
    //this->name = name;

    //deep copy: makes copy of whole new array
    this->name = new char(strlen(name) + 1);
    strcpy(this->name, name);
  }

  void display()
  {
    cout << name << " " << age << endl;
  }
};