#include <iostream>
using namespace std;

//program to add two different matrix

int main()
{

    int A[2][2];
    int B[2][2];
    int addition[2][2];

    cout << "Enter the values of 2-D array A: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter the values of 2-D array B: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            addition[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Values of addition array are: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << addition[i][j] << " ";
        }
        cout << endl;
    }
}