#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

int main()
{
    int n, m;
    int count = 1;
    while (cin >> n >> m)
    {
        vector<vector<char>> a(n, vector<char>(m));
        if (n == 0 && m == 0)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        vector<vector<int>> b(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == '*')
                {
                    b[i][j] = -1;
                }
                else
                {
                    for (int k = 0; k < 8; k++)
                    {
                        int x = i + dx[k];
                        int y = j + dy[k];
                        if (x >= 0 && x < n && y >= 0 && y < m && a[x][y] == '*')
                        {
                            b[i][j]++;
                        }
                    }
                }
            }
        }
        cout << "Field #" << count++ << ":\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (b[i][j] == -1)
                {
                    cout << '*';
                }
                else
                {
                    cout << b[i][j];
                }
            }
            cout << "\n";
        }
    }

    return 0;
}