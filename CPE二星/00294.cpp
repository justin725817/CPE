#include <bits/stdc++.h>
using namespace std;

int Divisors(long long num)
{
    int count = 0;
    for (long long i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
            if (i != num / i)
                count++;
        }
    }
    return count;
}

int main()
{
    int N; // 測資數
    long long L, U;
    cin >> N;
    while (N--)
    {
        cin >> L >> U;
        long long best = 0;
        long long best_value = 0;
        for (int i = L; i <= U; i++)
        {
            if (best < Divisors(i))
            {
                best = Divisors(i);
                best_value = i;
            }
        }
        cout << "Between " << L << " and " << U << ", " << best_value << " has a maximum of " << best << " divisors.\n";
    }
}
