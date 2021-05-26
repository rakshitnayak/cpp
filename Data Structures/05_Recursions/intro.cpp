/*
A function that calls itself repeatedly until some condition is met is known as a recursive function. 
The process whereby a function repeatedly calls itself until a condition is met is known as recursion.


ex:
#include <iostream>

using namespace std;

int ticket_price(int person) {
  int price;
  if (person == 1) {
    price = 100;                 //base case
    return price;
  } 
  else {
    cout << "Person" << person << " is asking price" << endl;
    person--;
    price = ticket_price(person); //recursive function
    cout << "Person" << person << " is telling price" << endl;
    return price;
  }
}

int main() {
  int price;
  price = ticket_price(5);
  cout << "Ticket price = " << price << endl;

}



Why use recursion ? #You might encounter a problem that is too scary.
 the easiest way to solve such problems is to use the divide and conquer rule.

Recursion is a very powerful tool when we can define the problem in terms of itself.
Recursion helps to write shorter code.

We can convert loops into a recursive function. 

//differnce b/w interation and recursion

In the computer language, iteration allows you to repeat a particular set of instructions until the specified condition 
is met. The recursive function allows you to keep calling itself in the function body until some condition is met.

->The sole purpose of iteration and recursion is to achieve repetition. 
->Loops achieve repetition through the repetitive structure, whereas recursion achieves repetition through 
repetitive function calls
->In the computer language, iteration allows you to repeat a particular set of instructions until the specified condition is met. 
->The recursive function allows you to keep calling itself in the function body until some condition is met.

->The sole purpose of iteration and recursion is to achieve repetition. 
Loops achieve repetition through the repetitive structure, whereas recursion achieves repetition through repetitive
 function calls

*/
