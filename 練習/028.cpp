// D = A + C - B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x[4], y[4];
    double x1, y1, x2, y2, x3, y3;
    while (cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3])
    {
        if (x[1] == x[2] && y[1] == y[2])
        {
            x1 = x[0];
            y1 = y[0];
            x2 = x[1];
            y2 = y[1];
            x3 = x[3];
            y3 = y[3];
        }
        else if (x[0] == x[2] && y[0] == y[2])
        {
            x1 = x[1];
            y1 = y[1];
            x2 = x[0];
            y2 = y[0];
            x3 = x[3];
            y3 = y[3];
        }
        else if (x[0] == x[3] && y[0] == y[3])
        {
            x1 = x[1];
            y1 = y[1];
            x2 = x[0];
            y2 = y[0];
            x3 = x[2];
            y3 = y[2];
        }
        else if (x[1] == x[3] && y[1] == y[3])
        {
            x1 = x[0];
            y1 = y[0];
            x2 = x[1];
            y2 = y[1];
            x3 = x[2];
            y3 = y[2];
        }
        cout << fixed << setprecision(3) << x3 + x1 - x2 << " " << y3 + y1 - y2 << "\n";
    }
    return 0;
}

// vector版

// #include <iostream>
// #include <iomanip>
// using namespace std;

// struct Point
// {
//     double x, y;
//     // 向量加法
//     Point operator+(const Point &other) const
//     {
//         return {x + other.x, y + other.y};
//     }
//     // 向量減法
//     Point operator-(const Point &other) const
//     {
//         return {x - other.x, y - other.y};
//     }
// };

// int main()
// {
//     Point p[4];
//     while (cin >> p[0].x >> p[0].y >> p[1].x >> p[1].y >> p[2].x >> p[2].y >> p[3].x >> p[3].y)
//     {
//         Point A, B, C;

//         // 找出哪一個點是重複的 (B)，剩下兩個就是 A、C
//         if (p[0].x == p[1].x && p[0].y == p[1].y)
//         {
//             B = p[0];
//             A = p[2];
//             C = p[3];
//         }
//         else if (p[0].x == p[2].x && p[0].y == p[2].y)
//         {
//             B = p[0];
//             A = p[1];
//             C = p[3];
//         }
//         else if (p[0].x == p[3].x && p[0].y == p[3].y)
//         {
//             B = p[0];
//             A = p[1];
//             C = p[2];
//         }
//         else if (p[1].x == p[2].x && p[1].y == p[2].y)
//         {
//             B = p[1];
//             A = p[0];
//             C = p[3];
//         }
//         else if (p[1].x == p[3].x && p[1].y == p[3].y)
//         {
//             B = p[1];
//             A = p[0];
//             C = p[2];
//         }
//         else
//         {
//             B = p[2];
//             A = p[0];
//             C = p[1];
//         } // (p[2]==p[3]) 的情況

//         // 平行四邊形公式
//         Point D = A + C - B;

//         cout << fixed << setprecision(3) << D.x << " " << D.y << "\n";
//     }
//     return 0;
// }
