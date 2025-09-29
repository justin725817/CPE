#include <bits/stdc++.h>
using namespace std;

string s;
vector<string> v;
string word = "";
int num = 0;

void moveList(string w)
{
    v.push_back(v.back());
    for (int i = v.size() - 2; i > 0; i--)
    {
        v[i] = v[i - 1];
    }
    v[0] = w;
}

void printWord()
{
    cout << word;
    if (v.empty())
    {
        v.push_back(word);
    }
    else
    {
        moveList(word);
    }
    word = "0";
}

void printNum()
{
    string w = v[num - 1];
    cout << w;
    for (int i = num - 1; i > 0; i--)
    {
        v[i] = v[i - 1];
    }
    v[0] = w;
    num = 0;
}

int main()
{
    while (getline(cin, s))
    {
        if (s == "0")
        {
            break;
        }
        s += "\n";
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha())
            {
                word += s[i];
            }
            else if (isdigit(s[i]))
            {
                num *= 10; // 累積數字 (可能是多位數)
                num += s[i] - '0';
            }
            else
            {
                if (num)
                    printNum(); // 如果有數字 → 替換單字
                if (word != "")
                    printWord(); // 如果有單字 → 印出並存進清單
                cout << s[i];    // 其他符號照原樣輸出
            }
        }
    }
    return 0;
}