#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;             // 序列長度
    bool temp = false; // 判斷是否Jolly
    cin >> N;
    int Jolly[N] = {0}; // 序列
    for (int i = 0; i < N; i++)
    {
        cin >> Jolly[i];
    }

    for (int i = 0; i < N - 1; i++)
    {
        if ((abs(Jolly[i + 1] - Jolly[i])) < 1 || (abs(Jolly[i + 1] - Jolly[i])) > (N - 1))
        {
            temp = 1;
        }
    }
    if (temp == 0)
    {
        cout << "Jolly" << endl;
    }
    else if (temp == 1)
    {
        cout << "Not jolly" << endl;
    }

    return 0;
}
