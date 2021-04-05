#include <iostream>
using namespace std;

//pass by value;
// void increment(int a)
// {
//     a = a + 1;
//     cout << "value 'a' inside function: " << a << endl;
// }

// int main()
// {

//     int a = 10;
//     increment(a);
//     cout << "value 'a' inside main: " << a;
// }

/* in the above code you can see that the value of "a" inside the function and main varies,this is happening because
of the concept called pass by value.
pass by value for the above code ,in main the local variable a is 10; and this goes to the stack of memory.And now when 
you call the increment function another call stack frame is formed in memory,which has its local memory(own set of local
variables) and all the changes made in function are changed in the copy of a. So when you exit from the function memory is
lost and no changes will be made in the main memory. HENCE THE OUTUPUT IN MAIN AND FUNTION VARIES*/

//Pass by pointer
void increment(int *a)
{
    *a = *a + 1;
    cout << "value 'a' inside function: " << *a << endl;
}

int main()
{

    int a = 10;
    increment(&a);

    cout << "value 'a' inside Main: " << a << endl;
}
