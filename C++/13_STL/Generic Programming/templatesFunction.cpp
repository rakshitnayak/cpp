//all the algorithms and containers provided by stl are generic
//generic means they can work with different data types.

#include <iostream>

using namespace std;

template <typename T> //<class T> |both are fine Note:T is a placeholder when function is called of any datatype it will be given to T
int search(T a[], int n, T key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int a[] = {10, 20, 30, 40, 50};
    int n = sizeof(a) / sizeof(int);
    //int key=30;

    float b[] = {1.1, 1.2, 1.3, 1.4};
    // float key = 1.2;

    char arr2[] = {'a', 'b', 'c', 'd'};
    char key = 'c';

    cout << search(arr2, n, key);
}

/* some notes
Templates are powerful features of C++ which allows you to write generic programs. In simple terms, 
you can create a single function or a class to work with different data types using templates.

Templates are often used in larger codebase for the purpose of code reusability and flexibility of the programs.

The concept of templates can be used in two different ways:

-> Function Templates
-> Class Templates */