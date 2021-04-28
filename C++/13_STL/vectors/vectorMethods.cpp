#include <iostream>
using namespace std;
#include <vector>

int main()
{

    vector<int> d{1, 2, 3, 4, 5};
    //push_back o(1) for most of the cases
    d.push_back(16);
    for (int x : d)
    {
        cout << x << " ";
    }

    cout << endl;

    //pop back o(1) for most of the cases
    d.pop_back();
    for (int x : d)
    {
        cout << x << " ";
    }
    cout << endl;

    //insert some elements in the middle o(N)
    d.insert(d.begin() + 3, 100); //at 3rd element place 100
    for (int x : d)
    {
        cout << x << " ";
    }
    cout << endl;

    //erase some elements in the middle
    d.erase(d.begin() + 2);
    for (int x : d)
    {
        cout << x << " ";
    }

    cout << endl;

    d.erase(d.begin() + 2, d.begin() + 4);

    for (int x : d)
    {
        cout << x << " ";
    }
    cout << endl;

    //size
    cout << d.size() << endl;
    cout << d.capacity() << endl;

    //remove all the vectors
    d.clear(); //but capactity remains the same,i.e doesn't delete memory occupied by the array.
    for (int x : d)
    {
        cout << x << " ";
    }
    cout << "capacity after d.clear()" << endl;
    cout << d.capacity();

    //d.front() gives front element
    //d.back()  gives the back element
}