#include <iostream>
using namespace std;

int sumAllOdds(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        { // checks if number is odd
            sum += arr[i];
        }
    }
    return sum;
}

int main()
{
    int size = 7;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7};

    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int sum = sumAllOdds(arr, size);
    cout << "\nSum of all odd elements in an array: " << sum << endl;
}