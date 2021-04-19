#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    cout << "comparing " << a << " and " << b << endl;

    return a > b; //note : if a<b it prints lower to greater
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //sorting an array using sort() function.,more effecient .

    //sort(a, a + n); //uses two parameters,start and end. here end would be a+n; (lower to greater) or
    //sort(a,a+n,compare);//in compare we must return a<b;

    /* if we need to print the order from greater to lower we can use compare function as below*/
    sort(a, a + n, compare); //compare function as a parameter to sort function.

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
