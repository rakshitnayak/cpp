#include <iostream>
using namespace std;

int main()
{

    // declaration
    int n, m;
    cin >> n >> m;
    int arr[n][m];

    // taking input

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    //printing output
    cout << "Matrix is :\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n"; //to print each row
    }

    int x;
    cin >> x;

    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i<<" "<<j<<"\n";
                flag = true;
            }
        }
    }

    if (flag)
    {
        cout << "Element is found";
    }
    else
    {
        cout << "Element is not found";
    }
}