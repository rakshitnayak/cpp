#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    } //two base cases.

    int small1 = fibonacci(n - 1);
    int small2 = fibonacci(n - 2); //two recursive calls... check coding ninjas video of recursions for deep understanding.

    return small1 + small2;
}

int main()
{
    int n;
    cin >> n;

    int result = fibonacci(n);
    cout << result << endl;
}