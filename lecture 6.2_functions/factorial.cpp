#include <iostream>
using namespace std;


int fact(int n){
    int factorial=1;

    for(int i=2; i<=n; i++){
        cout<<factorial<<endl;
        factorial=factorial*i;
    
    }
    return factorial;
}

int main(){

    int n;
    cin>>n;

    int ans=fact(n);
    cout<<"The factorial is "<<ans<<endl;
    return 0;
}