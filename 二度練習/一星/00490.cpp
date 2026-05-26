#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> setences;
    string line;
    int maxLen = 0;

    while (getline(cin, line))
    {
        sentences.push_back(line);
        maxLen = max(maxLen, (int)line.length())
    }

    for (int col = 0; col < max_len; col++)
    {
        for (int row = sentences.size() - 1; row >= 0; row--)
        {
            if (col < sentences[row].length())
            {
                cout << sentences[row][col];
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}