#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the " << n << " Elements"
         << " in the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "Sorted array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Now enter the kth largest number in sorted array :" << endl;
    int k;
    cin >> k;
    cout << arr[n - k] << " is the kth largest element in the array";
    return 0;
}

/* this can also be done with stl ,heap,and quicksort! refer leetcode"*/
//time complexity is O(n^2),this can be done with less runtime using heap and stuff