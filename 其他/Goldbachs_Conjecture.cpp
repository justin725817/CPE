#include <bits/stdc++.h>
using namespace std;

vector<bool> isPrime(999999, true);
vector<int> primes;

void Euler()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= 999999; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= 999999; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= 999999; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
        }
    }
}

int main()
{
    Euler();
    int n;
    while (cin >> n && n)
    {
        bool found = false;
        for (int a : primes)
        {
            if (a > n)
            {
                break;
            }
            int b = n - a;
            if (b >= 2 && isPrime[b])
            {
                cout << n << " = " << a << " + " << b << "\n";
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Goldbach's conjecture is wrong.\n";
        }
    }
    return 0;
}