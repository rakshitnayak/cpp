#include <iostream>
using namespace std;

// bool isSorted2(int arr[], int size)     //can do this too...
// {
//     if (size == 0 || size == 1)
//     {
//         return true;
//     }

//     bool issmallSorted2 = isSorted2(arr + 1, size - 1);
//     if (!issmallSorted2)
//     {
//         return false;
//     }
//     if (arr[0] > arr[1])
//     {
//         return false;
//     }
//     else
//     {
//         return true;
//     }
// }

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    } //base case

    bool isSmallSorted = isSorted(arr + 1, size - 1);
    return isSmallSorted;

    /* or can write the below code.
    if (isSmallSorted)
    {
        return true;
    }
    else
    {
        return false;
    } **/
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool result = isSorted(arr, n);
    cout << result;
}