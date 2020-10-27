#include <iostream>
using namespace std;

int main(){
    
    char button;
    cout<<"input a button: ";
    cin>>button;

    // if(button=='a'){
    //     cout<<"Hello"<<endl;
    // }
    // else if(button=='b'){
    //     cout<<"Salut"<<endl;
    // }
    // else if(button=='c'){
    //     cout<<"Salve"<<endl;
    // }
    // else if(button=='d'){
    //     cout<<"Zdravstvuyte"<<endl;
    // }
    // else{
    //     cout<<"i dont know other language ,sorry"<<endl;
    // }

     switch(button)
     {
     case 'a':
        cout<<"Hello"<<endl;
         break;
     
     case 'b':
        cout<<"Salut"<<endl;
        break;

     case 'c':
         cout<<"Salve"<<endl;
        break;



     case 'd':
        cout<<"Zdravstvuyte"<<endl;
        break;      
      

      default:
      cout<<"i am still learning ,sorry"<<endl;
      break;

}


    return 0;
}