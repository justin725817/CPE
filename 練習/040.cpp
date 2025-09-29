#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int I, n;
    while (cin >> I)
    {
        if (I == 0)
            break;
        string B = "";
        n = I;
        int cnt = 0;
        while (n)
        { // 非 0
            cnt += (n & 1);
            B += '0' + (n & 1);
            n >>= 1;
        }
        reverse(B.begin(), B.end());
        cout << "The parity of " << B << " is " << cnt << " (mod 2).\n";
        return 0;
    }
}