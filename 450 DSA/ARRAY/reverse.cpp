#include <iostream>
using namespace std;
main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The reversed array is: " << endl;
    for (i = n - 1; i >= 0; i--)
    {

        cout << arr[i] << " ";
    }
}