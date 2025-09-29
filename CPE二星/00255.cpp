#include <bits/stdc++.h>
using namespace std;

int k, q1, q2;
int q1x, q1y, q2x, q2y, kx, ky;

bool is_between(int a, int b, int c)
{
    if (b > a)
    {
        swap(a, b);
    }
    if (a > c && c > b)
    {
        return true;
    }
    return false;
}

bool is_illegal_move()
{
    if (k == q2 || q1 == q2)
        return true;
    if (q1 % 8 != q2 % 8 && q1 / 8 != q2 / 8)
        return true;
    if ((is_between(q1x, q2x, kx) && q1y == ky) || (is_between(q1y, q2y, ky) && q1x == kx))
        return true;
    return false;
}

bool is_move_not_allow()
{
    if ((k + 1 == q2 && q2 % 8 != 0) || // 國王右邊
        (k - 1 == q2 && q2 % 8 != 7) || // 國王左邊
        (k - 8 == q2) ||                // 國王上方
        (k + 8 == q2))                  // 國王下方
        return true;
    return false;
}

bool is_stop()
{
    if ((k == 0 && q2 == 9) ||
        (k == 7 && q2 == 14) ||
        (k == 56 && q2 == 49) ||
        (k == 63 && q2 == 54))
        return true;
    return false;
}

int main()
{
    while (cin >> k >> q1 >> q2)
    {
        q1x = q1 / 8;
        q1y = q1 % 8;
        q2x = q2 / 8;
        q2y = q2 % 8;
        kx = k / 8;
        ky = k % 8;

        if (k == q1)
            cout << "Illegal state\n";
        else if (is_illegal_move())
            cout << "Illegal move\n";
        else if (is_move_not_allow())
            cout << "Move not allowed\n";
        else if (is_stop())
            cout << "Stop\n";
        else
            cout << "Continue\n";
    }
}