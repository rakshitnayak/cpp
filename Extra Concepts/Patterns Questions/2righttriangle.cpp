#include <iostream>
using namespace std;

int main()
{
    int no_rows; //this is for the number of rows that should be printed.
    cout << "Enter the number of rows: ";

    cin >> no_rows;
    int row, col; //variables for row and column.

    //in star pattern
    /* for (row = 1; row <= no_rows; row++) // this for loop is for to print the rows
    {
        for (col = 1; col <= row; col++) //this for loop is to print the colunmn
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (row = no_rows - 1; row >= 1; row--) // this for loop is for to print the rows
    {
        for (col = 1; col <= row; col++) //this for loop is to print the colunmn
        {
            cout << "* ";
        }
        cout << endl;
    }*/

    //in number pattern
    /*  for (row = 1; row <= no_rows; row++) // this for loop is for to print the rows
    {
        for (col = 1; col <= row; col++) //this for loop is to print the colunmn
        {
            cout << row << col << " "; //prints bot rows and columns
        }
        cout << endl;
    }

    for (row = no_rows - 1; row >= 1; row--) // this for loop is for to print the rows
    {
        for (col = 1; col <= row; col++) //this for loop is to print the colunmn
        {
            cout << row << col << " ";
        }
        cout << endl;
    }*/

    //in alphabet and numerical pattern
    char ch = 65;                        // define asci value for A
    for (row = 1; row <= no_rows; row++) // this for loop is for to print the rows
    {
        for (col = 1; col <= row; col++) //this for loop is to print the colunmn
        {
            cout << ch << " ";
            //printf("%02d ", ch); //while printing the numbers to print 01,02,03, you must specify like this by using c printf an 02d
            ch++;
        }
        cout << endl;
    }

    for (row = no_rows - 1; row >= 1; row--) // this for loop is for to print the rows
    {
        for (col = 1; col <= row; col++) //this for loop is to print the colunmn
        {

            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}