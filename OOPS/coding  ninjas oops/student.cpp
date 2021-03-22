class student
{
public:
    int rollNumber;

private:
    int age;

public:
    void display()
    {
        cout << age << " " << rollNumber << endl; //we can access the age in the same class if it is private also
    }
    int getAge()
    {
        return age;
    }
    int setAge(int a)
    {
        //we can add som constraints and then return a. hence we make private and make public functions.
        age = a;
    }
};

/*access modifiers are of 3 types
-> Public (we can access outside the class in any programs.)
->Private(accesible only inside the class.) Note: BY DEFAULT it will be private
->Protected */