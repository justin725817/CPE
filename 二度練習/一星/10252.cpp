#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string a, b;
    while (getline(cin, a) && getline(cin, b))
    {
        vector<int> countA(26, 0);
        vector<int> countB(26, 0);
        for (char c : a)
        {
            if (c >= 'a' && c <= 'z')
            {
                countA[c - 'a']++;
            }
        }
        for (char c : b)
        {
            if (c >= 'a' && c <= 'z')
            {
                countB[c - 'a']++;
            }
        }
        for (int i = 0; i < 26; i++)
        {
            int common_count = min(countA[i], countB[i]);
            for (int j = 0; j < common_count; j++)
            {
                cout << (char)('a' + i);
            }
        }
        cout << "\n";
    }
    return 0;
}