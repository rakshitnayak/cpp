#include <iostream>
using namespace std;

int secondMinimum(int arr[], int size)
{
    int min = 214748364;
    int secondmin = 214748364;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            secondmin = min;
            min = arr[i];
        }
        else if (arr[i] < secondmin)
        {
            secondmin = arr[i];
        }
    }
    return secondmin;
}

int main()
{
    int size = 5;
    int arr[size] = {1, 3, 5, 7, 2};

    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    int secondmin = secondMinimum(arr, size);

    cout << "\nSecond minimum in array: " << secondmin << endl;
}