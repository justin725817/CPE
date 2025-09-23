#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int r = 0; // 親戚數目
        int ans = 0;
        cin >> r;
        vector<int> s(r);
        for (int i = 0; i < r; i++)
        {
            cin >> s[i];
        }
        sort(s.begin(), s.end());
        for (int i = 0; i < r; i++)
        {
            ans += (abs(s[i] - s[r / 2]));
        }
        cout << ans << "\n";
    }
}