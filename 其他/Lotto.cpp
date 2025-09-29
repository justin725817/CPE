#include <bits/stdc++.h>
using namespace std;

int k;
vector<int> S, chosen;

void DFS(int idx, int cnt)
{
    // cnt:已經選了多少個數字。
    // inx:目前考慮到 S[idx] 這個位置
    if (cnt == 6)
    {
        for (int i = 0; i < 6; i++)
        {
            if (i)
            {
                cout << " ";
            }
            cout << chosen[i];
        }
        cout << "\n";
        return;
    }
    for (int i = idx; i < k; i++)
    {
        chosen.push_back(S[i]);
        DFS(i + 1, cnt + 1);
        chosen.pop_back();
    }
}

int main()
{
    bool first = true;
    while (cin >> k && k)
    {
        S.resize(k);
        for (int i = 0; i < k; i++)
        {
            cin >> S[i];
        }
        if (!first)
        {
            cout << "\n";
        }
        first = false;
        DFS(0, 0);
    }
}