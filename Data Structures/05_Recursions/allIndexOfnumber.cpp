#include <iostream>
using namespace std;

int allIndexes(int arr[], int size, int x, int out[])
{

    if (size == 0)
    {
        return 0;
    }

    int ans = allIndexes(arr + 1, size - 1, x, out);

    //updation of each value by 1.
    for (int i = ans - 1; i >= 0; i--)
    {
        out[i] += 1;
    }

    if (arr[0] == x)
    {
        for (int i = ans - 1; i >= 0; i--)
        {
            out[i + 1] = out[i]; //shifting elements to right by 1.
        }

        out[0] = 0;
        ans += 1;
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array : " << endl;
    cin >> n;

    cout << "Enter the elements in the array: " << endl;
    int a[n], out[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the element you want to find all indexes: " << endl;

    int x;
    cin >> x;

    int result = allIndexes(a, n, x, out);

    cout << "all indexes of the "
         << x
         << " is " << result << endl;
}