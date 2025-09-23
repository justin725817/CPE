#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second > b.second;
    }
}
int main()
{
    string s;
    while (getline(cin, s))
    {
        vector<pair<int, int>> a(256);
        for (int i = 0; i < 256; i++)
        {
            a[i] = {0, i};
        }
        for (int i = 0; i < s.size(); i++)
        {
            a[(int)s[i]].first++;
        }
        sort(a.begin(), a.end(), cmp);
        for (auto k : a)
        {
            if (k.first != 0)
            {
                cout << k.second << " " << k.first << "\n";
            }
        }
    }
}