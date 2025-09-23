// 這題要稍微記一下公式

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S;
    cin >> S;
    while (S--)
    {
        int N, i;
        double p;
        cin >> N >> p >> i;
        if (p == 0)
        {
            cout << "0.0000\n";
            continue;
        }
        double first = pow(1.0 - p, i - 1) * p;
        double second = pow(1.0 - p, N);
        cout << fixed << setprecision(4) << first / (1.0 - second) << "\n";
    }
    return 0;
}