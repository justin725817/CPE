#include <bits/stdc++.h>
using namespace std;

int func(string s, int count)
{
    int temp = 0, total = 0;
    for (int i = 0; i < s.size(); i++)
    {
        temp = s[i] - '0';
        total += temp;
    }
    count++;
    if (total == 9)
    {
        return count;
    }
    else if (total < 9)
    {
        return 0;
    }
    else
    {
        return func(to_string(total), count);
    }
}
int main()
{
    string s;
    int ans;
    while (cin >> s)
    {
        if (s == "0")
        {
            break;
        }
        ans = func(s, 0);
        if (ans == 0)
        {
            cout << s << " is not a multiple of 9.\n";
        }
        else
        {
            cout << s << " is a multiple of 9 and has 9-degree " << ans << ".\n";
        }
    }
}