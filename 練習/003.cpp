#include <bits/stdc++.h>
using namespace std;

string s;
int cnt;
int main()
{
    while (getline(cin, s))
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '\"')
            {
                if (cnt % 2 == 0)
                {
                    cout << "``";
                }
                else
                {
                    cout << "''";
                }
                cnt++;
            }
            else
            {
                cout << s[i];
            }
        }
        cout << "\n";
    }
    return 0;
}