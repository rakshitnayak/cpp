#include <iostream>
using namespace std;
#include "complex.cpp"

int main()
{

    Complex c1(3, 5);
    Complex c2(10, 3);

    cout << "Values Before : " << endl;
    c1.print();
    c2.print();

    int choice;
    cout << "Enter the choice: " << endl;
    cin >> choice;

    if (choice == 1)
    {
        c1.plus(c2);
    }
    else
    {
        c1.multiply(c2);
    }

    cout << "Values After: " << endl;

    c1.print();
    c2.print();
}
