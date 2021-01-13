#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    student()
    {
        cout << "Default constructor" << endl;
    } //default constructor

    student(string s, int a, int g)
    {
        cout << "Parameterised constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } //parameterised constructor

    student(student &a)
    {
        cout << "Copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    void printInfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};

int main()
{
    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cin >> s;
    //     arr[i].setName(s);
    //     cin >> arr[i].age;
    //     cin >> arr[i].gender;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }

    student a("urvi", 20, 1);
    student b;
    student c = a;

    return 0;
}