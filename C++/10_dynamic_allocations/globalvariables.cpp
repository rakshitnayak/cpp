
#include <iostream>
using namespace std;
#define PI 3.14 // macros,runs before running time.
int main()
{
    int r;
    cin >> r;

    cout << PI * r * r << endl;
}

/*Macros : Macros are a piece of code in a program which is 
given some name.Whenever this name is encountered by the compiler the compiler replaces the name with the actual 
piece of code.The ‘#define ’ directive is used to define a macro.
*/

/* Global variables:

#include <iostream>
using namespace std;
int a = 10; //this is the global variable,which can be accesssed at any function in the program

void g()
{
    a++;
    cout << a << endl;
}
void f()
{
    cout << a << endl;
    a++;
    g();
}

int main()
{
    a = 10;
    f();
    g();
    cout << a << endl;
}
*/

// using global is not a good practice instead pass as a reference..