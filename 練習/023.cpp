#include <bits/stdc++.h>
using namespace std;

int GCD(int x, int y)
{
    while ((x %= y) && (y %= x))
        ;
    return x + y;
}

int main()
{
    int N;
    string S1, S2;
    cin >> N;
    for (int Case = 1; Case <= N; Case++)
    {
        cin >> S1 >> S2;

        int n1 = stoi(S1, nullptr, 2);
        int n2 = stoi(S2, nullptr, 2);

        cout << "Pair #" << Case;
        if (GCD(n1, n2) > 1)
            cout << ": All you need is love!\n";
        else
            cout << ": Love is not all you need!\n";
    }
    return 0;
}
