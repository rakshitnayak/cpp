#include <iostream>
using namespace std;

// void increment(int n) if we pass only n...the i wont increment because different memory is alocated.
// {
//     n++;
// }
void increment(int &n) //if we pass &n...same memory will be allocated..hence the value changes when incremented.
{
    n++;
}
int main()
{
    int i = 10;
    increment(i);

    cout << i << endl;
}