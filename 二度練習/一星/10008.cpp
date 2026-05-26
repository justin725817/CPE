#include <bits/stdc++.h>
using namespace std;

struct Letter
{
    char name;
    int count;
};

bool cmp(const Letter &a, const Letter &b)
{
    if (a.name != b.name)
    {
        return a.count > b.count;
    }
    else
    {
        return a.name < b.name;
    }
}

int main()
{

    int n;
    if (!(cin >> n))
    {
        return 0;
    }
    string dummy;
    getline(cin, dummy); // 消除換行

    int counts[26] = {0};

    for (int i = 0; i < n; i++)
    {
        string line;
        getline(cin, line);
        for (char c : line)
        {
            if (isalpha(c))
            {
                char upLine = toupper(c);
                counts[upLine - 'A']++;
            }
        }
    }

    vector<Letter> result;
    for (int i = 0; i < 26; i++)
    {
        if (counts[i] > 0)
        {
            result.push_back({(char)('A' + i), counts[i]});
        }
    }

    // 進行排序
    sort(result.begin(), result.end(), cmp);

    for (const auto &item : result)
    {
        cout << item.name << " " << item.count << "\n";
    }
    return 0;
}
