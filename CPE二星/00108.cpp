#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    while (cin >> N)
    {
        vector<vector<int>> a(N, vector<int>(N));
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> a[i][j];
            }
        }
        int best = INT_MIN;

        for (int top = 0; top < N; top++)
        {
            vector<int> sum(N, 0);
            for (int bottom = top; bottom < N; bottom++)
            {
                // 壓縮成一維陣列
                for (int col = 0; col < N; col++)
                {
                    sum[col] += a[bottom][col];
                }

                // Kadane 演算法 (最大子陣列和)
                int cur = 0;
                for (int col = 0; col < N; col++)
                {
                    cur = max(sum[col], cur + sum[col]);
                    best = max(best, cur);
                }
            }
        }

        cout << best << "\n";
    }
    return 0;
}