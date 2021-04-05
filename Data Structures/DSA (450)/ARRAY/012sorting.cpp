/* the main approach is using dutch national flag algorithm ,in this 
 we will be having three  namely low ,mid and high!  */
/* low=0,mid=0,high=n-1.., now we need to move mid untill it crosses high,
it should satisfy 2 conditons after it crosses high.
1) 0-low elements should be zero
2) high+1 elements shoulld be 2
*/
/*  and should check the below 3 conditions while you move
1)when mid==0, swap mid and low elements also increase their position by 1( i.e,low++ & mid++)
2) when mid==1, only increase mid by 1 position (mid++)
3) when mid==2,swap mid and high and decrease the high position by 1(i.e, high--)
hurray!!! now you will get sorted array of 0's ,1's, and 2's
*/
//c++  program below
/*
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low++], nums[mid++]);
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high--]);
            }
        }
    }
};
*/

// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// function to print the contents of an array
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// Function to sort the array of 0s, 1s and 2s
void sortArr(int arr[], int n)
{
    int i, cnt0 = 0, cnt1 = 0, cnt2 = 0;

    // Count the number of 0s, 1s and 2s in the array
    for (i = 0; i < n; i++)
    {
        switch (arr[i])
        {
        case 0:
            cnt0++;
            break;
        case 1:
            cnt1++;
            break;
        case 2:
            cnt2++;
            break;
        }
    }

    // Update the array
    i = 0;

    // Store all the 0s in the beginning
    while (cnt0 > 0)
    {
        arr[i++] = 0;
        cnt0--;
    }

    // Then all the 1s
    while (cnt1 > 0)
    {
        arr[i++] = 1;
        cnt1--;
    }

    // Finally all the 2s
    while (cnt2 > 0)
    {
        arr[i++] = 2;
        cnt2--;
    }

    // Print the sorted array
    printArr(arr, n);
}

// Driver code
int main()
{
    int arr[] = {0, 2, 2, 1, 2};
    int n = sizeof(arr) / sizeof(int);

    sortArr(arr, n);

    return 0;
}

/*The above approach is  to simply count the number of 0’s, 1’s, and 2’s. 
Then, place all 0’s at the beginning of the array followed by 1’s and 2's.*/
