#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long S, D, cnt;
    while (cin >> S >> D)
    {
        cnt = S;
        D -= S;
        while (D > 0)
        {
            cnt++;
            D -= cnt;
        }
        cout << cnt << "\n";
    }
    return 0;
}