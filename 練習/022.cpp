#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<int> ans;
        bool boring = false;
        if (n == 0 && m == 0)
        {
            boring = true;
        }
        else
        {
            ans.push_back(n);
            while (n > 1)
            {
                if (n % m ==)
                {
                    n /= m;
                    ans.push_back(n);
                }
                else
                {
                    boring = true;
                    break;
                }
            }
        }
        if (boring)
        {
            cout << "Boring!\n";
        }
        else
        {
            for (auto i : ans)
            {
                cout << i << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}