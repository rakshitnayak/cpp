#include <iostream>
using namespace std;

bool ispowerof2(int n)
{
    return (n && !(n & n - 1)); //here n&& is corner case when n=0...where it returns false
}

int main()
{
    cout << ispowerof2(16) << endl;
    return 0;
}