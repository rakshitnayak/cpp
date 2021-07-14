#include <iostream>
using namespace std;

int main()
{

    int no_rows;
    cin >> no_rows;

    int row, space, col;
    for (row = 1; row <= no_rows; row++)
    {

        //for printing space
        for (space = 1; space <= (no_rows - row); space++)
        {
            cout << " ";
        }

        //for printing stars in every row
        for (col = 1; col <= row; col++)
        {
            cout << col << " ";
        }

        cout << endl;
    }
}