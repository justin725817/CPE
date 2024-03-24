#include <bits/stdc++.h>
using namespace std;
int s[30000];
void bubbleSort(int num) // 氣泡排序
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (s[j] < s[j - 1])
            {
                swap(s[j], s[j - 1]);
            }
        }
    }
}
int main()
{
    int N;
    cin >> N;
    while (N--)
    {
        int num;
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            cin >> s[i];
        }
        bubbleSort(num);
        int range = 0; // 中位數
        for (int i = 0; i < num; i++)
        {
            range += abs(s[((num + 1) / 2) - 1] - s[i]); // 計算排序後中位數與其他的距離和
        }
        cout << range << endl;
    }
    return 0;
}