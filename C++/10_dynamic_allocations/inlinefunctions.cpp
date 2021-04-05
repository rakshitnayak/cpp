#include <iostream>
using namespace std;

inline int max(int a, int b) //write inline to declare inline function.
{
    return (a > b) ? a : b; //called as tertiary operator..."? for true" and ": for false."
}

int main()
{
    int a = 40, b = 20;
    cout << "maximum number is: " << endl;
    cout << max(a, b) << endl; //what inline is doing is the function body is copied at this line, this will be done by the compiler because of this code is readable and also not going out of the main()

    int x = 23, y = 79;
    cout << max(x, y) << endl;
}

//use inline whenever we have very small function