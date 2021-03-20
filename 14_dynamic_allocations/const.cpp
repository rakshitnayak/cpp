#include <iostream>
using namespace std;

int main()
{
    /*const integer */
    const int i = 10; //if you asssign const ,,you cannot change it again later at any point.
    //const int i;
    //i=12;   ,you cannot initialze later ,need to assign value there itself at point of const.

    /*constant refernece from non constant integer*/
    int j = 12;
    const int &k = j;
    //k++; i can't do k++ because it is a constant reference.
    j++;
    cout << k << endl;

    //constant reference from a const int
    int const j2 = 12;
    int const &k2 = j2;

    //reference from a const int
    int const j3 = 123;
    //int &k3 = j3; //we can't do this.
}