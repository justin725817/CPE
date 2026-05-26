#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int T;
    cin >> T;

    string dummy;
    getline(cin, dummy); // del

    map<string, int> countries;
    string conquests;
    for (int i = 0; i < T; i++)
    {
        cin >> conquests;
        getline(cin, dummy);
        countries[conquests]++;
    }
    for (auto const &[countryName, nameCount] : countries)
    {
        cout << countryName << " " << nameCount << "\n";
    }
}

int main()
{
    solve();
    return 0;
}