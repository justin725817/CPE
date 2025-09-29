// 這題不是人在寫的...
#include <iostream>
#include <queue>
#include <vector>
#include <functional>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    while (cin >> n >> m, n)
    {
        int x, y, k;
        cin >> x >> y >> k;

        vector<vector<pair<int, int>>> adj(n + 1);
        for (int i = 0; i < m; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].emplace_back(v, w);
        }

        vector<int> cnt(n + 1, 0);
        priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
        pq.emplace(0LL, x);

        ll answer = -1;
        while (!pq.empty())
        {
            pair<ll, int> temp = pq.top();
            ll d = temp.first;
            int u = temp.second;
            pq.pop();

            cnt[u]++;
            if (u == y && cnt[u] == k)
            {
                answer = d;
                break;
            }
            if (cnt[u] > k)
                continue;

            for (auto &e : adj[u])
            {
                int v = e.first, w = e.second;
                pq.emplace(d + w, v);
            }
        }

        cout << answer << "\n";
    }

    return 0;
}