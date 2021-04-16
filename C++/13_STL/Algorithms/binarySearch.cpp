#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 30, 30, 40, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;

    // bool present = binary_search(arr, arr + n, key);
    // if (present)
    // {
    //     cout << "element is present";
    // }
    // else
    // {
    //     cout << "element is absent";
    // }

    auto lb = lower_bound(arr, arr + n, key); //lower bound will return first element >=(gretaer than or equal to)key

    cout << "lower bound of " << key << " is " << (lb - arr) << endl;

    auto ub = upper_bound(arr, arr + n, key);
    cout << "upper bound " << key << " is " << (ub - arr) << endl; //upper bound will return first element >(strictly greater than )key

    cout << "occurences frquency of " << key << " are " << (ub - lb) << endl;
    //upper bound -lower bound gives you number of occurences of that particular element
}