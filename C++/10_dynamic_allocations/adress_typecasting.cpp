#include <iostream>
using namespace std;
int main()
{
    int i = 65;
    char c = i; // converting one type of data into anaother type...i.e converting can be name as casting. also called as implicit type casting.
    cout << c << endl;

    int *p = &i;
    char *pc = (char *)p; //explicit type casting.

    cout << p << endl;  //gives adress
    cout << pc << endl; //prints asci value "A"..i.e of 65.

    cout << *p << endl;  //prints 65
    cout << *pc << endl; //prints asci value A
    cout << *(pc + 1) << endl;
    cout << *(pc + 2) << endl;
    cout << *(pc + 3) << endl;
}