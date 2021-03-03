#include <iostream>
using std::string;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
{
private: //hidden encapsulated
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if (age >= 18)
        {
            Age = age;
        }
    }
    int getAge()
    {
        return Age;
    }
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
    void AskForPromotion()
    {
        if (Age > 30)
        {
            std::cout << Name << " Got prmoted! " << std::endl;
        }
        else
        {
            std::cout << Name << " Not promoted " << std::endl;
        }
    }
};

int main()
{

    Employee employee1 = Employee("Rakshit", "Benz", 32);

    Employee employee2 = Employee("Sanjana", "amazon", 22);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}