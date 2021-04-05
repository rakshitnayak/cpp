#include <iostream>
using namespace std;

int sum(int a, int b, int c = 0) //int c=0 is default argument ...so below whenever calling function you can equal it to zero.
{
    return a + b + c;
}

int main()
{
    //if in above sum function if you only pass int c;
    // int k=sum(5,4);//gives an error it must and should have 3 arguments.

    int k = sum(5, 4); //here i can pass  nly two arguments ,you should declare right most value as default.
    //to set default argument you should equal it to zero.
    cout << k << endl;
}