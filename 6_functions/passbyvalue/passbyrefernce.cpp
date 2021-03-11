#include <iostream>
using namespace std;

void multiplyBy10(int &num)
{ // num will contain the reference of the
    // input variable
    num = num * 10;
}

int main()
{
    int x = 10;

    cout << "Before function call" << endl;
    cout << "x: " << x << endl;

    // Multiplying by 10
    multiplyBy10(x);

    cout << "After function call" << endl;
    cout << "x: " << x << endl; // The actual value of x is changed!
}