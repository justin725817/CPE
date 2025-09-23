#include <bits/stdc++.h>
using namespace std;

vector<pair<int, string>> a = {
    {10000000, "kuti"}, {100000, "lakh"}, {1000, "hajar"}, {100, "shata"}};
string ans;
void solve(long long x)
{
    if (x >= a[0].first)
    {
        solve(x / a[0].first);
        ans += " " + a[0].second;
        x %= a[0].first;
    }
    for (int i = 1; i < 4; i++)
    {
        if (x / a[i].first > 0)
        {
            ans += " " + to_string(x / a[i].first) + " " + a[i].second;
            x %= a[i].first;
        }
    }
    if (x > 0)
    {
        ans += " " + to_string(x);
    }
}

int main()
{
    long long num;
    int count = 1;
    while (cin >> num)
    {
        cout << count << ".";
        if (num == 0)
        {
            cout << " 0\n";
        }
        else
        {
            ans.clear();
            solve(num);
            cout << ans << "\n";
        }
        count++;
    }
    return 0;
}