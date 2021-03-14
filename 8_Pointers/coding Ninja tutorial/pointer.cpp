#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    cout << &i << endl; //gives adress in the memory
    int *p = &i;        //A pointer holds the address of an object(int,float,double,string) stored in memory. The pointer then simply “points” to the object.
    cout << p << endl;  //prints adress
    cout << *p << endl; //prints 10

  
    i++;
    cout << i << endl;
    cout << *p << endl;

    return 0;
}