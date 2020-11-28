#include <iostream>
using namespace std;

int main()
{    
    //uderstanding pointers
    // int a = 10;
    // int *aptr = &a; // & gives adress of the variable

    // cout << &a << endl;
    // cout << *aptr << endl;
    // *aptr = 20; //here i altered the pointer variable
    // cout << a << endl;

    //pointers arithmetic
    // int a=10;
    // int*aptr=&a;
    // cout<<aptr<<endl;

    // aptr++;
    // cout<<aptr<<endl; //when int is incremented it increases by 4 bytes as it takes 4 bytes! whreas char takes 1 bytes


    //pointers arrays
    int arr[]={10,20,30};
    cout<<*arr<<endl;

    int *ptr=arr;
    for(int i=0; i<3; i++){
        cout<<*ptr<<endl;
        ptr++; //moves from one byte to another i.e 10=>20=>30
    }
    

    // int *ptr=arr;
    // for(int i=0; i<3; i++){
    //     cout<<*(arr+i)<<endl;//using *arr to print array
    // }

    return 0;
}