#include <iostream>
using namespace std;

int main(){

//   ex:1
    // int i=1;

    // i=i++ ;
    // cout<<i<<endl;

    int i=1;
    int j=2;
    int k;

    k= i + j + i++ + j++ + ++i + ++j;

    cout<<i<<" "<<j<<" "<<" "<<k<<endl;

}