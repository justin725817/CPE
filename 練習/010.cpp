#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1 = 0, num2 = 0, N;
    while (cin >> N)
    {
        int d[N] = {0};
        cin >> num1;
        for (int i = 1; i < N; i++)
        {
            cin >> num2;
            d[abs(num2 - num1)]++;
            num1 = num2;
        }
        bool sus = true;
        for (int i = 1; i < N; i++)
        {
            if (d[i] != 1)
            {
                sus = false;
                break;
            }
        }
        if (sus)
        {
            cout << "Jolly\n";
        }
        else
        {
            cout << "Not jolly\n";
        }
    }
}