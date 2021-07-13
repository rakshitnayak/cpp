#include <iostream>
using namespace std;

int main()
{
    int no_rows; //this is for the number of rows that should be printed.
    cout << "Enter the number of rows: ";

    cin >> no_rows;
    int row, col; //variables for row and column.

    for (row = 1; row <= no_rows; row++) // this for loop is for to print the rows
    {
        for (col = 1; col <= row; col++) //this for loop is to print the colunmn
        {
            // cout << "* ";       //for printing stars.
            cout << row << " "; //for printing row numbers ,similarly column write col
        }
        cout << endl;
    }

    //for inverted right angle triangle
    /*  for (row = no_rows; row >= 1; row--) // this for loop is for to print the rows
    {
        for (col = 1; col <= row; col++) //this for loop is to print the colunmn
        {
            cout << "* ";
        }
        cout << endl;
    }*/

    return 0;
}