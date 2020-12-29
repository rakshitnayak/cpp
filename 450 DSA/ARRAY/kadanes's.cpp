#include <iostream>
using namespace std;
main()
{
    int i, n;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int currentSum = 0, maximum = INT_MIN;
    for (i = 0; i < n; i++)
    {
        currentSum = currentSum + arr[i];
        if (currentSum < 0)
        {
            currentSum = 0; //if negative it remains still zero
        }
        maximum = max(currentSum, maximum);
    }
    cout << "the maximum value of the subbarray is: " << maximum;
}