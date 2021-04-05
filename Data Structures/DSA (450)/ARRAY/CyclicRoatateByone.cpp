// #include <iostream>
// using namespace std;
// main()
// {
//     int i, n;
//     cin >> n;
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     //--------------------left shift------------
//     // int temp = arr[0];
//     // for (i = 0; i < n; i++)
//     // {
//     //     arr[i] = arr[i + 1];
//     // }
//     // arr[n - 1] = temp;  /// here output for 1,2,3,4,5 will be 2,3,4,5,1

//     //------------------right shift ---------------
//     int temp = arr[n - 1];
//     for (i = n - 1; i > 0; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = temp;

//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

#include <iostream>
using namespace std;

void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];

    arr[n - 1] = temp;
}

void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
        leftRotatebyOne(arr, n);
}

int main()
{
    int n, i, d;
    cin >> n;
    cin >> d;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    leftRotate(arr, d, n);

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}