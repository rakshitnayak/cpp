#include <iostream>
#include <climits>
using namespace std;

void profit(int a[], int n)
{
    int profit = 0;
    int min_val = INT_MAX;

    /*  using stl;
    for (int i = 0; i < n; i++)
    {
        min_val = min(min_val, a[i]);
        profit = max(profit, a[i] - min_val); //using stl;
    }
  */

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min_val)
        {
            min_val = a[i];
        }
        if (a[i] - min_val > profit)
        {
            profit = a[i] - min_val;
        }
    }
    cout << profit << endl;
}

int main()
{
    int i, n;
    int a[n];
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    profit(a, n);
}
