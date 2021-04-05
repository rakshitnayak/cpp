#include <iostream>
#include <algorithm>
using namespace std;

void merge(int a1[], int a2[], int m, int n)
{

    for (int i = 0; i < m; i++)
    {
        // compare current element of a1[] with first element of a2[]
        if (a1[i] > a2[0])
        {
            swap(a1[i], a2[0]);
            int first = a2[0];

            //the algorithm works only if elements are sorted,hence sort the array 2 elements always
            //move a2[0] to its correct position to maintain sorted, order of a2[] --Note: a2[1..n-1] is already sorted
            int k;
            for (k = 1; k < n && a2[k] < first; k++)
            {
                a2[k - 1] = a2[k];
            }

            a2[k - 1] = first;
        }
    }
}

int main()
{

    int m, n;
    cin >> m >> n;
    int a1[m], a2[n];

    for (int i = 0; i < m; i++)
    {
        cin >> a1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> a2[i];
    }

    merge(a1, a2, m, n);

    //printing the merged sorted array

    for (int i = 0; i < m; i++)
    {
        cout << a1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a2[i] << " ";
    }

    return 0;
}

//time complexity is o(n1xm1)
//space complexity is O(1)