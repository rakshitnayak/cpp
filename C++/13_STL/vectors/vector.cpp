#include <iostream>
#include <vector>
using namespace std;

int main()
{

    //creating and initialising vectors
    vector<int> a;
    vector<int> b(5, 10);              //5 value with value 10; ||pretty usefull while creating int with zeroes (n,0)
    vector<int> c(b.begin(), b.end()); //copies all element from b ;
    vector<int> d{1, 2, 3, 4, 5};

    //how to iterate?
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << ",";
    }
    cout << endl;

    //using iterator
    for (auto it = b.begin(); it != b.end(); it++) //auto can also be written as vector<int>::iterator
    {
        cout << (*it) << ",";
    }
    cout << endl;

    //using forEach loop
    for (int x : d) //int x that lies in d;
    {
        cout << x << ",";
    }
    cout << endl;

    //taking input and adding them to vectors.
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;

        v.push_back(no); // pushes the elements at the end of the array.
    }

    for (int x : v)
    {
        cout << x << " ";
    }
}