#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0); //if n position and left  shift position is not equal to zero than return 1
}

int main()
{

    cout << getBit(8, 2) << endl;
    return 0;
}