#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct CharFreq
{
    int ascii;
    int count;
};

bool compareChar(const CharFreq &a, const CharFreq &b)
{
    if (a.count != b.count)
    {
        return a.count < b.count;
    }
    return a.ascii > b.ascii;
}

int main()
{
    string line;
    bool first_case = true;

    while (getline(cin, line))
    {

        if (!first_case)
        {
            cout << endl;
        }
        first_case = false;

        int counts[256] = {0};
        for (char c : line)
        {

            counts[(unsigned char)c]++;
        }

        vector<CharFreq> vec;
        for (int i = 0; i < 256; i++)
        {
            if (counts[i] > 0)
            {
                vec.push_back({i, counts[i]});
            }
        }

        sort(vec.begin(), vec.end(), compareChar);

        for (const auto &item : vec)
        {
            cout << item.ascii << " " << item.count << endl;
        }
    }

    return 0;
}