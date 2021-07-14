#include <iostream>
using namespace std;

int main()
{

    int no_rows; //no_rows indicates number of rows to be printed ,we will take input form user.
    cin >> no_rows;
    int row, space, symbol;

    for (row = 1; row <= no_rows; row++)
    {
        //print spaces
        for (space = 1; space <= (no_rows - row); space++) //space = no_rows-row
        {
            cout << " ";
        }

        //printing star
        for (symbol = 1; symbol <= ((2 * row) - 1); symbol++) //symbol=(2*row)-1
        {
            cout << "*";
        }
        cout << endl;
    }
}