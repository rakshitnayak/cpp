#include <iostream>

using namespace std;
int main()
{

    //dataType arrayname[rows][column]

    int myarr0[5][5]; //declaration

    //declaration +initialization
    int myarr1[2][2] = {1, 2, 3, 4};
    int myarr2[3][3] = {{1, 2, 3},  //1st row
                        {2, 2, 2},  //2nd row
                        {3, 3, 3}}; //3rd row

    //inorder to iterate through 2d matrix we need to write two loops
    for (int i = 0; i < 3; i++)
    { //this for loop will run for the rows
        for (int j = 0; j < 3; j++)
        {
            cout << myarr2[i][j] << " ";
        }
        cout << endl; //it wil print the second row i=on the next line.
    }

    //taking inputs from user and printing
    int m, n;
    cout << "Enter the number of rows and columns : ";
    cin >> m >> n;

    cout << "Enter the matrix elements: ";
    int myarr3[m][n];
    for (int i = 0; i < m; i++)
    { //this for loop will run for the rows
        for (int j = 0; j < n; j++)
        {
            cin >> myarr3[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++)
    { //this for loop will run for the rows
        for (int j = 0; j < n; j++)
        {
            cout << myarr3[i][j] << " ";
        }
        cout << endl; //it wil print the second row i=on the next line.
    }
}