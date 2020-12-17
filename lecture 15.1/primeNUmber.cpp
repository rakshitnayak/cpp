#include <iostream>
using namespace std;

//print all prime numbrs using sieve of erathosthnes
//time coplexity: o(nlog log n)
//space complxity:o(n)

void primeSieve(int n)
{
    int prime[100] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    primeSieve(n);
    return 0;
}