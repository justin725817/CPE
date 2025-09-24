#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    string s;
    getline(cin, s);
    while (n--)
    {
        getline(cin, s);
        stringstream ss(s);
        getline(ss, s, ' ');
        mp[s]++;
    }
    for (auto j : mp)
    {
        cout << j.first << " " << j.second << "\n";
    }
    return 0;
}