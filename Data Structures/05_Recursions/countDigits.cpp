#include <iostream>
using namespace std;

int count_digits(int number)
{

    if (number == 0)
    {
        return 0; //base function
    }
    else
    {
        return 1 + count_digits(number / 10); //recursive function
    }
}

int main()
{
    int n;
    cin >> n;

    int result = count_digits(n);
    cout << result;

    return 0;
}