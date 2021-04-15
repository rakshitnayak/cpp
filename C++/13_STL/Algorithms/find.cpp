#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {
        10,
        20,
        30,
        40,
        50,
    };
    int n = sizeof(arr) / sizeof(int);

    int key;
    cin >> key;

    auto it = find(arr, arr + n, key);
    //cout << it << endl; //it gives you adress,so to get array index write the below code.

    int index = it - arr; //it is the found array adress - base array(arr) which is a pointer. so in c++ substraction of 2 pointer gives you index(number of locations ).
    if (index == n)
    {
        cout << key << " not present";
    }
    else
    {
        cout << "index number is " << index;
    }
}
