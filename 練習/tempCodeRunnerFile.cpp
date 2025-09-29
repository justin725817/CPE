#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<int> a;
    while (getline(cin, s))
    {
        a.clear();
        int count = 1;
        int ans = 0;
        if (s == "0")
        {
            break;
        }
        for (int i = 0; i < s.size(); i++)
        {
            a.push_back(s[i] - '0');
            ans += (s[i] - '0');
        }
        if (ans % 9 == 0)
        {
            while (ans != 9)
            {
                int tmp = 0;
                while (ans > 0)
                {
                    tmp += ans % 10;
                    ans / 10;
                }
                ans = tmp;
                count++;
            }

            cout << s << " is a multiple of 9 and has 9-degree " << count << ".\n";
        }
        else
        {

            cout << s << " is not a multiple of 9.\n";
        }
    }
}