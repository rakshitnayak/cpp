#include <iostream>
using namespace std;

int main()
{
    // char arr[100]="youtube";
    // int i=0;
    // while(arr[i] != '\0'){
    // cout<<arr[i]<<endl;
    // i++;
    // }

    //check palindrome
    int n;
    cin >> n;
    char arr[n + 1];
    cin >> arr;

    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])//checking if arr[i] is equal when read from reverse direction
        {
            check = 0;
            break;
        }
    }
    if (check == true)
    {
        cout << "word is palindrome"<<endl;
    }
    else
    {
        cout << "word is not palindrome"<<endl;
    }

    return 0;
}