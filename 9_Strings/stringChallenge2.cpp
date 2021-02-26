#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//form a greater number

int main()
{

    string s = "593062351";

    sort(s.begin(), s.end(), greater<int>());

    cout << s << endl;
}