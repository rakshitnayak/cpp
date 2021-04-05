//memory is allocated into two types. i.e stack and heap. stack memory is less and heap memory big in size.
//if you want to delcare variable sized array that is a[n],you should allocate it in heap.

//in stack make sure you declare the size of array on compile time ,and heap during running time.
// stack memory allocation is static
//heap memory allocation is dynamic
// how dynamic memory allocation is done?

#include <iostream>
using namespace std;

int main()
{
    int *p = new int; //initiating integer in dynamic memory
    *p = 10;
    double *pd = new double;

    char *c = new char; //initiating character in dynamic memory.s
    *c = 'A';

    int *pa = new int[50]; //initating array in dynamic memory ..200 bytes on heap and  bytes on stack (as you are initiating pointer)
    int n;
    cin >> n;

    int *pa2 = new int[n];
    // pa2[0] = 10;
    for (int i = 0; i < n; i++)
    {
        cin >> pa2[i];
    }
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (max < pa2[i])
        {
            max = pa2[i];
        }
    }
    cout << max << endl;
}
//whenever we create dynammic memory allocation we need to delete the memory when not in use
// by delete keyword
// here we are not deleting the pointer ie in the stack of 8 or 4 bytes
// but we are deleting the pointer pointing to the address on the heap ie 4bytes for int

// int *p = new int;
// delete p;

// p = new int; //single element deletion
// delete p;

// p = new int[100]; //array deletion
// delete[] p;

/* while(true){
        int *p=new int;
    }
    while(true){
        int i=10;
    }*/
