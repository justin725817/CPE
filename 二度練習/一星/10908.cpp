#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve()
{
    int M, N, Q;
    cin >> M >> N >> Q;
    cout << M << " " << N << " " << Q << "\n";

    vector<string> grid(M);
    for (int i = 0; i < M; i++)
    {
        cin >> grid[i];
    }

    while (Q--)
    {
        int r, c;
        cin >> r >> c;

        char center_char = grid[r][c];
        int len = 0; // len 代表向外擴展的半徑
        bool valid = true;

        // 當目前半徑合法時，嘗試往下一層半徑擴展
        while (valid)
        {
            int next_len = len + 1;

            // 計算新一圈的邊界
            int top = r - next_len;
            int bottom = r + next_len;
            int left = c - next_len;
            int right = c + next_len;

            // 1. 檢查是否超出網格邊界
            if (top < 0 || bottom >= M || left < 0 || right >= N)
            {
                break;
            }

            // 2. 檢查新擴展的那一圈字元是否都相同
            // 檢查上、下兩橫排
            for (int j = left; j <= right; j++)
            {
                if (grid[top][j] != center_char || grid[bottom][j] != center_char)
                {
                    valid = false;
                    break;
                }
            }
            if (!valid)
                break;

            // 檢查左、右兩直線
            for (int i = top; i <= bottom; i++)
            {
                if (grid[i][left] != center_char || grid[i][right] != center_char)
                {
                    valid = false;
                    break;
                }
            }

            // 如果這一圈完全合格，半徑更新
            if (valid)
            {
                len = next_len;
            }
        }

        // 最大正方形邊長為 2 * len + 1
        cout << 2 * len + 1 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (cin >> T)
    {
        while (T--)
        {
            solve();
        }
    }
    return 0;
}