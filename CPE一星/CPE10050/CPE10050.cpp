#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--) // 輸入次數
    {
        int day, num; // 天數、政黨個數
        int rest = 0; // 罷會天
        int party[100] = {0};
        cin >> day >> num;
        for (int i = 0; i < num; i++)
        {
            cin >> party[i];
        }
        for (int i = 1; i <= day; i++)
        {
            if ((i - 6) % 7 == 0 || i % 7 == 0) // 每週的假日(星期五和星期六)不會有任何罷會情形
            {
                continue;
            }
            for (int j = 0; j < num; j++)
            {
                if (i % party[j] == 0)
                {
                    rest++;
                    break;
                }
            }
        }
        cout << rest << endl;
    }
}
