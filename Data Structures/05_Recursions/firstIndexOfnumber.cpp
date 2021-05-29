#include <iostream>
using namespace std;

int firstIndex(int arr[], int size, int x)
{
    if (size == 0)
    {
        return -1;
    }
    else if (arr[0] == x)
    {
        return 0;
    }

    int smallFirstIndex = firstIndex(arr + 1, size - 1, x); //recursive calls
    if (smallFirstIndex < 0)
    {
        return -1; //important || if the element is not present in the array,it return -1
    }
    else
    {
        return smallFirstIndex + 1;
    }
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

    cout << "Enter the element you want to find the first index: " << endl;

    int x;
    cin >> x;

    int result = firstIndex(a, n, x);

    cout << "First index of the "
         << x
         << " is " << result << endl;
}