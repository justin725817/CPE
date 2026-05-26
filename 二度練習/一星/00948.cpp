#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<long long> fib;
    fib.push_back(1);
    fib.push_back(2);
    while (true)
    {
        long long nextFib = fib[fib.size() - 1] + fib[fib.size() - 2];
        if (nextFib > 100000000)
        {
            break;
        }
        fib.push_back(nextFib);
    }

    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << n << " = ";

        bool startPrint = false;

        for (int i = fib.size() - 1; i >= 0; i--)
        {
            if (n >= fib[i])
            {
                cout << "1";
                n -= fib[i];
                startPrint = true;
            }
            else
            {
                if (startPrint == true)
                {
                    cout << "0";
                }
            }
        }
        cout << " (fib)\n";
    }
    return 0;
}