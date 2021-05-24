#include <iostream>

using namespace std;

// Structure Account
struct Account
{
    // Stores the name
    string name;
    // Stores the account number
    int number;
    // Stores the total amount
    double balance;
};

// Function check_account
void check_account(struct Account p[], int arr[], int size)
{
    // Traverse array
    for (int i = 0; i < size; i++)
    {
        // Check if balance less than 500
        if (p[i].balance < 500)
        {
            // Store account number
            arr[i] = p[i].number;
        }
        else
        {
            // Store -1
            arr[i] = -1;
        }
    }
}

// print_arr function
void print_arr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

// print_Account function
void print_Account(struct Account p[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Person" << i + 1 << " details:" << endl;
        cout << p[i].name << endl;
        cout << p[i].number << endl;
        cout << p[i].balance << endl;
        cout << endl;
    }
}

// main function
int main()
{
    // Declare array of type int
    int arr[3];
    // Declare structure array
    struct Account p[3];
    // Intialize structure array
    p[0] = {"John", 578328, 890};
    p[1] = {"Alex", 908210, 430.2};
    p[2] = {"Kim", 165216, 98.5};
    // Call print_Account function
    print_Account(p, 3);
    // Call check_account function
    check_account(p, arr, 3);
    // Call print_arr function
    print_arr(arr, 3);

    return 0;
}