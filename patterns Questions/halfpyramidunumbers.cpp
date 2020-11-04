#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

   
    // 1
    // 22
    // 333
    // output

    // for(int i=1; i<=n; i++){
    //     for (int j=1;j<=i;j++){
    //          cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }

     
    // flyods triangle
    int count=1;
    for(int i=1; i<=n; i++){
        for (int j=1;j<=i;j++){
             cout<<count<<" ";
             count++;
        }
        cout<<endl;
    }
    



}

// half pyramid using numbers and flyods triangle pattern