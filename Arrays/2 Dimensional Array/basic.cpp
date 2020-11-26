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
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    //printing output
    cout << "Matrix is :\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n"; //to print each row
    }
}