#include <bits/stdc++.h>
using namespace std;

struct Point
{
    double x, y;
};

struct Line
{
    double a, b, c; // ax + by = c
};

// 由兩點生成直線的一般式 ax+by=c
Line getLine(Point p1, Point p2)
{
    Line L;
    L.a = p2.y - p1.y;
    L.b = p1.x - p2.x;
    L.c = L.a * p1.x + L.b * p1.y;
    return L;
}

// 判斷並輸出兩直線關係
void intersect(Point p1, Point p2, Point p3, Point p4)
{
    Line L1 = getLine(p1, p2);
    Line L2 = getLine(p3, p4);

    double det = L1.a * L2.b - L2.a * L1.b;

    if (fabs(det) < 1e-9)
    {
        // 平行或重合
        if (fabs(L1.a * p3.x + L1.b * p3.y - L1.c) < 1e-9)
            cout << "LINE\n"; // 重合
        else
            cout << "NONE\n"; // 平行
    }
    else
    {
        // 有唯一交點
        double x = (L1.c * L2.b - L2.c * L1.b) / det;
        double y = (L1.a * L2.c - L2.a * L1.c) / det;
        cout << fixed << setprecision(2);
        cout << "POINT " << x << " " << y << "\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    cout << "INTERSECTING LINES OUTPUT\n";
    while (N--)
    {
        Point A, B, C, D;
        cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> D.x >> D.y;
        intersect(A, B, C, D);
    }
    cout << "END OF OUTPUT\n";
    return 0;
}
