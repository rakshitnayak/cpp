#include <iostream>
using namespace std;
main()
{
    int i, n;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //------------------left shift ---------------
    // int temp=arr[n-1];
    // for ( i = n-1 ; i > 0 ; i--)
    // {
    //     arr[i]=arr[i-1];

    // }
    // arr[0]=temp;

    //--------------------right shift------------
    int temp = arr[0];
    for (i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
    for (i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}