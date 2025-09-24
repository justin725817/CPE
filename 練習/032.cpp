#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    map<char, vector<int>> mp;
    mp['c'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1};
    mp['d'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['e'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['f'] = {0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['g'] = {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['a'] = {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['b'] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    mp['C'] = {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['D'] = {0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    mp['E'] = {0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    mp['F'] = {0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    mp['G'] = {0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    mp['A'] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    mp['B'] = {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};

    int t;
    string s;
    cin >> t;
    getline(cin, s); // clear buffer
    while (t--)
    {
        getline(cin, s);
        int cnt[11] = {0}; // 手指按下次數
        int a[11] = {0};   // 手指status
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = 1; j <= 10; j++)
            {
                if (mp[s[i]][j])
                {
                    if (a[j])
                        continue;
                    else
                    {
                        a[j] = 1;
                        cnt[j]++;
                    }
                }
                else
                {
                    a[j] = 0;
                }
            }
        }
        for (int i = 1; i <= 10; i++)
        {
            cout << cnt[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}