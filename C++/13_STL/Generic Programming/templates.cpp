#include <iostream>

using namespace std;

template <typename T> //<class T> |both are fine
int search(T a[], int n, T key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return 0;
}

int main()
{

    int a[] = {10, 20, 30, 40, 50};
    int n = sizeof(a) / sizeof(int);
    // int key = 30;

    float b[] = {1.1, 1.2, 1.3, 1.4};
    // float key = 1.2;

    cout << search(b, n, key);
}