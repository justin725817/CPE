#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<vector<int>> squr(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> squr[i][j];
            }
        }
        vector<int> col(n, 0);
        vector<int> row(n, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                row[i] += squr[i][j];
                col[j] += squr[i][j];
            }
        }
        vector<int> oddRow, oddCol;
        for (int i = 0; i < n; i++)
        {
            if (row[i] % 2)
                oddRow.push_back(i + 1);
            if (col[i] % 2)
                oddCol.push_back(i + 1);
        }
        if (oddRow.empty() && oddCol.empty())
        {
            cout << "OK\n";
        }
        else if (oddRow.size() == 1 && oddCol.size() == 1)
        {
            cout << "Change bit (" << oddRow[0] << "," << oddCol[0] << ")\n";
        }
        else
        {
            cout << "Corrupt\n";
        }
    }
}
