#include <iostream>
using std::string;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself() //function
    {
        std::cout << "Name- " << Name << std::endl;
        std::cout << "Company- " << Company << std::endl;
        std::cout << "Age- " << Age << std::endl;
    }
    Employee(string name, string company, int age) //constructor
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{

    Employee employee1 = Employee("Rakshit", "Benz", 22);
    employee1.IntroduceYourself(); //function invoking

    Employee employee2 = Employee("Sanajana", "amazon", 22);

    employee2.IntroduceYourself();
}