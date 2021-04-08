#include <iostream>

using namespace std;

void addZero(int a[], int index, int n)
{
    int curr = 0, next;
    for (int i = index; i < n; i++)
    {
        next = a[i];
        a[i] = curr;
        curr = next;
    }
}

void duplicateZeroes(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            addZero(a, i + 1, n);
            i++;
        }
    }
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

    duplicateZeroes(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}