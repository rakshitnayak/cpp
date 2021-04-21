#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int arr[] = {20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(int);

    // rotate(arr, arr + 3, arr + size);

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    next_permutation(arr, arr + size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/** C++ Algorithm next_permutation() function is used to reorder the elements in the range [first, last) 
into the next lexicographically greater permutation.

A permutation is specified as each of several possible ways in which a set or number of things 
an be ordered or arranged.It is denoted as N !where N = number of elements in the range. 

Elements are compared using operator < for the first version or 
using the given binary comparison function comp for the second version.**/
