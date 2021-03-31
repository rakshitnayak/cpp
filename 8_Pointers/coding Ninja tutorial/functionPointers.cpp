#include <iostream>
using namespace std;

int sum(int x, int y)
{
    return x + y;
}

int main()
{

    int (*ptr)(int, int) = sum; //declare and initialization of function pointers.
    //note: function pointer syntax is returntype (*pointer_name)(argument_list)

    int result = (*ptr)(10, 14); //this is the functin call in function pointers.

    cout << result << endl;
}

// int issquare(int n)
// {
//     return n * n;
// }

// double doubleSquare(double m)
// {
//     return (m * m);
// }

// int main()
// {

//     int (*ptr1)(int) = issquare;

//     int x = 4;
//     int a = (*ptr1)(x);
//     cout << a << endl;

//     double (*ptr2)(double) = doubleSquare;

//     int b = (*ptr2)(6.2);
//     cout << b << endl;
// }