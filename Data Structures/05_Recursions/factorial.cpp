//using recursions.
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1; //if you don't specify this,you will get a  segmentation fault.
    }
    else
    {
        return factorial(n - 1) * n;
    }
}

int main()
{
    int n;
    cin >> n;
    int output = factorial(n);
    cout << output << endl;

    return 0;
}