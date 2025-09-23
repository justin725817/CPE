#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T = 0, N = 0, P = 0, h = 0;
    cin >> T;
    while (T--)
    {
        cin >> N;
        cin >> P;
        vector<int> s(N + 1, 0);
        for (int i = 0; i < P; i++)
        {
            cin >> h;
            for (int j = h; j <= N; j += h)
            {
                s[j] = 1;
            }
        }
        for (int i = 6; i <= N; i += 7)
        {
            s[i] = 0;
        }
        for (int i = 7; i <= N; i += 7)
        {
            s[i] = 0;
        }
        int sum = 0;
        for (int i = 1; i <= N; i++)
        {
            sum += s[i];
        }
        cout << sum << "\n";
    }
    return 0;
}