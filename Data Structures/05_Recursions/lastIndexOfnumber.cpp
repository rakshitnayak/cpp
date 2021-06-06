#include <iostream>
using namespace std;

int LastIndex(int arr[], int size, int x)
{

    if (size == 0)
    {
        return -1;
    }

    int smallLastIndex = LastIndex(arr + 1, size - 1, x);

    if (smallLastIndex == -1)
    {
        if (arr[0] == x)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    return smallLastIndex + 1;
}

int main()
{
    int n;
    cout << "Enter the size of the array : " << endl;
    cin >> n;

    cout << "Enter the elements in the array: " << endl;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the element you want to find the Last index: " << endl;

    int x;
    cin >> x;

    int result = LastIndex(a, n, x);

    cout << "Last index of the "
         << x
         << " is " << result << endl;
}