#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        sort(s.begin(), s.end());
        int mid1, mid2, ans = 0;
        mid1 = s[(n - 1) / 2];
        mid2 = s[n / 2];
        for (int i = 0; i < n; i++)
        {
            if (s[i] == mid1 || s[i] == mid2)
            {
                ans++;
            }
        }
        cout << mid1 << " " << ans << " " << mid2 - mid1 + 1 << "\n";
    }
    return 0;
}