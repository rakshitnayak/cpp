#include <iostream>
using namespace std;
//array behaves like pointers.
int main()
{
    int a[10];
    cout << a << endl;
    cout << &a[0] << endl; //both a and &a[0] gives adress of array

    a[0] = 5;
    a[1] = 15;
    cout << *(a + 1) << endl; //*(a+i) gives element in the array.which is dereferencing adress to get actual integer

    int *p = &a[0];
    cout << p << endl;
    cout << a << endl;
    cout << &a << endl;
    cout << &p << endl; //new pointer adress.

    cout << sizeof(p) << endl;
    cout << sizeof(a) << endl;
    return 0;
}