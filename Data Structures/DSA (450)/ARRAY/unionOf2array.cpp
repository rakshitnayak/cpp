// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        cin >> m;

        int a[n], b[m];
        unordered_map<int, int> map; //unordered_map is an associated container that stores elements formed by combination of key value and a mapped value. The key value is used to uniquely identify the element and mapped value is the content associated with the key. Both key and value can be of any type predefined or user-defined.

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            map[a[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            map[b[i]]++;
        }
        cout << map.size() << endl;
    }

    return 0;
}

//the above aapproach is linear time complexity