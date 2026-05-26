#include <bits/stdc++.h>
using namespace std;

void initFingerMap(map<char, vector<int>> &fingerMap)
{
    fingerMap['c'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1};
    fingerMap['d'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    fingerMap['e'] = {0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    fingerMap['f'] = {0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    fingerMap['g'] = {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    fingerMap['a'] = {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    fingerMap['b'] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    fingerMap['C'] = {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
    fingerMap['D'] = {0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0};
    fingerMap['E'] = {0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0};
    fingerMap['F'] = {0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    fingerMap['G'] = {0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0};
    fingerMap['A'] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0};
    fingerMap['B'] = {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
}

void slove()
{
    map<char, vector<int>> fingerMap;
    initFingerMap(fingerMap);
    int T;
    cin >> T;
    string dummy;
    getline(cin, dummy);
    while (T--)
    {
        string song;
        getline(cin, song);
        vector<int> pressCount(11, 0);
        vector<int> lastState(11, 0);

        for (char note : song)
        {
            vector<int> currentState = fingerMap[note];
            for (int f = 1; f < 10; f++)
            {
                if (currentState[f] == 1 && lastState[f] == 0)
                {
                    pressCount[f]++;
                }
            }
            lastState = currentState;
        }
        for (int f = 1; f <= 10; f++)
        {
            cout << pressCount[f] << (f == 10 ? "" : " ");
        }
        cout << "\n";
    }
}

int main()
{
    slove();
    return 0;
}