#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        int count = 1;
        int ans = 0;
        if (s == "0")
        {
            break;
        }

        // 計算初始數字和
        for (int i = 0; i < s.size(); i++)
        {
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
                    ans /= 10; // ★ 這裡修正
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
