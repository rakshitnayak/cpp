#include <iostream>
using namespace std;

int power(int base, int exponent)
{
    if (exponent == 0)
    {
        return 1; ///base case
    }
    else
    {
        return base * power(base, exponent - 1); //recursive function
    }
}

int main()
{
    int base, exponent;
    cin >> base >> exponent;

    int result = power(base, exponent);
    cout << result;
}