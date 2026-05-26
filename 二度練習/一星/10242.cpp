#include <iostream>
#include <iomanip>

using namespace std;

// 定義一個結構來儲存二維座標
struct Point
{
    double x, y;

    // 多載 == 運算子，方便判斷兩個點是否相同
    bool operator==(const Point &other) const
    {
        return (x == other.x && y == other.y);
    }
};

int main()
{
    // 串流優化
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Point p1, p2, p3, p4;

    // 設定輸出格式：固定小數點後 3 位
    cout << fixed << setprecision(3);

    // 連續讀取測資，直到檔案結束 (EOF)
    while (cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y >> p4.x >> p4.y)
    {
        Point A, B, C, D;

        // 判斷哪兩個點是重疊的公共點 B
        if (p1 == p3)
        {
            B = p1;
            A = p2;
            C = p4;
        }
        else if (p1 == p4)
        {
            B = p1;
            A = p2;
            C = p3;
        }
        else if (p2 == p3)
        {
            B = p2;
            A = p1;
            C = p4;
        }
        else if (p2 == p4)
        {
            B = p2;
            A = p1;
            C = p3;
        }

        // 依據公式：D = A + C - B
        D.x = A.x + C.x - B.x;
        D.y = A.y + C.y - B.y;

        // 輸出第四個點
        cout << D.x << " " << D.y << "\n";
    }

    return 0;
}