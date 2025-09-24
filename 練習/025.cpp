#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[] = {
        "~!@#$%^&*()_+",
        "`1234567890-=",
        "qwertyuiop[]\\",
        "asdfghjkl;'",
        "zxcvbnm,./"};

    map<char, char> mp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 2; j < s[i].size(); j++)
        {
            mp[s[i][j]] = s[i][j - 2];
        }
    }

    string S;
    while (getline(cin, S))
    {
        for (int i = 0; i < S.size(); i++)
        {
            if (S[i] == ' ')
                cout << " ";
            else
                cout << mp[S[i]];
        }
        cout << "\n";
    }
    return 0;
}