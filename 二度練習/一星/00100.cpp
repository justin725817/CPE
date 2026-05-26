#include <bits/stdc++.h>
using namespace std;

int cycleLength(int num);
int maxCycleLength(int num1, int num2);

int main()
{
    int num1, num2;
    while (cin >> num1 >> num2)
    {
        cout << num1 << " " << num2 << " " << maxCycleLength(num1, num2) << endl;
    }
}

int cycleLength(int num)
{
    int count = 1;

    while (num != 1)
    {
        if (num % 2 == 1)
        {
            num = 3 * num + 1;
        }
        else
        {
            num = num / 2;
        }
        count++;
    }
    return count;
}

int maxCycleLength(int num1, int num2)
{
    int maxLen = 0;
    for (int i = min(num1, num2); i < max(num1, num2); i++)
    {
        if (maxLen < cycleLength(i))
        {
            maxLen = cycleLength(i);
        }
    }
    return maxLen;
}
