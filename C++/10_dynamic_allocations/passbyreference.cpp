#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    // int j = i;
    i++; // if incremented i++ ,only i will change. J will not change.
    cout << i << endl;

    //so to avoid j being printed same value. we will declare j as refernce value i.e,
    int &j = i;
    cout << j << endl; //same memory will be allocated for j also when we pass by reference value.
    j++;
    cout << i << endl; //i will also change when we increment j,because both have same memory location.

    int k = 100; //when called k =100, and j=k..now both j and i value will become 100, because i & j has same memory.
    j = k;
    cout << j << endl;
    cout << i << endl;
    return 0;

    //make sure while declaring refernce value. you cannot breakdown initialization into two steps.
    //.i.e you cannot declare
    //int &j
    //j=i;
}