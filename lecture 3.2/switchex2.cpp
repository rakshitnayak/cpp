#include <iostream>
using namespace std;

int main(){

    int n1,n2;
    cout<<"input a two numbers:";
    cin>>n1>>n2;


    char op;
    cout<<"input a operator:";
    cin>>op;

    switch(op)
    {
    case '+':
         cout<<n1+n2<<endl;
    break;
    case '-':
         cout<<n1-n2<<endl;
    break;
    case '*':
          cout<<n1*n2<<endl;
    break;
    case '/':
         cout<<n1 / n2<<endl;
    break;

    default:
    cout<<"Enter + , - , * or /";
    break;


    }
}
