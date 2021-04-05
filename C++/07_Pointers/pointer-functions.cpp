#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}

void incrementpointer(int *p)
{
    p = p + 1; //here directly value is getting passed and value changes.
}

void increment(int *p)
{
    (*p)++; //here adress is getting passed and changing the value
}

int sumofarray(int *a, int size) //array can be passed as a pointer.
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans += a[i];
    }
    return ans;
}

int main()
{
    int i = 10;
    int *p = &i;

    print(p);
    cout << p << endl;

    incrementpointer(p);
    cout << p << endl; //no increment in the adress.

    cout << *p << endl;
    increment(p);
    cout << *p << endl; //here we see incremented value

    int a[10] = {3, 6, 8};
    cout << sumofarray(a, 10) << endl;     //array acts as a pointer and prints the sum
    cout << sumofarray(a + 1, 10) << endl; //here we can also part of array.
    return 0;
}