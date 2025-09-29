#include <bits/stdc++.h>
using namespace std;

vector<int> primes;

void primeFomula(int n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    primeFomula();
    int N;
    while (cin >> N && N != 0)
    {
        vector<int> cnt(primes.size(), 0);
        for (int i = 0; i < prime.size; i++)
        {
            int p = prime[i];
            int x = N;
            while (x >= p)
            {
                cnt[i] += x / p;
                x /= p;
            }
        }
        cout << setw(3) << N << "! =";
        for (int i = 0; i < primes.size() && primes[i] <= N; i++)
        {
            if (i > 0 && i % 15 == 0)
                cout << "\n      ";
            cout << setw(3) << cnt[i];
        }
        cout << "\n";
    }

    return 0;
}